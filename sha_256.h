#include <iostream>
#include <iomanip>
#include <cstring>

typedef unsigned char uint8;
typedef unsigned int uint32;
typedef unsigned long long uint64;

#define SHA_LBLOCK 16
#define SHA256_BLOCK_SIZE 32

typedef struct {
    uint8 data[64];
    uint32 datalen;
    uint64 bitlen[2];
    uint32 state[8];
} SHA256_CTX;

const uint32 sha256_k[64] = //UL = uint32
    {0x428a2f98UL, 0x71374491UL, 0xb5c0fbcfUL, 0xe9b5dba5UL, 0x3956c25bUL, 0x59f111f1UL, 0x923f82a4UL, 0xab1c5ed5UL,
    0xd807aa98UL, 0x12835b01UL, 0x243185beUL, 0x550c7dc3UL, 0x72be5d74UL, 0x80deb1feUL, 0x9bdc06a7UL, 0xc19bf174UL,
    0xe49b69c1UL, 0xefbe4786UL, 0x0fc19dc6UL, 0x240ca1ccUL, 0x2de92c6fUL, 0x4a7484aaUL, 0x5cb0a9dcUL, 0x76f988daUL,
    0x983e5152UL, 0xa831c66dUL, 0xb00327c8UL, 0xbf597fc7UL, 0xc6e00bf3UL, 0xd5a79147UL, 0x06ca6351UL, 0x14292967UL,
    0x27b70a85UL, 0x2e1b2138UL, 0x4d2c6dfcUL, 0x53380d13UL, 0x650a7354UL, 0x766a0abbUL, 0x81c2c92eUL, 0x92722c85UL,
    0xa2bfe8a1UL, 0xa81a664bUL, 0xc24b8b70UL, 0xc76c51a3UL, 0xd192e819UL, 0xd6990624UL, 0xf40e3585UL, 0x106aa070UL,
    0x19a4c116UL, 0x1e376c08UL, 0x2748774cUL, 0x34b0bcb5UL, 0x391c0cb3UL, 0x4ed8aa4aUL, 0x5b9cca4fUL, 0x682e6ff3UL, 
    0x748f82eeUL, 0x78a5636fUL, 0x84c87814UL, 0x8cc70208UL, 0x90befffaUL, 0xa4506cebUL, 0xbef9a3f7UL, 0xc67178f2UL
    };

inline uint32 sha256_rightrotate(uint32 x, uint32 c) {
    return (x >> c) | (x << (32 - c));
}

void sha256_transform(SHA256_CTX *ctx, const uint8 data[]) {
    uint32 a, b, c, d, e, f, g, h, i, j, t1, t2, m[64];

    for (i = 0, j = 0; i < 16; ++i, j += 4)
        m[i] = (data[j] << 24) | (data[j + 1] << 16) | (data[j + 2] << 8) | (data[j + 3]);
    for (; i < 64; ++i){
        m[i] = sha256_rightrotate(m[i - 2], 17) ^ sha256_rightrotate(m[i - 2], 19) ^ (m[i - 2] >> 10)
               + m[i - 7] + sha256_rightrotate(m[i - 15], 7) ^ sha256_rightrotate(m[i - 15], 18) ^ (m[i - 15] >> 3)
               + m[i - 16];
    }

    a = ctx->state[0];
    b = ctx->state[1];
    c = ctx->state[2];
    d = ctx->state[3];
    e = ctx->state[4];
    f = ctx->state[5];
    g = ctx->state[6];
    h = ctx->state[7];

    for (i = 0; i < 64; ++i) {
        t1 = h + sha256_rightrotate(e,6) ^ sha256_rightrotate(e,11) ^ sha256_rightrotate(e,25)
             + (g ^ (e & (f ^ g))) + sha256_k[i] + m[i];
        t2 = sha256_rightrotate(a,2) ^ sha256_rightrotate(a,13) ^ sha256_rightrotate(a,22)
             + ((a & b) | (c & (a | b)));
        h = g;
        g = f;
        f = e;
        e = d + t1;
        d = c;
        c = b;
        b = a;
        a = t1 + t2;
    }

    ctx->state[0] += a;
    ctx->state[1] += b;
    ctx->state[2] += c;
    ctx->state[3] += d;
    ctx->state[4] += e;
    ctx->state[5] += f;
    ctx->state[6] += g;
    ctx->state[7] += h;
}

