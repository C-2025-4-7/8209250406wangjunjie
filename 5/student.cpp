#include <iostream>
#include "student.h"

using namespace std;


Student::Student() {
    num = 0;
    name[0] = '\0';  
    sex = '\0';
}


Student::Student(int n, const char* nm, char s) {
    num = n;
    sex = s;  
    int i = 0;  
    while (nm[i] != '\0' && i < 19) {
        name[i] = nm[i];
        i++;
    }
    name[i] = '\0';  
}


void Student::set_value(int n, const char* nm, char s) {
    num = n;
    sex = s;

    
    int i = 0;
    
    while (nm[i] != '\0' && i < 19) {
        name[i] = nm[i];
        i++;
    }
    name[i] = '\0';  
}

void Student::display() {
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}