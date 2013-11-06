#include <cmath>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;



void main ()
{
	int cats, dogs;

	cout << "Please input number of cats" << endl;
	cin >> cats;

	cout << "please input number of dogs" << endl;
	cin >> dogs;

	if(cats < dogs)
	{
		cout << "Get those darn dogs outta here! They be scarin' my kitz!" << endl;
	}
	else if ( cats == dogs)
	{
		cout << "I'll be watching you" << endl;
	}

	else
	{
		cout << "Nice doggies" << endl;
	}
	system("pause");



}
