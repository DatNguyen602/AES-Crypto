#include <cstring>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cctype>
#include <cliext/vector>
#include "hecoso.h"
using namespace std;
using namespace System;
using namespace System::Threading;
using namespace cliext;

namespace aes{
    namespace table{
        std::string s_box_dao[16][16] = {
            {"52", "09", "6A", "D5", "30", "36", "A5", "38", "BF", "40", "A3", "9E", "81", "F3", "D7", "FB"}, 
            {"7C", "E3", "39", "82", "9B", "2F", "FF", "87", "34", "8E", "43", "44", "C4", "DE", "E9", "CB"}, 
            {"54", "7B", "94", "32", "A6", "C2", "23", "3D", "EE", "4C", "95", "0B", "42", "FA", "C3", "4E"}, 
            {"08", "2E", "A1", "66", "28", "D9", "24", "B2", "76", "5B", "A2", "49", "6D", "8B", "D1", "25"}, 
            {"72", "F8", "F6", "64", "86", "68", "98", "16", "D4", "A4", "5C", "CC", "5D", "65", "B6", "92"}, 
            {"6C", "70", "48", "50", "FD", "ED", "B9", "DA", "5E", "15", "46", "57", "A7", "8D", "9D", "84"}, 
            {"90", "D8", "AB", "00", "8C", "BC", "D3", "0A", "F7", "E4", "58", "05", "B8", "B3", "45", "06"}, 
            {"D0", "2C", "1E", "8F", "CA", "3F", "0F", "02", "C1", "AF", "BD", "03", "01", "13", "8A", "6B"}, 
            {"3A", "91", "11", "41", "4F", "67", "DC", "EA", "97", "F2", "CF", "CE", "F0", "B4", "E6", "73"}, 
            {"96", "AC", "74", "22", "E7", "AD", "35", "85", "E2", "F9", "37", "E8", "1C", "75", "DF", "6E"}, 
            {"47", "F1", "1A", "71", "1D", "29", "C5", "89", "6F", "B7", "62", "0E", "AA", "18", "BE", "1B"}, 
            {"FC", "56", "3E", "4B", "C6", "D2", "79", "20", "9A", "DB", "C0", "FE", "78", "CD", "5A", "F4"}, 
            {"1F", "DD", "A8", "33", "88", "07", "C7", "31", "B1", "12", "10", "59", "27", "80", "EC", "5F"}, 
            {"60", "51", "7F", "A9", "19", "B5", "4A", "0D", "2D", "E5", "7A", "9F", "93", "C9", "9C", "EF"}, 
            {"A0", "E0", "3B", "4D", "AE", "2A", "F5", "B0", "C8", "EB", "BB", "3C", "83", "53", "99", "61"}, 
            {"17", "2B", "04", "7E", "BA", "77", "D6", "26", "E1", "69", "14", "63", "55", "21", "0C", "7D"}
        };
        std::string s_box[16][16] = {
            {"63", "7C", "77", "7B", "F2", "6B", "6F", "C5", "30", "01", "67", "2B", "FE", "D7", "AB", "76"},
			{"CA", "82", "C9", "7D", "FA", "59", "47", "F0", "AD", "D4", "A2", "AF", "9C", "A4", "72", "C0"},
			{"B7", "FD", "93", "26", "36", "3F", "F7", "CC", "34", "A5", "E5", "F1", "71", "D8", "31", "15"},
			{"04", "C7", "23", "C3", "18", "96", "05", "9A", "07", "12", "80", "E2", "EB", "27", "B2", "75"},
			{"09", "83", "2C", "1A", "1B", "6E", "5A", "A0", "52", "3B", "D6", "B3", "29", "E3", "2F", "84"},
			{"53", "D1", "00", "ED", "20", "FC", "B1", "5B", "6A", "CB", "BE", "39", "4A", "4C", "58", "CF"},
			{"D0", "EF", "AA", "FB", "43", "4D", "33", "85", "45", "F9", "02", "7F", "50", "3C", "9F", "A8"},
			{"51", "A3", "40", "8F", "92", "9D", "38", "F5", "BC", "B6", "DA", "21", "10", "FF", "F3", "D2"},
			{"CD", "0C", "13", "EC", "5F", "97", "44", "17", "C4", "A7", "7E", "3D", "64", "5D", "19", "73"},
			{"60", "81", "4F", "DC", "22", "2A", "90", "88", "46", "EE", "B8", "14", "DE", "5E", "0B", "DB"},
			{"E0", "32", "3A", "0A", "49", "06", "24", "5C", "C2", "D3", "AC", "62", "91", "95", "E4", "79"},
			{"E7", "C8", "37", "6D", "8D", "D5", "4E", "A9", "6C", "56", "F4", "EA", "65", "7A", "AE", "08"},
			{"BA", "78", "25", "2E", "1C", "A6", "B4", "C6", "E8", "DD", "74", "1F", "4B", "BD", "8B", "8A"},
			{"70", "3E", "B5", "66", "48", "03", "F6", "0E", "61", "35", "57", "B9", "86", "C1", "1D", "9E"},
			{"E1", "F8", "98", "11", "69", "D9", "8E", "94", "9B", "1E", "87", "E9", "CE", "55", "28", "DF"},
			{"8C", "A1", "89", "0D", "BF", "E6", "42", "68", "41", "99", "2D", "0F", "B0", "54", "BB", "16"}
        };

