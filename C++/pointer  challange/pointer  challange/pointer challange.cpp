#include <cmath>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

void main ()
{
	int x, i;

	cout << "Enter your size of array:  " << endl; // input message
	cin >> x ;


	int* arr = new int[x]; 


	cout << "Please enter your values: " << endl;
	for( i=0 ; i < x; i++)
	{
		cin >> arr[i];
	}
	

	cout << "Here are your values: "<< endl;
	for(i=0; i < x; i++)
	{
		cout << *(arr+i) << endl;
	}


    
	system("pause");

}
