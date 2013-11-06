#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

/*
stack overflow is when dynamic and stack memory "colide"  

*/

int x = 5;

void main()
{
	
    int* arr=new int[5]; //---------------/asteriks for pointers!
    arr = new int[5];
	cout << arr << endl;

	for (;;)
	{
		arr = new int[500];
		delete [] arr;
		
	}

	system("pause");




}