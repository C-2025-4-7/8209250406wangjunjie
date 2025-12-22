#include<iostream>
using namespace std;
void bubbleSort(int* arr, int n);
int main() {
	int n;
	cout << "决定数组大小：";
	cin >> n;
	int* p = new int[n];
	cout << "输入" << n << "个整数：";
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	bubbleSort(p, n);
	for (int i = 0; i < n; i++) {
		cout << *(p + i) << ' ';
	}
	delete[] p;
}
void bubbleSort(int* arr, int n) {
	for (int i = 1; i < n; i++) {
		bool check = 0;
		for (int j = 0; j < n - i; j++) {
			if (*(arr+j) > *(arr+j+1)) {
				int temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
				check = 1;
			}
		}
		if (!check)break;
	}
}