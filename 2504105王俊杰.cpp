#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    double fahrenheit, celsius;

    cout << "请输入华氏温度: ";
    cin >> fahrenheit;

    
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    cout << fixed << setprecision(2);  
    cout << "摄氏温度为: " << celsius << "°C" << endl;

    return 0;
}