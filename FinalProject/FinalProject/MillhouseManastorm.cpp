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
#include<Windows.h>
using namespace std;
//Declare Global Variables

std::string randomSpell[] = { "Pyroblast", "Icestorm", "Tempest"};

int main()
{
	int srand(GetTickCount());
	int spellChosen = rand() % 2 + 0;
	std::cout << randomSpell[spellChosen] << endl;	
}