#include <cmath>
#include <cstring>
#include <string>
#include <iostream>

using namespace std; //this gets hexadecimals, it gets a different space in memory every time you run it, it gets what space is aviable

void main ()
{
	int x = 5; //dyanmic memory is what it uses
	int* arr= new int[x]; // * creates a pointer
	arr[0] = 0 ;
	arr[1] = 1 ;
	arr[2]= 2 ;//three spaces in  memory
	
	cout << arr[0] <<  arr[1] << arr [2] << endl;
	cout << *arr;

	system("pause");
}
