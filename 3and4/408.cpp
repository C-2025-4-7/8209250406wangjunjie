#include<iostream>
using namespace std;
int parseHex(const char* s);
int main() {
    char s[50];
    char c;
    int i = 0;
    cout << "输入一个十六进制数：";
    while ((c = cin.get()) != '\n' && i < 99) {
        s[i++] = c;
    }
    s[i] = '\0';
    
    cout<<"十进制数为："<< parseHex(s);
    return 0;
}
int parseHex(const char* s) {
    
    if (s == nullptr) {
        return 0;
    }

    int result = 0;
    const char* ptr = s;

   
    while (*ptr != '\0') {
        char ch = *ptr;
        int digitValue;

        
        if (ch >= '0' && ch <= '9') {
            digitValue = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F') {
            digitValue = 10 + (ch - 'A');
        }
        else if (ch >= 'a' && ch <= 'f') {
            digitValue = 10 + (ch - 'a');
        }
        else {
            
            digitValue = 0;
        }

        
        result = result * 16 + digitValue;
        ptr++; 
    }

    return result;
}