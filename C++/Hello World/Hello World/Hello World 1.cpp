#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

//ex: cmath:;quad
// using namespace std;

using namespace std; //using namespaces//semicolons at the end of statements

void main() // inside the brackets is what main will use, to do stuff it must be in main. Also cout as in c++ will send out
{
	
	cout << "Hello World" << endl << endl; //1st cout


	string c = "Hello ";
	string d = "World! ";
	string f = c+d;

	int g = 100;
	int h = g+10;
	int j = h+g;

	char k = 'a'; //c++ use single quotes for char
	char n = 'b';
	char m = 'k+n';

	cout << c << endl; //2nd cout
	cout << "c + d= " << c + d << endl; //3
	cout << "f= " << f << endl; //4
	cout << "intc " << j << endl; //5
	cout << "Char= " << m << endl;
	system ("pause");
}



