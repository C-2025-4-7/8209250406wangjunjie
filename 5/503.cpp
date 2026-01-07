#include<iostream>
using namespace std;
class cuboid_volume {
private:
	int length;
	int width;
	int height;
	int v;
public:
	void volume() {
		cout << "输入第一个长方体的长宽高：";
		cin >> length >> width >> height;
		v = length * width * height;
		cout << endl << "第一个长方形的体积是：" << v << endl;
		length, width, height, v = 0;
		cout << "输入第二个长方体的长宽高：";
		cin >> length >> width >> height;
		v = length * width * height;
		cout << endl << "第二个长方形的体积是：" << v << endl;
		length, width, height, v = 0;
		cout << "输入第三个长方体的长宽高：";
		cin >> length >> width >> height;
		v = length * width * height;
		cout << endl << "第三个长方形的体积是：" << v;
		

	}
};
int main() {
	cuboid_volume c1;
	c1.volume();
}