        int a[4][4] = {
            {2,3,1,1},
            {1,2,3,1},
            {1,1,2,3},
            {3,1,1,2}
        };

        int ra[4][4] = {
            {14,11,13,9},
            {9,14,11,13},
            {13,9,14,11},
            {11,13,9,14}
        };

        std::string rCon[] = {
            "01000000",  "02000000",  "04000000",  "08000000",
            "10000000",  "20000000", "40000000",  "82000000",
            "1B000000",  "36000000",  "6C000000", "D8000000",
            "AB000000",  "4D000000"
        };
    }
}

std::string** StringtoArray(std::string str,int n){
    std::string** arr = new std::string*[4];
    for(int i=3;i>=0;--i){
        arr[i] = new std::string[n/32];
        for(int j=n/32 - 1;j>=0;--j){
            arr[i][j].push_back(str[static_cast<int64_t>(i * n / 16 + j * 2)]);
            arr[i][j].push_back(str[static_cast<int64_t>(i * n / 16 + j * 2 + 1)]);
        }
    }
    return arr;
}

std::string toString(std::string** arr,int n){
    std::string str = "";
    for(int i=0;i<4;i++){
        for(int j=0;j<n/32;j++){
            str += arr[i][j];
        }
    }
    return str;
}

std::string randKey(int n){
    std::string str = "";
    srand(time(NULL));
    for(int i=0;i<n/4;i++){
        str += hcs::arr[(rand()%16)];
    }
    return str;
}

class KeyArray {
private:
    int n;
public:
    std::string** key;
    std::string** getKeyArray() {
        return key;
    }

    int getN() {
        return n;
    }

    int nr() {
        switch (n) {
        case 128:
            return 10;
        case 192:
            return 12;
        case 256:
            return 14;
        default:
            return 0;
        }
    }

    KeyArray() {
        this->n = 128;
        key = new std::string * [4];
        for (int i = 3; i >= 0; --i) {
            key[i] = new std::string[n / 32];
            for (int j = n / 32 - 1; j >= 0; --j) {
                key[i][j] = "00";
            }
        }
    }

    KeyArray(string str, int n) {
        this->n = n;
        key = new string * [4];
        for (int i = 0; i < 4; i++) {
            key[i] = new string[n / 32];
            for (int j = 0; j < n / 32; j++) {
                key[i][j] = str[static_cast<int64_t>(i * (n / 32) + j) * 2];
                key[i][j] += str[static_cast<int64_t>(i * (n / 32) + j) * 2 + 1];
            }
        }
    }

    KeyArray toArray(string str, int n) {
        for (int i = 3; i >= 0; --i) {
            for (int j = n / 32 - 1; j >= 0; --j) {
                key[i][j].push_back(str[static_cast<int64_t>(i * n / 16 + j * 2)]);
                key[i][j].push_back(str[static_cast<int64_t>(i * n / 16 + j * 2 + 1)]);
            }
        }
    }

    void setKey(string* a, string* b, string* c, string* d) {
        for (int i = 0; i < 4; i++) {
            this->key[i][0] = a[i];
            this->key[i][1] = b[i];
            this->key[i][2] = c[i];
            this->key[i][3] = d[i];
        }
    }

    std::string ArrToString() {
        std::string s = "";
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < (n / 32); ++j) {
                s += key[i][j];
            }
        }
        return s;
    }
};

namespace aes {
    string** addRoundKey(string** str_x, string** str_k, int n) {
        string** str = new string * [4];
        for (int i = 0; i < 4; i++) {
            str[i] = new string[4];
            for (int j = 0; j < 4; j++) {
                string b1 = hcs::cCS(str_x[i][j], 16, 2);
                string b2 = hcs::cCS(str_k[i][j], 16, 2);
                str[i][j] = hcs::cCS(hcs::xorBit(b1, b2), 2, 16);
            }
        }
        return str;
    }

    string* subBytes(string* str_k, int n, string table[16][16]) {
        string* str = new string[n / 32];
        for (int j = 0; j < n / 32; j++) {
            str[j] = table[hcs::cCS(str_k[j][0], 16)][hcs::cCS(str_k[j][1], 16)];
        }
        return str;
    }

