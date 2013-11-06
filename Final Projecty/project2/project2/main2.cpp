
#include "character.h"
#include "seff.h"

Seff seffo(100, 10, 3, 5);//goblin 1 -  done
Seff seffi(250, 11, 4, 6);//goblin 2 -  done
Seff seffu(10000, 20, 10, 8);//The Insta win boss - done
Seff notseff(1000000, 15, 7, 7);//The main final boss - done
character hero(0, 25, 6, 5, 5, "Hero");

char p;


void battle()//insta win boss
{
	cout <<  endl << endl;
	cout << "During a fight you have three option, to attack and be attacked, to defend youself and regain energy, and to use magic to heal yourself and regain energy, but also use to attack." << endl;
	cout << "Type the inital of the action to do it." << endl << endl;

	cout << "Goblin's HP:";
	cout << seffu.seffHP << endl << endl; // to show how much life the opponent has

	if(seffu.seffHP <= 0)
	{
		cout << "Victory you killed the goblin!" << endl;
	}
	
	if(hero.Hp <= 0 )
	{
		cout << "You died to a goblin. Shame on you" << endl;
		hero.~character();
	}
	if(seffu.seffHP > 0)
	{
		cin >> p;
		cout << endl;

		if(p == 'a' )
		{

			if(hero.spd >= seffu.seffSpd)
			{
				hero.attack();
				cout << "Your energy: " << endl;
				cout << hero.energy << endl;
				seffu.seffHP = seffu.seffHP - hero.atk;//Need to lower opponent hp how?
				cout << "Goblin's HP: " ;
				cout << seffu.seffHP /*- hero.atk*/<< endl << endl;

				cout << "The goblin attacked!" <<endl;
				seffu.seffAttack();
				hero.Hp = hero.Hp - seffu.seffAtk;//seffu.seffAtk;//Need to lower opponent hp how?p[;
				cout << "Your HP: ";
				cout << hero.Hp << endl << endl;

				battle();
			}

			if(seffu.seffHP > 0)
			{
				cout << "The goblin attacked!" <<endl;
				seffu.seffAttack();
				hero.Hp = hero.Hp - seffu.seffAtk;//seffu.seffAtk;//Need to lower opponent hp how?p[;
				cout << "Your HP: ";
				cout << hero.Hp << endl << endl;

				hero.attack();
				cout << "Your energy: " << endl;
				cout << hero.energy << endl;
				seffu.seffHP = seffu.seffHP - hero.atk;//Need to lower opponent hp how?
				cout << "Goblin's HP: " ;
				cout << seffu.seffHP /*- hero.atk*/<< endl << endl;
			}
		}

		if(p =='d')
		{
			hero.defend();//Next part of combat
			cout << hero.energy << endl;
			cout<< hero.mgc << endl;
			hero.energy++;
			hero.mgc++;
			cout << hero.energy << endl;
			cout<< hero.mgc << endl;

			cout<<"The goblin did no damage!" <<endl;

			battle();
		}

		if( p == 'h' )
		{
			hero.heal();
			cout <<"HP: " << hero.Hp << endl;
			hero.Hp= hero.Hp + hero.mgc*2;
			cout << "HP: " << hero.Hp << endl;

			cout << "The goblin attacked!" <<endl;
			seffu.seffAttack();
			hero.Hp = hero.Hp - seffu.seffAtk;//seffu.seffAtk;//Need to lower opponent hp how?p[;
			cout << "Your HP: ";
			cout << hero.Hp << endl;
		}

		if (p == 'm')
		{	
			cout << "Magic: " << hero.mgc << endl;
			hero.magic();
			cout << "Magic: " << hero.mgc << endl; 
			cout << "Goblin HP: " << seffu.seffHP ;
			seffu.seffHP = seffu.seffHP - hero.mgc; 
			cout << endl;
			cout <<"Goblin HP: " << seffu.seffHP << endl;


			if(seffu.seffHP > 0)
			{
				cout << "The goblin attacked!" <<endl;
				seffu.seffAttack();
				hero.Hp = hero.Hp - seffu.seffAtk;//seffu.seffAtk;//Need to lower opponent hp how?p[;
				cout << "Your HP: ";
				cout << hero.Hp << endl;
				battle();
			}

		}

		if(hero.Hp <= 0 && seffu.seffHP > 0)
		{
			cout << "You died to a goblin. Shame on you" << endl;
			hero.~character();
		}
		if (hero.Hp > 0 && seffu.seffHP > 0)
		{
			battle();
		}

	}

}


