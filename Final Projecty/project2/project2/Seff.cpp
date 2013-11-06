#include "Seff.h"


Seff::Seff(void)
{
	seffHP = 10;
	seffAtk = 3;
	seffSpd = 5;
	cout << "The monster will attack!" << endl;
}

Seff::Seff(int newTRU, int newSHP, int newSAtk, int newSSpd)
{
	seffHP = newSHP;
	seffAtk = newSAtk;
	seffSpd = newSSpd;
	seffTreasure = newTRU;
	
}


void Seff::seffAttack()
{
	cout << "The monsterattacked you with its claws!" << endl;
}



Seff::~Seff(void)
{
	seffHP = 0;
	seffAtk = 0;
	seffSpd= 0;
	seffTreasure = 0;
	cout << "The monster has been dissipated into nothing!" << endl;
}
