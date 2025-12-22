#include<iostream>
using namespace std;
bool is_prime(int num) {
	if (num <= 1)return 0;
	else if (num == 2)return 1;
	else{
		int b = 1;
		for (int i = 2; i < num; i++) {
			int temp;
			temp = num % i;
			if (temp == 0) {
				b=0;
				break;
			}
		}
		return b;
	}
}

int main() {
	int m=1;
	for (int j = 1; j <= 200; j++) {
		if ((m % 10) == 0) {
			if (is_prime(j)) {
				cout << j << endl;
				m++;
			}
			else continue;
		}
		else{
			if (is_prime(j)) {
				cout << j << '\t';
				m++;
			}
		    else continue;
		}
	}
}