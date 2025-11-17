#include<iostream>;
using namespace std;
int main() {
	double a, b;
	char op;
	double r;
	cout << "请输入表达式（例如5+3）：";
	cin >> a >> op >> b;
	switch (op) {

	case '+':
		r = a + b;
		cout << a << "+" << b << "=" << r<<endl;
		break;
	case'-':
		r = a - b;
		cout << a << "-" << b << "=" << r<<endl;
		break;
	case'*':
		r = a * b;
		cout << a << "*" << b << "=" << r << endl;
		break;
	case'/':
		if (b == 0) {
			cout << "除数不能为零！";
			return 1;
				
		}
		else {
			r = a / b;
			cout << a << "/" << b << "=" << r << endl;
			break;
		}
	case'%':
		if (b == 0) {
			cout << "除数不能为零！";
			return 1;
		}
		else {
			r = static_cast<int>(a) % static_cast<int>(b);
			cout << static_cast<int>(a) << " % " << static_cast<int>(b) << " = " << r << endl;
			break;
		}


		return 0;
	}







}