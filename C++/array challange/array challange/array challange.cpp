#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

void main ()
{
	int box[150];
	int bouncer=0;


	for(int i=0; i<150 ; i++)
	{
		box[i]=i;
		cout << endl;
	}


	for(int i=0; i<150 ; i++)
	{
		cout << box[i] << endl;
	}

	cout<< "Done!!!" << endl;

	system("pause");


}