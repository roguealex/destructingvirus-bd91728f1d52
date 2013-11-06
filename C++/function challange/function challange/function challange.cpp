#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

void catstring(string a)
{
	cout << a << endl;
}

void dog(string b, string c)
{
	cout << b << c <<endl;
}





int add  (int a, int b) 
{
	return a+b;
}

 void main ()
{ 

	int result = add (2, 3);

	catstring("Infamous");

	dog("Hello ", "World!");


	cout << result << endl;

	system("Pause");
}