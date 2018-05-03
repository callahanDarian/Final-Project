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

string randomSpell[] = { "Pyroblast", "Icestorm", "Tempest"};

int main()
{
	//Random Number Generator Seed for spell selection.
		srand(GetTickCount());
		//Random Number Generator (1 through 3)
		int spellChosen = rand() % 3 + 1;
		//Display spell cast
		cout << "I cast.... " << randomSpell[spellChosen -1] << "!\n";
		//Random Number Generator Seed for damage.
		srand(GetTickCount());
		//Random Number Generator (1 through 15) for damage.
		int damage = rand() % 15 + 1;


	system("pause");
	return 0;
}