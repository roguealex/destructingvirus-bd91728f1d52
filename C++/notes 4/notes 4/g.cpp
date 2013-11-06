#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <bitset>



using namespace std; // remember the underscores for the string

void main()
{
	char letter;
	cout << "Select a letter A, B, C " << endl;
	 cin >> letter;

	switch(letter)
	{
	case 'A':
		{ 
			cout << "That is the first letter" << endl;
			break;
		}
	case 'B':
		{
			cout << "That is the second letter" << endl;
			break;
		}
	case 'C':
		{
			cout << "That is the third letter" << endl;
			break;
		}
	default:
		{
			cout << "Select a letter A, B, C," << endl;
			break;
		}
	}



	system("pause");
}
