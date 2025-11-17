#include<iostream>
#include<cctype>  
using namespace std;

int main() {
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    cout << "请输入一行字符: ";

    while ((c = cin.get()) != '\n') {
        if (isalpha(c)) {        
            letters++;
        }
        else if (isdigit(c)) {  
            digits++;
        }
        else if (isspace(c)) {  
            spaces++;
        }
        else {
            others++;
        }
    }

    
    cout << "\n统计结果:" << endl;
    cout << "英文字母: " << letters << " 个" << endl;
    cout << "数字字符: " << digits << " 个" << endl;
    cout << "空白字符: " << spaces << " 个" << endl;
    cout << "其他字符: " << others << " 个" << endl;

    return 0;
}