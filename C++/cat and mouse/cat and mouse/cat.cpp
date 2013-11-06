// Cat and Mouse.cpp : main project file.

#include "stdafx.h"//Used with MS VC++ 2008 Express. Delete this line if using a different IDE
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
   time_t t;
   srand((unsigned) time(&t)); 
	char maze[8][8];
	int x, y, count;
	for(x=0;x<8;x++)
		for (y=0;y<8;y++)
			maze[x][y] = '.';
	maze[7][0] = 'C'; // Cat

	for (count =0;count<3;count++)
	{
		do
		{
			x=rand()%8; // random row
			y=rand()%8; // random column
		}while (maze[x][y]!='.'); // So we don't over-write a used space
		maze[x][y]='M';// place mouse at maze[x][y]
	}
	for(x=0;x<8;x++)
	{
		for (y=0;y<8;y++)
		{
			cout << maze[x][y]<< " ";
		}
	cout << endl;
	}

    return 0;
}