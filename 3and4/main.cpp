#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
int main() {
    cout << fixed << setprecision(2);
    double celsius[] = { 40.0, 39.0, 38.0, 37.0, 36.0, 35.0, 34.0, 33.0, 32.0, 31.0 };

    
    double fahrenheit[] = { 120.0, 110.0, 100.0, 90.0, 80.0, 70.0, 60.0, 50.0, 40.0, 30.0 };
    cout << "Celsius    Fahrenheit   |   Fahrenheit       Celsius" << endl;
    cout << "-----------------------------------------------------" << endl;

    
    for (int i = 0; i < 10; i++) {
        
        cout << setw(6) << setprecision(1) << celsius[i] << "    ";

        
        cout << setw(10) << setprecision(1) << celsius_to_fah(celsius[i]) << "   |   ";

        
        cout << setw(10) << setprecision(1) << fahrenheit[i] << "       ";

        
        cout << setw(8) << setprecision(2) << fahrenheit_to_cels(fahrenheit[i]) << endl;
    }

    return 0;
}
