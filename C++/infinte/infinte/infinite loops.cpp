#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

void main()
{

	cout << "Countdown program. Enter number below 10 to start, please do not disturb it while it runs." << endl;
	int i;
	cin >> i;

	for (; i >= 10; i+=11 ) // a+=b  =   a=a+b
	{
		cout << i << endl;
	}
	cout << "The end" << endl;
	system("pause");

}
