#include<iostream>
using namespace std;
int main() {
	bool l[100] = { false };
	for (int s = 1; s <= 100; s++) {
		if (s == 1) {
			for (int i = 0; i < 100; i++)
				l[i] = true;
		}
		else for (int i = s; i < 100; i += s) l[i] = !l[i];
	}
	for (int i = 0; i < 100; i++)
		if (l[i]) cout << i << ' ';
	return 0;
}