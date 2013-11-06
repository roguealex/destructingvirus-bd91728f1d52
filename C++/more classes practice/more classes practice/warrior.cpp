#include "warrior.h"


warrior::warrior(void) //default warrior
{
	warriorName = "Spartacus"; // the stats are 5, so they are not all equal prephaps 18 points to distribute?
	def = 4;
	spd = 4;
	atk = 5;
	mgc = 2;
	hp = 5;

	cout << " A new knight has been assigned. " << endl;
}

warrior::warrior(string newWarriorName, int newDef, int newSpd, int newAtk, int newMgc, int newHp)//customizible 
{
	warriorName = newWarriorName;
	def = newDef;
	spd = newSpd;
	atk = newAtk;
	mgc = newMgc;
	hp  = newHp;

	cout << "A new knight: " << warriorName << "Has been assigned to the job" << endl; 
}

warrior::~warrior(void) //destructor
{
}
