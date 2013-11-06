#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>


using namespace std;


class dog
{

public://void not needed here void =  "   " 

	string name;
	int age, energyLevel;
	double weight;

	dog();//<--- constructor ur a special fuction it has no type declaration

	dog(string newName, int newAge, int newEnergyLevel, double newWeight);

	~dog();//<-- destrucor t

	//methods(functions)
	void Bark(); // you can make this an int and return the number of times
	void Eat();
	void Sleep();

	int getAge();
	int getEnergy();
	int getDogYears();

	void setAge(int val);
	void setEnergy(int val);




}; // ; needed for classes

