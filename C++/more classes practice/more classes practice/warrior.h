#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>


using namespace std;


class warrior
{
public:

	//stats and stuff
	int def, spd, atk, mgc, hp;
	string warriorName;
	
	//functions
	void Heal();
	void Attack();
	void Defend ();

	warrior(void);//constructor

	warrior(string newWarriorName, int newDef, int newSpd, int newAtk, int newMgc, int newHp);


	~warrior(void);//destructor
};

