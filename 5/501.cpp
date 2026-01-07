#include<iostream>
using namespace std;
class Time             
{
private:             
	int hour;
	int minute;
	int sec;
public:
	void timer (){
		cin >> hour >> minute >> sec;
		cout<< hour << "£º" << minute << "£º" << sec << endl;
	}
};
int main()
{
	Time t1;          
	t1.timer();
	return 0;
}
