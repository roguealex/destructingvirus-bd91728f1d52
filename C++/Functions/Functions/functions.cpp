#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;


int add  (int a, int b) //tis a function double is the return type
{
	return a+b;
}

void main()
{
	
	int result = add /*function*/ (1, 4);

	cout << result << endl;

	system("pause");
}
