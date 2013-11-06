#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

void main ()
{

	int array1 [20];
	int cats[3], dogs[2];
	char name[] = { 'B' , 'o', 'b' };

	cout << "How old are your 3 cats?" << endl;

	for(int i = 0; i < 3; i++)
	{
		cin >> cats[i];
		cout << endl;
	}

	for(int i = 0; i < 3; i++)
	{
		cout << cats[i] << " ";
	}



	dogs[0] = 200;
	dogs[1]= 2;



	system("pause");
	
}
