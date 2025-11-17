#include<iostream>
using namespace std;
int main() 
{
	float x,y;
	cout << "tpye a number:";
	cin >> x;
	if (x>0&&x<10)
	{
		if (x < 1)
		{
			y = 3 - 2 * x;
			cout << y;

		}
		else if (x < 5)
		{
			y = 2.0f / (4 * x) + 1;
			cout << y;
	
		}
		else
		{
			y = x * x;
			cout << y;

		}

	}
	else
		cout<<"error";

	return 0;

}