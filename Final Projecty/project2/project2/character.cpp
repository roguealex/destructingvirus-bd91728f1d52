#include "character.h"
#include "Seff.h"
using namespace std;

character::character(void)//this is the default 'constructor' it will run if the constructor is not costumized
{
	charName = " Connan the Hero ";
	Hp = 20;
	energy = 10;//migt not use energy at the end
	//the following stats have been divided from 16
	atk = 6;//atk is the amount of damage the p  erson will do to the monster
	mgc = 5;//magic is how much of their hp the person will heal
	spd = 5;//speed determines which combatant fights first
	treasure = 0;
	cout << "A new hero has arrived! " << endl;
}

character::character(int newTreasure, int newHP, int newAtk, int newMgc, int newSpd, string newCharName)//the constructor costumizable
{
	charName = newCharName;
	Hp = newHP;
	atk = newAtk;
	spd = newSpd;
	mgc = newMgc;
	treasure = newTreasure;

}

//void move(); void defend(); void attack(); void run();

/*void character::move()
{
	cout<< " You have moved towards the next room. " << endl;

}*/

void character::defend() // defense will protect you from damage and gain you +1 energy
{
	cout<< "You used your shield to defend yourself.  Energy +1. Magic +1. "<< endl;
	energy++;
	mgc++;
}

void character::heal()
{
	cout << endl;
	 cout << "You used magic to heal yourself, but did not protect yourself from the monster. Energy +1, Magic -1." << endl;
	//this has no %^&$#&$^& effect WHY NOT
	energy++;
	mgc--;
	//cout << "Your HP went up by " << character::mgc <<endl;
}


void character :: attack()//need to add monster manually in void main
{
	cout << "You attack the monster with your weapon! Energy -1.  " << endl;
	energy--;
	//Seff;seffHP - character::atk;

}

void character::magic()
{
	cout << "You launched a magic missile at the monster! Magic -1." << endl;
	mgc--;
}



character::~character(void) // destructor all values should be set to zero
{
	Hp = 0;
	atk = 0;
	spd = 0;
	mgc = 0;
	cout << "The Hero, "<<charName << ", has died!" << endl;
		cout << endl<< endl<< endl<< endl<< endl;
		cout << "GAME OVER!!!" << endl;
}
