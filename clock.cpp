#include <iostream>
using namespace std;
int main()
{
	int second, minute, hour;
	cout << "please enter hour:";
	cin >> hour;
	cout << "please enter minute:";
	cin >> minute;
	cout << "please enter second:";
	cin >> second;
	hour = hour * 3600;
	minute = minute * 60;
	second = second + hour + minute;
	cout << second;
}

