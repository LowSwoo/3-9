#include <iostream>

using namespace std;

struct tableString {
    char nein;
    char ternary[3];
};

const int LEN = 80;

const tableString table[9] = {
    {'0', "00"},    
    {'1', "01"},
    {'2', "02"},
    {'3', "10"},
    {'4', "11"},
    {'5', "12"},
    {'6', "20"},
    {'7', "21"},
    {'8', "22"}
};

xyu

int main(){
    char ch[LEN];
    for (int i = 0; i <= LEN; i++){
        ch[i] = 0;
    }
    cin.getline(ch,LEN);
    for (int i =0; i<= LEN; i++){
        if (ch[i]){
            cout << ch[i] << endl;
        }
    }

    
    return 0;
}