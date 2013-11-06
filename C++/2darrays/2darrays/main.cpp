#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>

using namespace std;

vector<string> split(string stringVal, char delimeter);

void main()
{

	string comment = "//";
	
	char tempBuf[50];
	string buffer;


	int rows = 0; 
	int cols = 0;

	ifstream myfile ("map.txt");
	

	while( (rows == 0 || cols == 0) && myfile.good())
	{
		getline( myfile, buffer);
		if(buffer.compare(0, comment.size(), comment) == 0)
		{
			continue;
		}
		
		istringstream anotherBuffer(buffer);

		//rows
		getline( anotherBuffer, buffer, ',' );
		if(isdigit(buffer[0]))
		{
			rows = atoi(buffer.c_str());
		}

		//cols
		getline( anotherBuffer, buffer, ',' );
		if(isdigit(buffer[0]))
		{
			cols = atoi(buffer.c_str());
		}
	}

	int** dynamicArray = 0;
	dynamicArray = new int* [rows] ;
	for( int i = 0 ; i < rows ; i++ )
	{
		dynamicArray[i] = new int[cols];
	}

	for( int r = 0; r < rows; r++)
	{
		getline( myfile, buffer );
		vector<string> splitData = split(buffer, ',');

		for(int k = 0; k < splitData.size(); k++)
		{
			string valString = splitData[k];
			int val = atoi(valString.c_str());
			dynamicArray[r][k] = val;
		}
	}

	for( int r = 0; r < rows; r++)
	{
		for(int c = 0; c < cols; c++)
		{
			cout << dynamicArray[r][c] << " ";
		}
		cout << endl;
	}
	myfile.close();
	
	system("pause");

}

vector<string> split(string stringVal, char delimeter)
{
	vector<string> data;

	istringstream anotherBuffer(stringVal);
	string tempString;

	while( anotherBuffer.good())
	{		
		getline( anotherBuffer, tempString, delimeter );
		data.push_back(tempString);
	}

	return data; 
	//string* output = new string [data.size()];
	//copy(data.begin(), data.end(), output);
}


