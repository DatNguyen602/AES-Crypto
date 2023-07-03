#include <iostream>
#include <fstream>
using namespace std;

namespace hcs{
    string arr[] = {"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};

    long pw(int a,int n){
        if(n==0) return 1;
        int d = pw(a,n/2);
        if(n%2==0) return d*d;
        return d*d*a;
    }

    string cCS(int a,int b){
        string str = "";
        if(a<b) return "0" + arr[a];

        while(a != 0){
            str = arr[a % b] + str;
            a /= b;
        }
        return str;
    }

    string cCS(int a,int b,int d){
        string str = "";
        while(a != 0){
            str = arr[a % b] + str;
            a /= b;
        }
        for(int i=str.size();i<d;i++){
            str = '0' + str;
        }
        return str;
    }

    int cCS(string str,int b){
        int a = 0;
        for(int i=0;i<str.size();i++){
            if(str[i]>='0' && str[i]<='9'){
                a += (int(str[i]) - '0') * pw(b,str.size()-i-1);
            }
            else{
                a += ((int(str[i]) - 'A') + 10) * pw(b,str.size()-i-1);
            }
        }
        return a;
    }

    int cCS(char str,int b){
        if(str>='0' && str<='9'){
            return (int(str) - '0');
        }
        else{
            return ((int(str) - 'A') + 10);
        }
    }

    string cCS(string str, int b , int c){
        string arr_b[] = {"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};
        if(b==16 && c==2){
            string str_t = "";
            for(int i=0;i<str.size();i++){
                str_t += arr_b[cCS(str[i],16)];
            }
            if(str.size()==1) str_t += (arr_b[0]);
            return str_t;
        }
        return cCS(cCS(str,b),c);
    }

    inline string shifLeftBit(string str,int n){
        for(int i=0;i<n;i++){
            char c = str[0];
            for(int i=0;i<str.size()-1;i++){
                str[i] = str[i+1];
            }
            str[str.size()-1] = c;
        }

        return str;
    }

    string xorBit(string a,string b){ 
        string str_xorbit = "";
        for(int i=0;i<8;++i){
            str_xorbit += a[i] == b[i] ? '0' : '1';
        }
        return str_xorbit;
    }

    string* xorByte(string* str_a,string* str_b,int n){
        string* str = new string[4];
        for(int i=0;i<4;i++){
            string a = xorBit(cCS(str_a[i],16,2),cCS(str_b[i],16,2));
            str[i] = cCS(a,2,16);
        }

        return str;
    }
}
