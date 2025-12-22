#include <iostream>
using namespace std;
void func(int m, int n, int& gcdResult, int& lcmResult);

int main() {
    int m, n, gcdResult, lcmResult;
    cout << "请输入两个自然数m和n: ";
    cin >> m >> n;
    if (m <= 0 || n <= 0) {
        cout << "请输入正自然数！" << endl;
        return 1;
    }
    func(m, n, gcdResult, lcmResult);
    cout << m << "和" << n << "的最大公约数是: " << gcdResult << endl;
    cout << m << "和" << n << "的最小公倍数是: " << lcmResult << endl;
    return 0;
}

void func(int m, int n, int& gcdResult, int& lcmResult) {
    int a = m, b = n;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcdResult = a;
    lcmResult = m / gcdResult * n;
}