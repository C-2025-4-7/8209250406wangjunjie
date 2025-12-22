#include <iostream>
using namespace std;

int indexof(const char* s1, const char* s2);

int main() {
    char s1[100], s2[100];

    
    cout << "s2: ";
    char c;
    int i = 0;
    while ((c = cin.get()) != '\n' && i < 99) {
        s2[i++] = c;
    }
    s2[i] = '\0';

    cout << "s1: ";
    i = 0;
    while ((c = cin.get()) != '\n' && i < 99) {
        s1[i++] = c;
    }
    s1[i] = '\0';

    
    cout << indexof(s1, s2) << endl;

    return 0;
}

int indexof(const char* s1, const char* s2) {
    
    if (!s1 || !s2) return -1;

    
    const char* base = s2;

    while (*s2) {
        const char* p1 = s1;
        const char* p2 = s2;

        while (*p1 && *p2 && *p1 == *p2) {
            p1++;
            p2++;
        }

        if (!*p1) {
            return s2 - base;
        }

        s2++;
    }

    return (*s1) ? -1 : 0;  
}