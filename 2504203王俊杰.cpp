#include<iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "请输入三角形的三条边: ";
    cin >> a >> b >> c;

    
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "错误：边长必须大于0" << endl;
        return 1;
    }

    
    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        cout << "错误：这三条边不能构成三角形" << endl;
        return 1;
    }

    
    cout << "周长为：" << (a + b + c) << endl;

    
    if (a == b || a == c || b == c) {
        cout << "这是等腰三角形" << endl;
    }
    else {
        cout << "这不是等腰三角形" << endl;
    }

    return 0;
}