void battle1()//goblin 1
{
	cout <<  endl << endl;
	cout << "During a fight you have three option, to attack and be attacked, to defend youself and regain energy, and to use magic to heal yourself and regain energy, but also use to attack." << endl;
	cout << "Type the inital of the action to do it." << endl << endl;

	cout << "Goblin's HP:";
	cout << seffo.seffHP << endl << endl; // to show how much life the opponent has

	if(seffo.seffHP <= 0)
	{
		cout << "Victory you killed the goblin!" << endl;
	}
	
	if(hero.Hp <= 0 )
	{
		cout << "You died to a goblin. Shame on you" << endl;
		hero.~character();
	}
	if(seffo.seffHP > 0)
	{
		cin >> p;
		cout << endl;

		if(p == 'a' )
		{

			if(hero.spd >= seffo.seffSpd)
			{
				hero.attack();
				cout << "Your energy: " << endl;
				cout << hero.energy << endl;
				seffo.seffHP = seffo.seffHP - hero.atk;//Need to lower opponent hp how?
				cout << "Goblin's HP: " ;
				cout << seffo.seffHP /*- hero.atk*/<< endl << endl;

				if(seffo.seffHP > 0)
				{
				cout << "The goblin attacked!" <<endl;
				seffo.seffAttack();
				hero.Hp = hero.Hp - seffo.seffAtk;//seffo.seffAtk;//Need to lower opponent hp how?p[;
				cout << "Your HP: ";
				cout << hero.Hp << endl << endl;
				}

				battle1();
			}

			if(seffo.seffHP > 0)
			{
				cout << "The goblin attacked!" <<endl;
				seffo.seffAttack();
				hero.Hp = hero.Hp - seffo.seffAtk;//seffo.seffAtk;//Need to lower opponent hp how?p[;
				cout << "Your HP: ";
				cout << hero.Hp << endl << endl;

				hero.attack();
				cout << "Your energy: " << endl;
				cout << hero.energy << endl;
				seffo.seffHP = seffo.seffHP - hero.atk;//Need to lower opponent hp how?
				cout << "Goblin's HP: " ;
				cout << seffo.seffHP /*- hero.atk*/<< endl << endl;
			}
		}

		if(p =='d')
		{
			hero.defend();//Next part of combat
			cout << hero.energy << endl;
			cout<< hero.mgc << endl;
			hero.energy++;
			hero.mgc++;
			cout << hero.energy << endl;
			cout<< hero.mgc << endl;

			cout<<"The goblin did no damage!" <<endl;

			battle1();
		}

		if( p == 'h' )
		{
			hero.heal();
			cout <<"HP: " << hero.Hp << endl;
			hero.Hp= hero.Hp + hero.mgc*2;
			cout << "HP: " << hero.Hp << endl;

			cout << "The goblin attacked!" <<endl;
			seffo.seffAttack();
			hero.Hp = hero.Hp - seffo.seffAtk;//seffo.seffAtk;//Need to lower opponent hp how?p[;
			cout << "Your HP: ";
			cout << hero.Hp << endl;
		}

		if (p == 'm')
		{	
			cout << "Magic: " << hero.mgc << endl;
			hero.magic();
			cout << "Magic: " << hero.mgc << endl; 
			cout << "Goblin HP: " << seffo.seffHP ;
			seffo.seffHP = seffo.seffHP - hero.mgc; 
			cout << endl;
			cout <<"Goblin HP: " << seffo.seffHP << endl;


			if(seffo.seffHP > 0)
			{
				cout << "The goblin attacked!" <<endl;
				seffo.seffAttack();
				hero.Hp = hero.Hp - seffo.seffAtk;//seffo.seffAtk;//Need to lower opponent hp how?p[;
				cout << "Your HP: ";
				cout << hero.Hp << endl;
				battle1();
			}

		}

		if(hero.Hp <= 0 && seffo.seffHP > 0)
		{
			cout << "You died to a goblin. Shame on you" << endl;
			hero.~character();
		}
		if (hero.Hp > 0 && seffo.seffHP > 0)
		{
			battle1();
		}

	}

}

