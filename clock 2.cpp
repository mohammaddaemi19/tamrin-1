#include <iostream>
using namespace std;
int main()
{
	long int second, minute, hour;
	cin >> second;
	hour = second / 3600;
	minute = (second % 3600) / 60;
	second = (second % 3600) % 60;
	cout << hour << ":" << minute << ":" << second;
}

