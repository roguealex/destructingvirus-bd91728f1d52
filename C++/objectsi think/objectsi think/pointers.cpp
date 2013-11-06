#include <cmath>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

void main ()
{
	int x = 5;
	int* arr= new int[x];
	arr[0] = 0;
	arr[1] = 1;
	arr[2]= 2;
	
	cout << arr[0] << arr[1] << arr [2] << endl;

	system("pause");
}
