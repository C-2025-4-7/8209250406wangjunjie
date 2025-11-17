#include<iostream>
using namespace std;
int main()
{
	double r, h;
	double v;
	double pi = acos(-1);
	cout << "请输入半径：";
	cin >> r;
	cout << "请输入高：";
	cin >> h;
	v = (pi * r * r * h) / 3;
	cout << "这个圆锥的体积为：" << v;
	return 0;

}