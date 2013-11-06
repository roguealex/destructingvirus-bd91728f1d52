#include <iostream>
#include <string>
#include <cmath>
#pragma once


using namespace std;

class character
{
public: // do i need magic to heal?

	int Hp; // how much life the dude has
	int energy; //the player will have 15 energy points to use in each battle, or maybe as a whoel, will see 
	int atk, mgc, spd, treasure; // points will be divided between them, how bout 14
	string charName;
	//functions
	//void move(); not needed, keep it incase 
	void defend();// I don't need the int def since defending will just block the incomibng attack
	void attack();
	void heal();
	void magic();
	//void run(); I have no idea how to implement it



	character(void);//constructor

	character(int newTreasure, int newHP, int newAtk, int newMgc, int newSpd, string newCharName);//costumizable

	~character(void);//destructor


	//costumizable variables that will be able to be changed later, not sure if they will be used though
	//int getAtk();
	//int getSpd();

	//void setAtk();
	//void setSpd();
	int getHp();
	int getEnergy();

	void setHp(int val);
	void setEnergy(int val);



private:


};
