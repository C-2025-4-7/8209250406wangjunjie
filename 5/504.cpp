#include <iostream>
using namespace std;

class Student {
private:
    int num;      
    float score;  

public:
   
    Student() : num(0), score(0.0) {}

    Student(int n, float s) : num(n), score(s) {}

    
    int getNum() { return num; }

    float getScore() { return score; }

    void setData(int n, float s) {
        num = n;
        score = s;
    }

    void display() {
        cout << "学号：" << num << "，成绩：" << score << endl;
    }
};

void max(Student* students, int size) {
    if (size <= 0) {
        cout << "学生数组为空！" << endl;
        return;
    }

    float highestScore = students[0].getScore();
    int highestNum = students[0].getNum();

    for (int i = 1; i < size; i++) {
        if (students[i].getScore() > highestScore) {
            highestScore = students[i].getScore();
            highestNum = students[i].getNum();
        }
    }

    cout << "最高成绩者" << endl;
    cout << "学号：" << highestNum << endl;
    cout << "成绩：" << highestScore << endl;
 
    cout << "所有最高分学生" << endl;
    for (int i = 0; i < size; i++) {
        if (students[i].getScore() == highestScore) {
            students[i].display();
        }
    }
}

int main() {
    const int SIZE = 5; 

    Student students[SIZE]; 

    students[0].setData(1001, 85.5);
    students[1].setData(1002, 92.0);
    students[2].setData(1003, 78.5);
    students[3].setData(1004, 96.0);
    students[4].setData(1005, 88.5);

    max(students, SIZE);

    return 0;
}