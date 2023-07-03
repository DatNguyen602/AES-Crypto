#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

template<typename value>
value pow(value x,int n){
    if(n==0) return 1;
    value d = pow(x,n/2);
    if(n%2==0) return d*d;
    return d*d*x;
}

bool isPre(int a){
    if(a ==2) return true;
    if(a<2 || a%2 ==0) return false;
    for(int i=3;i*i<=a;i++){
        if(a%i==0) return false;
    }
    return true;
}

void Rand_pab(int& a,int& b){
    srand(time(NULL));
    do {
        a = rand() % 26;
        b = rand() % 26;
    } while (a * a * a * 4 + 27 * a * a == 0);
}

const int mod = 1e9 + 7;

struct point {
    int x, y;
    point(int x = 0, int y = 0) : x(x), y(y) {}
};

int add(int a, int b) {
    return (a + b) % mod;
}

int mul(int a, int b) {
    return (1LL * a * b) % mod;
}

int sub(int a, int b) {
    return (a - b + mod) % mod;
}

int pow(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) res = mul(res, a);
        a = mul(a, a);
        b >>= 1;
    }
    return res;
}

int inv(int x) {
    return pow(x, mod - 2);
}

struct EllipticCurve {
    int a, b;
    EllipticCurve(int a = 0, int b = 0) : a(a), b(b) {}
};

EllipticCurve curve;

bool is_on_curve(point p) {
    return mul(p.y, p.y) == add(add(mul(p.x, p.x), mul(curve.a, p.x)), curve.b);
}

point add(point p1, point p2) {
    if (p1.x == -1 || p2.x == -1) return p1.x == -1 ? p2 : p1;
    if (p1.x == p2.x && p1.y != p2.y) return { -1, -1 };
    if (p1.x == p2.x && p1.y == p2.y && p1.y != 0) {
        int t = mul(3, mul(p1.x, p1.x));
        t = add(t, curve.a);
        t = mul(t, inv(mul(2, p1.y)));
        int x3 = sub(sub(mul(t, t), mul(2, p1.x)), curve.a);
        int y3 = sub(mul(t, sub(p1.x, x3)), p1.y);
        return { x3, y3 };
    }
    if (p1.x != p2.x) {
        int t = sub(p2.y, p1.y);
        t = mul(t, inv(sub(p2.x, p1.x)));
        int x3 = sub(sub(mul(t, t), add(p1.x, p2.x)), curve.a);
        int y3 = sub(mul(t, sub(p1.x, x3)), p1.y);
        return { x3, y3 };
    }
    return { 0, 0 };
}

point mul(point b, int n) {
    point t = b;
    for (int i = 1; i < n; i++) {
        t = add(b,t);
    }
    return t;
}

long long rand_x(double min,double max,int a,int b){
    srand(time(NULL));
    long long t;
    do {
        t = rand() % (int(max) - int(min) + 1) + min + 2;
    } while (t*t*t + a*t + b <0);
    return t;
}

double e_y(int a,int b,double x){
    double y_squared = pow(x, 3) + a * x + b;
    return  sqrt(y_squared);
}