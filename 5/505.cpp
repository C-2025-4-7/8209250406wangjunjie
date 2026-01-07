#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
	
public:
	Point() {
		cout << "构造函数执行！"<<endl;
		x = 60;
		y = 80;
		
	}
	void setPoint(int i, int j) {
		cout << "setPoint函数执行！" << endl;
		x += i;
		y += j;

	}
	void display() {
		cout << "display函数执行！" << endl;
		cout << "修改后的坐标为：" << "(" << x << "," << y << ")" << endl;
	}

};
int main() {
	Point p;
	p.setPoint(5, 6);
	p.display();
}