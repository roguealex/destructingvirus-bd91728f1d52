#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

void main ()
{
	double x, y;
	char op;

	cout << "welcome please enter two numbers " << endl;

	cin >> x;
	cin >> y;
	cin >> op;

	if ( op == '+' )
	{
		cout << x+y << endl;
	}
	else if (op == '/')
	{
		cout << x/y << endl;
	}
	else if (op == '-')
	{
		cout << x-y << endl;
	}
	else if (op == '*')
	{
		cout << x*y << endl;
	}

	else 
	{
		cout << "ERROR" << endl;
	}

	system("pause");
}

