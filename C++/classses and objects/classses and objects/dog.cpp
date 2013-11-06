#include "dog.h"


dog::dog(void)
{
	name =  "Honey";
	age = 1;
	energyLevel = 20;
	weight = 50000.2;
	cout << "A new dog has been made!" << endl;
}

// constructor not the default one
dog::dog(string newName, int newAge, int newEnergyLevel, double newWeight)
{
	name = newName;
	age = newAge;
	energyLevel = newEnergyLevel;
	weight = newWeight;
	cout << " A new dog " << name << " , has been created! " << endl;
}

void dog::Bark()
{
	cout << name<< " is barking! " << endl;
	
}

void dog::Eat()
{
	cout << name << " is eating.";
	energyLevel +=2;
	weight +=4;
}

void dog::Sleep()
{
	cout << name << "is sleeping (for years)"; //we CONTROL what the dog does
	energyLevel +=5;
	weight +=1;
	weight -=0.2;
}


dog::~dog(void)
{
	age = 0;
	energyLevel=0;
	weight = 0;
	cout << name << " has been turned to ashes! " << endl;
}

int dog::getAge()
{
	return age;
}

int dog::getEnergy()
{
	return energyLevel;
}

void dog::setAge(int val)
{
	//ages 0-20
	if((val <= 20) && (val >= 0))
	{
		age = val;
	}
	else //it'll skip
	{
		cout << "Please set a realistic age for a dog (hint it's between 0-20)" << endl;
	
	}
}




int dog::getDogYears()

{
	return 7*age;
}

void dog::setEnergy(int val)
{
	if( val >=0)
	{
		energyLevel = val;
	}
}
