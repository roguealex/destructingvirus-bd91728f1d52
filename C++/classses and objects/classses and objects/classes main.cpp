#include <cmath>
#include <cstring>
#include <string>
#include <iostream> 
#include "dog.h"

// notice, it is not including common sense

using namespace std;
//yo classes be da best



void killBill()
{
	dog Bill ("Clifford", 1, 500, 215739535) ;

}


void main ()
{
	dog Bill(" Milk ", 1, 50, 0.3);
	dog *bob = new dog();


	cout << endl << "Name: ";
	cin >> Bill.name ;
	cout << "Age: ";
	cout << Bill.age <<endl;
	cout << "Energy Level: ";
	cout << Bill.energyLevel << endl;
	cout << "Weight: ";
	cout << Bill.weight << endl;

	//bark 5 times when low on energy
	
	for(int i=0; i<30; i++)
	{
	
		cout << Bill.name<< "'s  energy is: " << Bill.energyLevel <<endl;

	    if(Bill.energyLevel <= 25)
		{
			 Bill.Bark();
			 Bill.Bark();
			 Bill.Bark();
			 Bill.Bark();
			 Bill.Bark();
			cout << "Feed him so he stops barking!" << endl;
		}

		Bill.energyLevel--;
		
		
	}
	
	cout << "age: " << Bill.getAge() << endl;
	Bill.setAge(5);
	cout << "age: " << Bill.getAge() << endl;

	cout << "Energy Level:  " << Bill.getEnergy() << endl;
	Bill.setEnergy(15);
	cout << "Energy Level:  " << Bill.getEnergy() << endl;

	cout << "age: " << Bill.getAge() <<endl;
	cout << "age in dog years: " << Bill.getDogYears() << endl;

	Bill.~dog();
	
	system("pause");

}