void battle2()//goblin 2
{
	cout <<  endl << endl;
	cout << "During a fight you have three option, to attack and be attacked, to defend youself and regain energy, and to use magic to heal yourself and regain energy, but also use to attack." << endl;
	cout << "Type the inital of the action to do it." << endl << endl;

	cout << "Goblin's HP:";
	cout << seffi.seffHP << endl << endl; // to show how much life the opponent has

	if(seffi.seffHP <= 0)
	{
		cout << "Victory you killed the goblin!" << endl;
	}
	
	if(hero.Hp <= 0 )
	{
		cout << "You died to a goblin. Shame on you" << endl;
		hero.~character();
	}
	if(seffi.seffHP > 0)
	{
		cin >> p;
		cout << endl;

		if(p == 'a' )
		{

			if(hero.spd >= seffi.seffSpd)
			{
				hero.attack();
				cout << "Your energy: " << endl;
				cout << hero.energy << endl;
				seffi.seffHP = seffi.seffHP - hero.atk;//Need to lower opponent hp how?
				cout << "Goblin's HP: " ;
				cout << seffi.seffHP /*- hero.atk*/<< endl << endl;

				cout << "The goblin attacked!" <<endl;
				seffi.seffAttack();
				hero.Hp = hero.Hp - seffi.seffAtk;//seffi.seffAtk;//Need to lower opponent hp how?p[;
				cout << "Your HP: ";
				cout << hero.Hp << endl << endl;

				battle2();
			}

			if(seffi.seffHP > 0)
			{
				cout << "The goblin attacked!" <<endl;
				seffi.seffAttack();
				hero.Hp = hero.Hp - seffi.seffAtk;//seffi.seffAtk;//Need to lower opponent hp how?p[;
				cout << "Your HP: ";
				cout << hero.Hp << endl << endl;

				hero.attack();
				cout << "Your energy: " << endl;
				cout << hero.energy << endl;
				seffi.seffHP = seffi.seffHP - hero.atk;//Need to lower opponent hp how?
				cout << "Goblin's HP: " ;
				cout << seffi.seffHP /*- hero.atk*/<< endl << endl;
			}
		}

		if(p =='d')
		{
			hero.defend();//Next part of combat
			cout << hero.energy << endl;
			cout<< hero.mgc << endl;
			hero.energy++;
			hero.mgc++;
			cout << hero.energy << endl;
			cout<< hero.mgc << endl;

			cout<<"The goblin did no damage!" <<endl;

			battle2();
		}

		if( p == 'h' )
		{
			hero.heal();
			cout <<"HP: " << hero.Hp << endl;
			hero.Hp= hero.Hp + hero.mgc*2;
			cout << "HP: " << hero.Hp << endl;

			cout << "The goblin attacked!" <<endl;
			seffi.seffAttack();
			hero.Hp = hero.Hp - seffi.seffAtk;//seffi.seffAtk;//Need to lower opponent hp how?p[;
			cout << "Your HP: ";
			cout << hero.Hp << endl;
		}

		if (p == 'm')
		{	
			cout << "Magic: " << hero.mgc << endl;
			hero.magic();
			cout << "Magic: " << hero.mgc << endl; 
			cout << "Goblin HP: " << seffi.seffHP ;
			seffi.seffHP = seffi.seffHP - hero.mgc; 
			cout << endl;
			cout <<"Goblin HP: " << seffi.seffHP << endl;


			if(seffi.seffHP > 0)
			{
				cout << "The goblin attacked!" <<endl;
				seffi.seffAttack();
				hero.Hp = hero.Hp - seffi.seffAtk;//seffi.seffAtk;//Need to lower opponent hp how?p[;
				cout << "Your HP: ";
				cout << hero.Hp << endl;
				battle2();
			}

		}

		if(hero.Hp <= 0 && seffi.seffHP > 0)
		{
			cout << "You died to a goblin. Shame on you" << endl;
			hero.~character();
		}
		if (hero.Hp > 0 && seffi.seffHP > 0)
		{
			battle2();
		}

	}

}

