#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char ch;
	cout << "type a char:";
	cin >> ch;
	if (islower(ch))
	{
		char upper = toupper(ch);
		cout << upper;
		

	}
	else
	{
		cout << ch + 1;
		


	}
	return 0;

}