    string** subBytes(string** str_k, int n, string table[16][16]) {
        string** str = new string * [4];
        for (int i = 0; i < 4; i++) {
            str[i] = new string[n / 32];
            for (int j = 0; j < n / 32; j++) {
                str[i][j] = table[hcs::cCS(str_k[i][j][0], 16)][hcs::cCS(str_k[i][j][1], 16)];
            }
        }
        return str;
    }

    string* shiftLeft(string* str, int n, int x) {
        for (int i = 0; i < x; i++) {
            string t = str[0];
            for (int j = 0; j < n / 32 - 1; j++) {
                str[j] = str[j + 1];
            }
            str[n / 32 - 1] = t;
        }
        return str;
    }

    string* strToArray(string str) {
        string* arr = new string[4];
        for (int i = 0; i < 4; i++) {
            arr[i] = str[static_cast<int64_t>(i * 2)];
            arr[i] += str[static_cast<int64_t>(i * 2 + 1)];
        }
        return arr;
    }

    string** shiftRow(string** str_k, int n) {
        string** str = new string * [4];
        for (int i = 0; i < 4; i++) {
            str[i] = new string[4];
            str[i] = shiftLeft(str_k[i], n, i);
        }
        return str;
    }
    string** reShiftRow(string** str_k, int n) {
        string** str = new string * [4];
        str[0] = new string[4];
        str[0] = str_k[0];
        for (int i = 1; i < 4; i++) {
            str[i] = new string[4];
            str[i] = shiftLeft(str_k[i], n, 4 - i);
        }
        return str;
    }

    string multi(string x, int n) {
        string str = x;
        string str_t;
        switch (n) {
            case 1: 
                return str;
            case 2: 
                return hcs::shifLeftBit(str, 1);
            case 3: 
                return hcs::xorBit(multi(str, 2), str);
            case 9: 
                return hcs::xorBit(hcs::shifLeftBit(str, 3), str);
            case 11:
                str_t = hcs::xorBit(hcs::shifLeftBit(str, 1), hcs::shifLeftBit(str, 3));
                return hcs::xorBit(str_t, str);
            case 13:
                str_t = hcs::xorBit(hcs::shifLeftBit(str, 2), hcs::shifLeftBit(str, 3));
                return hcs::xorBit(str_t, str);
            case 14:
                str_t = hcs::xorBit(hcs::shifLeftBit(str, 2), hcs::shifLeftBit(str, 3));
                return hcs::xorBit(str_t, hcs::shifLeftBit(str, 1));
            default: 
                return "";
        }
    }

    string mulMatix(string* str_a, int arr_b[]) {
        string str_matix = multi(hcs::cCS(str_a[0], 16, 2), arr_b[0]);
        for (int i = 1; i < 4; i++) {
            string temp = multi(hcs::cCS(str_a[i], 16, 2), arr_b[i]);
            str_matix = hcs::xorBit(str_matix, temp);
        }
        return hcs::cCS(str_matix, 2, 16);
    }