void bossbattle()//main boss
{
	cout <<  endl << endl;
	cout << "During a fight you have three option, to attack and be attacked, to defend youself and regain energy, and to use magic to heal yourself and regain energy, but also use to attack." << endl;
	cout << "Type the inital of the action to do it." << endl << endl;

	cout << "Gogron's HP:";
	cout << notseff.seffHP << endl << endl; // to show how much life the opponent has

	if(notseff.seffHP <= 0)
	{
		cout << "Victory you killed the Gogron" << endl;
	}
	
	if(hero.Hp <= 0 )
	{
		cout << "You died to the Gogron, you will be remembered as a hero." << endl;
		hero.~character();
	}
	if(notseff.seffHP > 0)
	{
		cin >> p;
		cout << endl;

		if(p == 'a' )
		{

			if(hero.spd >= notseff.seffSpd)
			{
				hero.attack();
				cout << "Your energy: " << endl;
				cout << hero.energy << endl;
				notseff.seffHP = notseff.seffHP - hero.atk;//Need to lower opponent hp how?
				cout << "Gogron's HP: " ;
				cout << notseff.seffHP /*- hero.atk*/<< endl << endl;

				cout << "The Gogron attacked!" <<endl;
				notseff.seffAttack();
				hero.Hp = hero.Hp - notseff.seffAtk;//notseff.seffAtk;//Need to lower opponent hp how?p[;
				cout << "Your HP: ";
				cout << hero.Hp << endl << endl;

				bossbattle();
			}

			if(notseff.seffHP > 0)
			{
				cout << "The Gogron attacked!" <<endl;
				notseff.seffAttack();
				hero.Hp = hero.Hp - notseff.seffAtk;//notseff.seffAtk;//Need to lower opponent hp how?p[;
				cout << "Your HP: ";
				cout << hero.Hp << endl << endl;

				hero.attack();
				cout << "Your energy: " << endl;
				cout << hero.energy << endl;
				notseff.seffHP = notseff.seffHP - hero.atk;//Need to lower opponent hp how?
				cout << "Gogron's HP: " ;
				cout << notseff.seffHP /*- hero.atk*/<< endl << endl;
			}
		}

		if(p =='d')
		{
			hero.defend();//Next part of combat
			cout << hero.energy << endl;
			cout<< hero.mgc << endl;
			hero.energy++;
			hero.mgc++;
			cout << hero.energy << endl;
			cout<< hero.mgc << endl;

			cout<<"The Gogron did no damage!" <<endl;

			bossbattle();
		}

		if( p == 'h' )
		{
			hero.heal();
			cout <<"HP: " << hero.Hp << endl;
			hero.Hp= hero.Hp + hero.mgc*2;
			cout << "HP: " << hero.Hp << endl;

			cout << "The Gogron attacked!" <<endl;
			notseff.seffAttack();
			hero.Hp = hero.Hp - notseff.seffAtk;//notseff.seffAtk;//Need to lower opponent hp how?p[;
			cout << "Your HP: ";
			cout << hero.Hp << endl;
		}

		if (p == 'm')
		{	
			cout << "Magic: " << hero.mgc << endl;
			hero.magic();
			cout << "Magic: " << hero.mgc << endl; 
			cout << "Gogron HP: " << notseff.seffHP ;
			notseff.seffHP = notseff.seffHP - hero.mgc; 
			cout << endl;
			cout <<"Gogron HP: " << notseff.seffHP << endl;


			if(notseff.seffHP > 0)
			{
				cout << "The Gogron attacked!" <<endl;
				notseff.seffAttack();
				hero.Hp = hero.Hp - notseff.seffAtk;//notseff.seffAtk;//Need to lower opponent hp how?p[;
				cout << "Your HP: ";
				cout << hero.Hp << endl;
				bossbattle();
			}

		}

		if(hero.Hp <= 0 && notseff.seffHP > 0)
		{
			cout << "You died to the Gogron, you will be remembered a hero." << endl;
			hero.~character();
		}
		if (hero.Hp > 0 && notseff.seffHP > 0)
		{
			bossbattle();
		}

	}

}

