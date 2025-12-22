#include<iostream>
using namespace std;
int main() {
	int a[10];
	int num = 0;
	cout << "请输入十个数字" << endl;
	for (int i = 0; i < 10; i++) {
		if (i) {
			int n;
			cin >> n;
			bool x = false;
			for (int j = 1; j <= i; j++) {
				if (n == a[j - 1]) {
					x = true;
					break;
				}
			}
			if (!x) {
				a[num] = n;
				num++;
			}
		}
		else {
			cin >> a[i];
			num++;
		}
	}
	for (int i = 0; i < num; i++) {
		cout << a[i] << ' ';
	}
	return 0;
}