void sha256_init(SHA256_CTX *ctx) {
    ctx->datalen = 0;
    ctx->bitlen[0] = ctx->bitlen[1] = 0;
    ctx->state[0] = 0x6a09e667UL;
    ctx->state[1] = 0xbb67ae85UL;
    ctx->state[2] = 0x3c6ef372UL;
    ctx->state[3] = 0xa54ff53aUL;
    ctx->state[4] = 0x510e527fUL;
    ctx->state[5] = 0x9b05688cUL;
    ctx->state[6] = 0x1f83d9abUL;
    ctx->state[7] = 0x5be0cd19UL;
}

void sha256_update(SHA256_CTX *ctx, const uint8 data[], uint32 len) {
    uint32 i;

    for (i = 0; i < len; ++i) {
        ctx->data[ctx->datalen] = data[i];
        ctx->datalen++;
        if (ctx->datalen == 64) {
            sha256_transform(ctx, ctx->data);
            if (ctx->bitlen[1] > 0xffffffff - (512))
                ctx->bitlen[0]++;
            ctx->bitlen[1] += 512;
            ctx->datalen = 0;
        }
    }
}

void sha256_final(SHA256_CTX *ctx, uint8 hash[]) {
    uint32 i;

    i = ctx->datalen;
    if (ctx->datalen < 56) {
        ctx->data[i++] = 0x80;
        while (i < 56)
            ctx->data[i++] = 0x00;
    } else {
        ctx->data[i++] = 0x80;
        while (i < 64)
            ctx->data[i++] = 0x00;
        sha256_transform(ctx, ctx->data);
        memset(ctx->data, 0, 56);
    }

    if (ctx->bitlen[1] > 0xffffffff - ((ctx->datalen) * 8))
        ctx->bitlen[0]++;
    ctx->bitlen[1] += ctx->datalen * 8;
    ctx->data[63] = ctx->bitlen[1];
    ctx->data[62] = ctx->bitlen[1] >> 8;
    ctx->data[61] = ctx->bitlen[1] >> 16;
    ctx->data[60] = ctx->bitlen[1] >> 24;
    ctx->data[59] = ctx->bitlen[0];
    ctx->data[58] = ctx->bitlen[0] >> 8;
    ctx->data[57] = ctx->bitlen[0] >> 16;
    ctx->data[56] = ctx->bitlen[0] >> 24;
    sha256_transform(ctx, ctx->data);

    for (i = 0; i < 4; ++i) {
        hash[i] = (ctx->state[0] >> (24 - i * 8)) & 0x000000ff;
        hash[i + 4] = (ctx->state[1] >> (24 - i * 8)) & 0x000000ff;
        hash[i + 8] = (ctx->state[2] >> (24 - i * 8)) & 0x000000ff;
        hash[i + 12] = (ctx->state[3] >> (24 - i * 8)) & 0x000000ff;
        hash[i + 16] = (ctx->state[4] >> (24 - i * 8)) & 0x000000ff;
        hash[i + 20] = (ctx->state[5] >> (24 - i * 8)) & 0x000000ff;
        hash[i + 24] = (ctx->state[6] >> (24 - i * 8)) & 0x000000ff;
        hash[i + 28] = (ctx->state[7] >> (24 - i * 8)) & 0x000000ff;
    }
}

void to_char(double a,double b,uint8 c[256]){
    int i=0;
    int t_a = int(a), t_b = int(b);
    while(t_a>0){
        c[i] = char(t_a%26 + 97);
        t_a /= 26;
        i++;
    }
    while(t_b>0){
        c[i] = char(t_b%26 + 97);
        t_b /= 26;
        i++;
    }
    c[i] = '\0';
    std::cout<<c<<std::endl;
}

System::String^ sha_256(uint8 data[256]){
    uint32 len = strlen((char *) data);
    uint8 hash[SHA256_BLOCK_SIZE];
    SHA256_CTX ctx;

    sha256_init(&ctx);
    sha256_update(&ctx, data, len);
    sha256_final(&ctx, hash);

    String^ str_out = "";
    for (int i = 0; i < SHA256_BLOCK_SIZE; i++) {
        str_out += String::Format("{0:x2}", hash[i]);
    }
    return str_out;
}