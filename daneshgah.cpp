#include <iostream>
using namespace std;
int main()
{
	int count, a[100];
	int i, min, max;
	cout << "please enter count:";
	cin >> count;
	for (i = 0;i < count;i++)
	{
		cin >> a[i];
	}
	min =max= a[0];
	for (i = 1;i < count;i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
		
	}
	cout << "min:" << min << endl;
	
	for (i = 1;i < count;i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	
	}
	cout << "max:" << max << endl;
	int b = 0;
	for (i = 0;i < count;i++)
	{
		b = a[i] + b;
	}
	cout << "avrage:" << b / count;
}