    string** mixColumn(string** str_k, int n) {
        string** str = new string * [4];
        str[0] = new string[4];
        str[1] = new string[4];
        str[2] = new string[4];
        str[3] = new string[4];
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                string* arr = new string[4];
                for (int t = 0; t < 4; t++) {
                    arr[t] = str_k[j][t];
                }
                str[j][i] = mulMatix(arr, aes::table::a[i]);
            }
        }
        return str;
    }
    string** reMixColumn(string** str_k, int n) {
        string** str_invMC = new string * [4];
        str_invMC[0] = new string[4];
        str_invMC[1] = new string[4];
        str_invMC[2] = new string[4];
        str_invMC[3] = new string[4];
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                string* arr = new string[4];
                for (int t = 0; t < 4; t++) {
                    arr[t] = str_k[j][t];
                }
                str_invMC[j][i] = mulMatix(arr, aes::table::ra[i]);
            }
        }
        return str_invMC;
    }


    KeyArray* createKey(KeyArray k) {
        KeyArray* K = new KeyArray[k.nr() + 1];
        string** arr = new string * [(k.nr() + 1) * 4];

        for (int i = 0; i < 4 * (k.nr() + 1); i++) {
            arr[i] = new string[4];
        }
        for (int i = 0; i < k.getN() / 32; i++) {
            for (int j = 0; j < 4; j++) {
                arr[i][j] = k.getKeyArray()[j][i];
            }
        }

        int n_rcon = 0;
        for (int i = k.getN() / 32; i < 4 * (k.nr() + 1); i++) {
            if (i % 4 != 0) {
                arr[i] = hcs::xorByte(arr[i - 1], arr[i - 4], 128);
            }
            else {
                arr[i] = shiftLeft(arr[i - 1], 128, 1);
                arr[i] = subBytes(arr[i], 128, aes::table::s_box);
                arr[i] = hcs::xorByte(arr[i], strToArray(aes::table::rCon[n_rcon]), 128);
                n_rcon++;
                arr[i] = hcs::xorByte(arr[i], arr[i - 4], 128);
            }
        }
        for (int i = 0; i < k.nr() + 1; i++) {
            K[i].setKey(arr[i * 4], arr[i * 4 + 1], arr[i * 4 + 2], arr[i * 4 + 3]);
        }

        return K;
    }

    string AsctoHex(string str) {
        string s = "";
        for (int i = 0; i < str.size(); i++) {
            s += (hcs::cCS(int(str[i]), 16));
        }
        for (int i = str.size(); i < 16; i++) {
            s += "00";
        }
        return s;
    }
    string HextoAsc(string str) {
        string s = "";
        string** arr = StringtoArray(str, 128);
        for (int i = 0; i < 16; i++) {
            s += char(hcs::cCS(arr[i / 4][i % 4], 16));
        }
        return s;
    }

    string maHoa(string str_BanRo, int n, KeyArray* krr) {
        int nr = 0;
        switch (n) {
            case 128:
                nr = 10; break;
            case 192:
                nr = 12; break;
            case 256:
                nr = 14; break;
            default:
                break;
        }
        string** banMa = StringtoArray(str_BanRo, 128);
        banMa = addRoundKey(banMa, krr[0].getKeyArray(), 128);
        for (int i = 1; i < nr; i++) {
            banMa = subBytes(banMa, 128, aes::table::s_box);
            banMa = shiftRow(banMa, 128);
            banMa = mixColumn(banMa, 128);
            banMa = addRoundKey(banMa, krr[i].getKeyArray(), 128);
        }
        banMa = subBytes(banMa, 128, aes::table::s_box);
        banMa = shiftRow(banMa, 128);
        banMa = addRoundKey(banMa, krr[nr].getKeyArray(), 128);

        return toString(banMa, 128);
    }

    string giaiMa(string str_BanMa, int n, KeyArray* krr) {
        int nr;
        switch (n) {
            case 128:
                nr = 10; break;
            case 192:
                nr = 12; break;
            case 256:
                nr = 14; break;
            default:
                break;
        }
        string** banRo = StringtoArray(str_BanMa, 128);
        banRo = addRoundKey(banRo, krr[nr].getKeyArray(), 128);
        for (int i = nr - 1; i > 0; i--) {
            banRo = reShiftRow(banRo, 128);
            banRo = subBytes(banRo, 128, aes::table::s_box_dao);
            banRo = addRoundKey(banRo, krr[i].getKeyArray(), 128);
            banRo = reMixColumn(banRo, 128);
        }
        banRo = reShiftRow(banRo, 128);
        banRo = subBytes(banRo, 128, aes::table::s_box_dao);
        banRo = addRoundKey(banRo, krr[0].getKeyArray(), 128);
        return toString(banRo, 128);
    }
}

string UnicodetoHex(wstring str_in){
    string new_str = "";
    for(int i=0;i<str_in.size();i++){
        new_str += hcs::cCS(int(str_in[i]),16,4);
    }
    return new_str;
}

wstring HextoUnicode(string str_in){
    wstring new_wstr = L"";
    int text_size = str_in.size()/4;
    if(str_in.size() % 4 !=0) ++text_size;
    for(int i=0;i<text_size;i++){
        new_wstr += wchar_t(hcs::cCS(str_in.substr(static_cast<int64_t>(i*4),4),16));
    }
    return new_wstr;
}

wstring StrtoUnicode(string str_in){
    wstring new_wstr = L"";
    for(int i=0;i<str_in.size();i++){
        new_wstr += wchar_t(int(str_in[i]));
    }
    return new_wstr;
}

string AES_Unicode(string ttext, string key, int n, string(*xuLy)(string, int, KeyArray*)) {
    string text_ma = "";
    int text_size = ttext.size() / 32;
    if (ttext.size() % 32 != 0) ++text_size;
    for (char& c : key) {  c = toupper(c);      }
    KeyArray k_gm(key, n);
    KeyArray* krr = aes::createKey(k_gm);
    Mutex^ mutex = gcnew Mutex();

    for (int i = 0; i < text_size; i++) {
        string str = ttext.substr(static_cast<int64_t>(i * 32), 32);
        for (int i = str.size(); i < 32; i++) {
            str += '0';
        }
        string result = (*xuLy)(str, n, krr);
        mutex->WaitOne();
        text_ma += result;
        mutex->ReleaseMutex();
    }

    return text_ma;
}

