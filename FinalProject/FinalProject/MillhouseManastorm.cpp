//Program: MillhouseManastorm
//Authors: Brandon Seamer, Darian Callahan
//Date: 5/3/2018
//Code Description
/*
This program will run the turns for Millhouse Manastorm, the sole opponent of our DnD Millhouse Manastorm game. This boss will roll a random number
to select it's spell, and then cast it on the opponent for a random amount of damage, with a range determined by the spell type.
*/

//Libraries
#include<iostream>
#include<fstream>
#include<time.h>
#include<random>
#include<string>
#include<Windows.h>
using namespace std;
//Declare Global Variables
int damage;
int MillhouseManastormHP;
int damageSum;
string randomSpell[] = { "Firebolt", "Ray of Frost", "Acid Splash", "Chill Touch", "Poison Spray", "Shocking Grasp", "Burning Hands", "Expeditious Retreat", };
int roll(int x, int y)
{
	damage = 0;
	for (int z; z < y; z++)
	srand(GetTickCount());
	damage = damage + rand() % x + 1;
	return 0;
}
int saveThrow(int x)
{
	int savingThrow;
	if (savingThrow >= x)
		damage = 0;
	else {}
	return 0;
}
int main()
{
	
	//Random Number Generator Seed for spell selection.
		srand(GetTickCount());
		//Random Number Generator (1 through 3)
		int spellChosen = rand() % 8 + 1;
		//Display spell cast
		cout << "I cast.... " << randomSpell[spellChosen -1] << "!\n";
		switch (spellChosen)
		{

		case 1:
			roll(8, 1);
			break;
		case 2:
			roll(10, 1);
			break;
		case 3:
			roll(6, 1);
			break;
		case 4:
			roll(8, 1);
			break;
		case 5:
			roll(12, 1);
			saveThrow(12);
			break;
		case 6:
			roll(8, 1);
		case 7:
			roll(6, 3);
			break;
		case 8:
			cout << "Millhouse runs away 75ft/s for 10 minutes. \n Millhouse being " << 75 * 60 * 60 << " feet away, heals to maximum and you spend 30 minutes catching up to him!" << endl;
			MillhouseManastormHP = 8;
			Sleep(1000 * 4);
			break;
			
		}

	system("pause");
	return 0;
}