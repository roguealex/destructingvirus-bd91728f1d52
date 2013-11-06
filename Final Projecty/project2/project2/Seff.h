#pragma once
#include <string>
#include <cmath>
#include <iostream>


using namespace std;


class Seff
{
public:
	int seffHP;
	int seffAtk;
	int seffSpd;
	int seffTreasure;


	void seffAttack();

	
	Seff(void);

	Seff(int newTRU, int newSHP, int newSAtk, int newSSpd);

	~Seff(void);
};

