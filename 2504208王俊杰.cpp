#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    double a;
    cout << "请输入一个正数: ";
    cin >> a;

    if (a <= 0) {
        cout << "不能对负数求平方根！" << endl;
        return 1;
    }

    double x_old = a;     
    double x_new;

    do {
        x_new = 0.5 * (x_old + a / x_old);  
        if (fabs(x_new - x_old) < 1e-5)     
            break;
        x_old = x_new;
    } while (true);

    cout << a << "的平方根为: " << x_new << endl;
    return 0;
}