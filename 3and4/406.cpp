#include<iostream>
using namespace std;

void count(const char s[], int counts[]);
void displayCounts(const int counts[]);

int main() {
    char s[100];

    cout << "输入一个字符串: ";
    cin.getline(s, 100);  

    int counts[26] = { 0 };
    count(s, counts);
    displayCounts(counts);

    return 0;
}

void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch - 'A' + 'a';
        }

        
        if (ch >= 'a' && ch <= 'z') {
            counts[ch - 'a']++;
        }
    }
}

void displayCounts(const int counts[]) {
    cout << "\n字母出现次数（只显示非零）:\n";

    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            cout << (char)('a' + i) << ": " << counts[i]<<" times";

            
            cout << " ";
            
            if (counts[i] > 20) {
                cout << "...";
            }
            cout << endl;
        }
    }
}