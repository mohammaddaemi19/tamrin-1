#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "please enter count:";
    cin >> n;
    int a=1, b=1;
    int c;
    cout << a << " " << b << " ";
    int i = 1;
    while(i<n)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
        i++;
    }
 
}

