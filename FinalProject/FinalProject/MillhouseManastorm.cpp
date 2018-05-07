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
int armorClass = 10;
int MillhouseManastormHP = 3;
int damageSum;
int characterHP = 12;
int heal;
int spellAttackRoll;
string randomSpell[] = { "Firebolt", "Ray of Frost", "Acid Splash", "Chill Touch", "Poison Spray", "Shocking Grasp", "Burning Hands", "Magic Missile", "Thunderwave" };

int acCheck()
{
	Sleep(1);
		srand(GetTickCount());
		spellAttackRoll = rand() % 20 + 1;
		spellAttackRoll = spellAttackRoll + 4;
		
	
	return 0;
}

int roll(int x, int y)
{
	damage = 0;
	for (int z = 0; z < y; z++)
	{
	srand(GetTickCount());
	damage = damage + rand() % x + 1;
	}
	return 0;
}
int healingRoll(int x, int y)
{
	heal = 0;
	for (int z = 0; z < y; z++)
	{
		srand(GetTickCount());
		heal = heal + rand() % x + 1;
		MillhouseManastormHP = MillhouseManastormHP + heal;
	}
	return 0;
}
int saveThrow(int x)
{
	int savingThrow = 0;
	int WisModifier = 0;
	srand(GetTickCount());
	savingThrow = rand() % 20 + 1;
	savingThrow = savingThrow + WisModifier;
	return 0;
}
int saveThrowHalf(int x)
{
	int savingThrow = 0;
	int DexModifier = 0;
	srand(GetTickCount());
	savingThrow = rand() % 20 + 1;
	savingThrow = savingThrow + DexModifier;
	if (savingThrow >= x)
		damage = damage / 2;
	else{}
	return 0;
}
int castDmgSpell()
{
	//Random Number Generator Seed for spell selection.
	srand(GetTickCount());
	//Random Number Generator (1 through 3)
	int spellChosen = rand() % 9 + 1;
	//Display spell cast
	cout << "I cast.... " << randomSpell[spellChosen -1] << "!\n";
	Sleep(547);
	switch (spellChosen)
	{
		//FireBolt
		case 1:
			int acCheck();
			if (spellAttackRoll > armorClass)
			roll(8, 1);
			break;
		//Ray of Frost
		case 2:
			if (spellAttackRoll > armorClass)
			roll(10, 1);
			break;
		//Acid Splash
		case 3:
			if (spellAttackRoll > armorClass)
			roll(6, 1);
			break;
		//Chill Touch
		case 4:
			if (spellAttackRoll > armorClass)
			roll(8, 1);
			break;
		//Poison Spray
		case 5:
			roll(12, 1);
			//Save Throw for Dexterity
			saveThrowHalf(12);
			break;
		//Shocking Grasp
		case 6:
			if (spellAttackRoll > armorClass)
			roll(8, 1);
			break;
		//Burning Hands
		case 7:
			roll(6, 3);
			break;
		//Magic Missile
		case 8:
			roll(4, 3);
			damage = damage + 3;
			break;
		//Thunderwave
		case 9:
			roll(8, 2);
			//Save Throw for Dexterity
			saveThrowHalf(12);
			break;
	}
	return 0;
}
int healingSpells()
{
	string randomSpell[] = { "Charm Person", "False Life" };
	//Random Number Generator Seed for spell selection.
	srand(GetTickCount());
	//Random Number Generator (1 through 2)
	int spellChosen = rand() % 2 + 1;
	//Display spell cast
	cout << "I cast.... " << randomSpell[spellChosen -1] << "!\n";
	switch (spellChosen)
	{
		//Charm Person
	case 1:
		//SaveThrow for Wisdom > 12
		roll(2, 1);
		saveThrow(12);
		if (damage > 0)
		{
			cout << "You become charmed by the handsome Millhouse Manastorm. \n";
			Sleep(2113);
			cout << "You go shopping with the awesome Millhouse Manastorm. \n";
			Sleep(2246);
			cout << "You go on a walk with the venturesome Millhouse Manastorm. \n";
		}
		else
			cout << "You manage to be aware of the handsome Millhouse Manastorm... but not handsome enough! \n";
		break;
	case 2:
		healingRoll(4, 1);
		heal = heal + 4;
		MillhouseManastormHP = MillhouseManastormHP + heal;
		break;
	}
	return 0;
}

int main()
{
	do
	{
		if (MillhouseManastormHP <= 2)
		{
			//Expeditious Retreat
			cout << "Millhouse runs away 75ft/s for 10 minutes. \n Millhouse being " << 75 * 60 * 60 << " feet away, heals to maximum and you spend 30 minutes catching up to him!" << endl;
			MillhouseManastormHP = 8;
			Sleep(1000 * 4);
		}
		else if (MillhouseManastormHP > 2 && MillhouseManastormHP <= 4)
		{	//Healing Spells
			healingSpells();
		}
		else
		{
			if (characterHP <= 0)
				goto GetOut;
			castDmgSpell();
			characterHP = characterHP - damage;
			cout << "Your current HP is: " << characterHP << ". \n";
		}
	} while (MillhouseManastormHP > 0);

	cout << "You have defeated the great and glorious Millhouse Manastorm! \n After murdering the great wizard, the town guards execute you. \n";
GetOut:
	if (characterHP <= 0)
	{
		cout << "You have been defeated by the great, glorious, and victorious Millhouse Manastorm! Long live the sorcerer! Long live the foolish! \n";
	}
	system("pause");
	return 0;
}

