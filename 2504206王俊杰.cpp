#include<iostream>
using namespace std;
int main() {
	int a, b, c, d, e;
	int num1, num2;
	
	cout << "tpye two numbers:";
	cin >> a >> b;
	num1 = a;
	num2 = b;

	while (b != 0) {
		c = b;
		b = a % b;
		a = c;
	}
	d = a;
	e = num1* num2 / d;
	cout << d << endl << e;
	return 0;
	






}