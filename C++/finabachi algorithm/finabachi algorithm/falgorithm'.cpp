#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int fib(int n)
{
	if (n == 0)
	{
		return (0);
	}

	else if ( n == 1)
	{
		return (1);
	}

	else
	{
		return fib(n-1) + fib(n-2);   // loop 5ever?
	}
}


// hard coding example

void main()
{
	int n;
	cin >> n;
	cout << fib(n) << endl;
	system("pause");

}