void main() // need to manually add when the opponent's HP goes down
{

	system("color b");

	cout << endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl;

	cout << "	%#%#%#%#%#%#%#%#%#%#%#%#" << endl;
	cout << "	%	Welcome        #"<< endl;
	cout << "	%	To the Dungeon #" << endl;
	cout << "	%#%#%#%#%#%#%#%#%#%#%#%#" << endl << endl;
	cout << "You need to type the initial letter of the action you want to perform (attack = a)";
	system("pause");

	cout << endl;// this is like a transitions so that we don't see the title screen while creating the character
	cout << endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl;

	cout << "Welcome! To start an adventure create your character." << endl << endl;

	cout << "Please type a name for you Hero:" << endl;
	cin >> hero.charName;
	cout << endl;

	cout << "Now divide your stats between Attack, Magic and Speed level. You'll get 16 points to share." << endl << endl;

	cout << "Enter Attack points: " << endl ;
	cin >>hero.atk ;
	cout << endl;

	cout << "Enter Magic points: " << endl;//just doing this formatting for 'aesthethics' for lack fo a better word
	cin >> hero.mgc;
	cout << endl;

	cout << "Enter Speed points: " << endl;
	cin >> hero.spd;
	cout << endl;
	if( hero.charName == "Kappy") 
	{
		cout << "Your stats turn to negatives automatically if you are named Kappy" <<  endl << endl;

		cout << "HueHueHueHueHueHueHueHueHueHueHueHueHueHueHueHueHue" << endl;
		cout << endl << endl;
		hero.atk = -hero.atk;
		hero.mgc = -hero.mgc;
		hero.spd = -hero.spd;

	}

	if (hero.atk+hero.mgc+hero.spd > 16)
	{
		cout << "Your total value is more than 16, please enter stats again." << endl;
		cout << endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl;
		main();
	}

	cout << "Stats in order; Name, Hp, Energy, Attack level, Magic level, and  Speed level" << endl;
	cout << hero.charName << endl;
	hero.Hp=25;
	cout << hero.Hp<< endl;
	hero.energy=15;
	cout << hero.energy << endl;
	cout << hero.atk << endl;
	cout << hero.mgc << endl;//to show the stats to the person
	cout << hero.spd << endl;
	
	system("pause");

	//transition to the actual game

	cout << "Now we  will start the adventure!" << endl;

	cout << endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl;
	cout << "================================================================================================================================================" << endl;
	cout << "As you enter the abandoned dungeon you feel as cold wind rushing past you, then you suddenly a cold bony hand grabbing your shoulder. " << endl;
	cout << "When you turn around to see what it was you see that the entrance has been sealed off. There is just a cold stone wall where there once was a doorway to freedom. Now you realize that there is no turning back..." << endl << endl;
	cout << "You decide to move quickly as the dungeon is starting to collapse on itself, it hadn't seen a visitor in a long time, and it isn't happy."<<endl;
	cout << "You see two passage ways in front of you, one leading to the left, the other leading to the right. Which one will you take?" << endl;
	cout << "=================================================================================================================================================" << endl << endl;

	cout << "Type left(or l) or right (or r) then enter to proceed" << endl << endl;

	char q;
	cin >> q;
	if( q == 'l')
	{
		cout << endl;
		cout << "=================================================================================================================================================" << endl;
		cout << "You decided to take the path leading to the left. As you follow it you hear a slow roar in the distance. Finally you get to the end of the hallway and enter a big room." << endl ;
		cout << "You see three paths one on the wall to your left, one to the wall on the right and the other directly in the wall infront of you." << endl<< endl;
		cout << "Which door will you choose? Type the initial of the way you take; right(r), left(l), or straight(s)" << endl;
		cout << "=================================================================================================================================================" << endl << endl;
		char w;

		cin >> w;
		switch(w)
		{
		case 's':
			cout << "=================================================================================================================================================" << endl;
			cout << "You decide to take the room directly infront of you. You enter it hoping to see the treasure. Blinded by your greedyness you don't notice that when you enter the room there is no floor, and so you fall to your death. "<< endl;
			cout << "=================================================================================================================================================" << endl << endl;
			hero.~character();
			break;
		case 'l':
			cout << "=================================================================================================================================================" << endl;
			cout << "So far your decision of choosing left has not failed you, so you decide to take it. You enter the room and it's pitch black, you can't see a thing. Suddenly the lights turn on but there still is a blot of blackness in the center of the room  "<< endl;
			cout << "It is the legendary Seff the leader of Seff's Sarcastics, the weakest race of goblins, since the dungeon has been collapsing behind you, you have no escape. You have to fight it," << endl << endl;
		cout << "=================================================================================================================================================" << endl << endl;
			battle();//this activates the battle function
			//optional boss battle
			cout << endl;
			if(seffu.seffHP < 0)
			{
				hero.treasure = hero.treasure + seffu.seffTreasure;
				cout << "=================================================================================================================================================" << endl;
				cout << "Turned out the monster you killed was actually the King Troll! After you killed him you cut open his stomach and find the treasure of a lifetime. You grab the treasure and inside it you find a magic amulet which takes you back home. " << endl;
				cout << " YOU WIN !!!!!!!" << endl;
				cout << "=================================================================================================================================================" << endl << endl;

			}
			break;
		case 'r'://work on this
			cout << "=================================================================================================================================================" << endl;

			cout << "You decided to go the opposite direction as you are not sure wether to trust the left side. " << endl;
			cout << "You enter the room, see that it is nothing special, and turn back to head out the door. You turn and you realize that the door is not openable";
			cout << "=================================================================================================================================================" << endl << endl;

			hero.~character();
			break;
		default:
			cout << "=================================================================================================================================================" << endl;
			cout << "You took too long to choose a way so you forgot that the whole dungeon was collapsing. Since you didn't escape its wrath you died," << endl;
			cout << "=================================================================================================================================================" << endl << endl;

			hero.~character();
			break;

		}

	}if(q =='r')
	{
		cout << "=================================================================================================================================================" << endl;
		cout << "You decided to choose the path to the right. After walking a long and winding passage you finally come into a room. Inside the room you see a single goblin looking at you. Being the brave person that you are you approach it.  " << endl << endl;
		cout << "=================================================================================================================================================" << endl << endl;
		battle1();//goblin 1

		//hero.treasure= hero.treasure + 10
		if(hero.Hp > 0 && seffo.seffHP <= 0)
		{
			cout << "=================================================================================================================================================" << endl;
			cout << "You slayed the goblin and collect it's treasure, now you see three passages that you can take." << endl;
			cout << "There is one to your left(l), one behind next to the door way in which you came through(b) and one in front of you(s). Which one will you take? " << endl;
			cout << "=================================================================================================================================================" << endl << endl;
			char u;
			cin >> u ;
			hero.treasure = hero.treasure + seffo.seffTreasure;
			switch(u)
			{
		case 'l':
			cout << "=================================================================================================================================================" << endl;
			cout <<"You decided to take the room to the left. You enter the doorway and continue down the passage it opens to. In it you find another goblin. " << endl;
			cout << "By now you know this goblin race is actually pretty weak so you just approach it to give it a quick death." << endl;
			cout << "=================================================================================================================================================" << endl << endl;
			battle2();//goblin 2 
			if( seffi.seffHP <= 0)
			{
				cout << "=================================================================================================================================================" << endl;
				cout << "You again (easily I hope) killed a goblin and collected its treasure. " << endl;
				
				hero.treasure = hero.treasure + seffi.seffTreasure;
				cout << endl;
			 
				cout << "You see another doorway infront of you , knowing that the dungeon is collapsing behind you, you instinctively continue unto the next room "<< endl;
				
				//the next room with treasure
				cout << "You enter the room and see gold coins and gems lying everywhere. You happily loot the treasure and continue unto the next room, somehow you know the growl at the beginnig came from the room in front of you." << endl;
				cout << "=================================================================================================================================================" << endl << endl;
				hero.treasure = hero.treasure + 5000;
				cout << endl << endl;
				cout << "=================================================================================================================================================" << endl;
				cout<< "You enter the room and you see the biggest pile of gold you've ever seen. It is atleast 20 ft tall and 50ft in diameter. There is gold, white gold, platinum, diamonds, opals, every rich metal and gem you could imagine of" << endl;
				cout << "At the top of the pile lies a big beast. The biggest monster you've ever seen. It had been awakened the moment you entered the dungeon and had been waiting for you. The giant Gogron" << endl;
				cout << "=================================================================================================================================================" << endl << endl;
				bossbattle();
				if(notseff.seffHP <= 0)
				{
					cout << "=================================================================================================================================================" << endl;
					cout << "Congratulations! You killed the Grogon and looted all its treasure. You completed the game." << endl;
					cout << "=================================================================================================================================================" << endl << endl;
					hero.treasure = hero.treasure + notseff.seffTreasure;	break;
				}
				else {
					break;
				}
			}
		

		case 's':
			cout << "=================================================================================================================================================" << endl;
			cout << "You decide to walk straight to the room infront of you." << endl;
			cout<< "You enter the room and you see the biggest pile of gold you've ever seen. It is atleast 20 ft tall and 50ft in diameter. There is gold, white gold, platinum, diamonds, opals, every rich metal and gem you could imagine of" << endl;
			cout << "At the top of the pile lies a big beast. The biggest monster you've ever seen. It had been awakened the moment you entered the dungeon and had been waiting for you. The giant Gogron" << endl;
			cout << "=================================================================================================================================================" << endl << endl;
			bossbattle();
			if(notseff.seffHP <= 0)
			{
				cout << "=================================================================================================================================================" << endl;
				cout << "Congratulations! You killed the Grogon and looted all its treasure. You completed the game." << endl;
				cout << "=================================================================================================================================================" << endl << endl;
				hero.treasure = hero.treasure + notseff.seffTreasure;break;
			}
			else
			{
				break;
			}

		case 'b':
			cout << " You turned your back and walked towards the door next to the one in which you came through. You walk down the passage way it provides and wonder why this passage hasn't collapsed like the one next to it did. " ;
			cout << " You enter the room at the end of the passage and immediatly black out. You're dead."<< endl;
			hero.~character();
			break;

				default:
			cout << "You took too long to choose a way so you forgot that the whole dungeon was collapsing. Since you didn't escape its wrath you died," << endl;
			hero.~character();
			break;
			}
		}
	}
	cout << endl;
	cout <<"Your Score: " ;
	cout << hero.treasure << endl << endl;

	cout << "Enter anything to quit the game." << endl;
	system("pause");

}
