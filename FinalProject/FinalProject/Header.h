#include <iostream>
#include <string>
#include <windows.h>
#include <random>

double race = 0, spec = 0, background = 0;
double statChoice;
int stat1 = 0, stat2 = 0, stat3 = 0, stat4 = 0, stat5 = 0, stat6 = 0;
int trashStat[5];
int usedStat[7];
int abilityMod[7];
int abilityChoice[3];
int skill[19];
int skillSelect[3];
std::string strRace, strSpec, strBackground, strBackgroundDesc;


void displayStats()
{
	std::cout << "\nYour stats have the following modifiers : " << std::endl;
	std::cout << "1 -  Strength ...... " << abilityMod[1] << std::endl;
	std::cout << "2 -  Dexterity ..... " << abilityMod[2] << std::endl;
	std::cout << "3 -  Constitution .. " << abilityMod[3] << std::endl;
	std::cout << "4 -  Inteligence ... " << abilityMod[4] << std::endl;
	std::cout << "5 -  Wisdom ........ " << abilityMod[5] << std::endl;
	std::cout << "6 -  Charisma ...... " << abilityMod[6] << std::endl;
	std::cout << std::endl;
}

void raceSelection()
{
	std::cout << "Please select a race.\n 1 - Dwarf          6 - Elf\n 2 - Halfling       7 - Human\n 3 - Dragonborn     8 - Gnome\n 4 - Half-Elf       9 - Half-Orc\n 5 - Tiefling\n > ";
	std::cin >> race;

	if (race == 1)
	{
		strRace = "Dwarf";
	}
	else if (race == 2)
	{
		strRace = "Halfling";
	}
	else if (race == 3)
	{
		strRace = "Dragonborn";
	}
	else if (race == 4)
	{
		strRace = "Half-Elf";
	}
	else if (race == 5)
	{
		strRace = "Tiefling";
	}
	else if (race == 6)
	{
		strRace = "Elf";
	}
	else if (race == 7)
	{
		strRace = "Human";
	}
	else if (race == 8)
	{
		strRace = "Gnome";
	}
	else if (race == 9)
	{
		strRace = "Half-Orc";
	}
	else
	{
		std::cout << "\n\n Please try again; input a number aside a race.\n\n" << std::endl;
		raceSelection();
	}
}

void classSelection()
{
	std::cout << "Please select a class.\n 1 - Barbarian      7 - Bard\n 2 - Cleric         8 - Druid\n 3 - Fighter        9 - Monk\n 4 - Paladin        10 - Ranger\n 5 - Rogue          11 - Sorcerer\n 6 - Warlock        12 - Wizard\n > ";
	std::cin >> spec;
	if (spec == 1)
	{
		strSpec = "Barbarian";
	}
	else if (spec == 2)
	{
		strSpec = "Cleric";
	}
	else if (spec == 3)
	{
		strSpec = "Fighter";
	}
	else if (spec == 4)
	{
		strSpec = "Paladin";
	}
	else if (spec == 5)
	{
		strSpec = "Rogue";
	}
	else if (spec == 6)
	{
		strSpec = "Warlock";
	}
	else if (spec == 7)
	{
		strSpec = "Bard";
	}
	else if (spec == 8)
	{
		strSpec = "Druid";
	}
	else if (spec == 9)
	{
		strSpec = "Monk";
	}
	else if (spec == 10)
	{
		strSpec = "Ranger";
	}
	else if (spec == 11)
	{
		strSpec = "Sorcerer";
	}
	else if (spec == 12)
	{
		strSpec = "Wizard";
	}
	else
	{
		std::cout << "\n\nPlease try again; input a number aside a class.\n\n" << std::endl;
		classSelection();
	}
}

void backgroundSelection()
{
	std::cout << "Please select a background.\n 1 - Acolyte        8 - Charlatan\n 2 - Criminal       9 - Entertainer\n 3 - Folk Hero      10 - Guild Artistan\n 4 - Hermit         11 - Noble\n 5 - Outlander      12 - Sage\n 6 - Sailor         13 - Soldier\n 7 - Urchin\n > ";
	std::cin >> background;

	if (background == 1)
	{
		strBackground = "Acolyte";
	}
	else if (background == 2)
	{
		strBackground = "Criminal";
	}
	else if (background == 3)
	{
		strBackground = "Folk Hero";
	}
	else if (background == 4)
	{
		strBackground = "Hermit";
	}
	else if (background == 5)
	{
		strBackground = "Outlander";
	}
	else if (background == 6)
	{
		strBackground = "Sailor";
	}
	else if (background == 7)
	{
		strBackground = "Urchin";
	}
	else if (background == 8)
	{
		strBackground = "Charlatan";
	}
	else if (background == 9)
	{
		strBackground = "Entertainer";
	}
	else if (background == 10)
	{
		strBackground = "Guild Artistan";
	}
	else if (background == 11)
	{
		strBackground = "Noble";
	}
	else if (background == 12)
	{
		strBackground = "Sage";
	}
	else if (background == 13)
	{
		strBackground = "Soldier";
	}
	else
	{
		std::cout << "\n\nPlease try again; input a number aside a background.\n\n" << std::endl;
		backgroundSelection();
	}
}

// Stat rolling block start

void stat3d6()
{
	srand(GetTickCount());

	stat1 = (rand() % 6 + 1) + (rand() % 6 + 1) + (rand() % 6 + 1);
	stat2 = (rand() % 6 + 1) + (rand() % 6 + 1) + (rand() % 6 + 1);
	stat3 = (rand() % 6 + 1) + (rand() % 6 + 1) + (rand() % 6 + 1);
	stat4 = (rand() % 6 + 1) + (rand() % 6 + 1) + (rand() % 6 + 1);
	stat5 = (rand() % 6 + 1) + (rand() % 6 + 1) + (rand() % 6 + 1);
	stat6 = (rand() % 6 + 1) + (rand() % 6 + 1) + (rand() % 6 + 1);
}

void stat4d6()
{
	srand(GetTickCount());

	trashStat[1] = rand() % 6 + 1;
	trashStat[2] = rand() % 6 + 1;
	trashStat[3] = rand() % 6 + 1;
	trashStat[4] = rand() % 6 + 1;
	if ((trashStat[1] < trashStat[2]) || (trashStat[1] < trashStat[3]) || (trashStat[1] < trashStat[4]))
	{
		trashStat[1] = 0;
	}
	else if ((trashStat[2] < trashStat[1]) || (trashStat[2] < trashStat[3]) || (trashStat[2] < trashStat[4]))
	{
		trashStat[2] = 0;
	}
	else if ((trashStat[3] < trashStat[1]) || (trashStat[3] < trashStat[2]) || (trashStat[3] < trashStat[4]))
	{
		trashStat[3] = 0;
	}
	else if ((trashStat[4] < trashStat[1]) || (trashStat[4] < trashStat[2]) || (trashStat[4] < trashStat[3]))
	{
		trashStat[4] = 0;
	}
	else
	{
		trashStat[1] = 0;
	}
	stat1 = trashStat[1] + trashStat[2] + trashStat[3] + trashStat[4];

	trashStat[1] = rand() % 6 + 1;
	trashStat[2] = rand() % 6 + 1;
	trashStat[3] = rand() % 6 + 1;
	trashStat[4] = rand() % 6 + 1;
	if ((trashStat[1] < trashStat[2]) || (trashStat[1] < trashStat[3]) || (trashStat[1] < trashStat[4]))
	{
		trashStat[1] = 0;
	}
	else if ((trashStat[2] < trashStat[1]) || (trashStat[2] < trashStat[3]) || (trashStat[2] < trashStat[4]))
	{
		trashStat[2] = 0;
	}
	else if ((trashStat[3] < trashStat[1]) || (trashStat[3] < trashStat[2]) || (trashStat[3] < trashStat[4]))
	{
		trashStat[3] = 0;
	}
	else if ((trashStat[4] < trashStat[1]) || (trashStat[4] < trashStat[2]) || (trashStat[4] < trashStat[3]))
	{
		trashStat[4] = 0;
	}
	else
	{
		trashStat[1] = 0;
	}
	stat2 = trashStat[1] + trashStat[2] + trashStat[3] + trashStat[4];

	trashStat[1] = rand() % 6 + 1;
	trashStat[2] = rand() % 6 + 1;
	trashStat[3] = rand() % 6 + 1;
	trashStat[4] = rand() % 6 + 1;
	if ((trashStat[1] < trashStat[2]) || (trashStat[1] < trashStat[3]) || (trashStat[1] < trashStat[4]))
	{
		trashStat[1] = 0;
	}
	else if ((trashStat[2] < trashStat[1]) || (trashStat[2] < trashStat[3]) || (trashStat[2] < trashStat[4]))
	{
		trashStat[2] = 0;
	}
	else if ((trashStat[3] < trashStat[1]) || (trashStat[3] < trashStat[2]) || (trashStat[3] < trashStat[4]))
	{
		trashStat[3] = 0;
	}
	else if ((trashStat[4] < trashStat[1]) || (trashStat[4] < trashStat[2]) || (trashStat[4] < trashStat[3]))
	{
		trashStat[4] = 0;
	}
	else
	{
		trashStat[1] = 0;
	}
	stat3 = trashStat[1] + trashStat[2] + trashStat[3] + trashStat[4];

	trashStat[1] = rand() % 6 + 1;
	trashStat[2] = rand() % 6 + 1;
	trashStat[3] = rand() % 6 + 1;
	trashStat[4] = rand() % 6 + 1;
	if ((trashStat[1] < trashStat[2]) || (trashStat[1] < trashStat[3]) || (trashStat[1] < trashStat[4]))
	{
		trashStat[1] = 0;
	}
	else if ((trashStat[2] < trashStat[1]) || (trashStat[2] < trashStat[3]) || (trashStat[2] < trashStat[4]))
	{
		trashStat[2] = 0;
	}
	else if ((trashStat[3] < trashStat[1]) || (trashStat[3] < trashStat[2]) || (trashStat[3] < trashStat[4]))
	{
		trashStat[3] = 0;
	}
	else if ((trashStat[4] < trashStat[1]) || (trashStat[4] < trashStat[2]) || (trashStat[4] < trashStat[3]))
	{
		trashStat[4] = 0;
	}
	else
	{
		trashStat[1] = 0;
	}
	stat4 = trashStat[1] + trashStat[2] + trashStat[3] + trashStat[4];
	trashStat[1] = rand() % 6 + 1;
	trashStat[2] = rand() % 6 + 1;
	trashStat[3] = rand() % 6 + 1;
	trashStat[4] = rand() % 6 + 1;
	if ((trashStat[1] < trashStat[2]) || (trashStat[1] < trashStat[3]) || (trashStat[1] < trashStat[4]))
	{
		trashStat[1] = 0;
	}
	else if ((trashStat[2] < trashStat[1]) || (trashStat[2] < trashStat[3]) || (trashStat[2] < trashStat[4]))
	{
		trashStat[2] = 0;
	}
	else if ((trashStat[3] < trashStat[1]) || (trashStat[3] < trashStat[2]) || (trashStat[3] < trashStat[4]))
	{
		trashStat[3] = 0;
	}
	else if ((trashStat[4] < trashStat[1]) || (trashStat[4] < trashStat[2]) || (trashStat[4] < trashStat[3]))
	{
		trashStat[4] = 0;
	}
	else
	{
		trashStat[1] = 0;
	}
	stat5 = trashStat[1] + trashStat[2] + trashStat[3] + trashStat[4];

	trashStat[1] = rand() % 6 + 1;
	trashStat[2] = rand() % 6 + 1;
	trashStat[3] = rand() % 6 + 1;
	trashStat[4] = rand() % 6 + 1;
	if ((trashStat[1] < trashStat[2]) || (trashStat[1] < trashStat[3]) || (trashStat[1] < trashStat[4]))
	{
		trashStat[1] = 0;
	}
	else if ((trashStat[2] < trashStat[1]) || (trashStat[2] < trashStat[3]) || (trashStat[2] < trashStat[4]))
	{
		trashStat[2] = 0;
	}
	else if ((trashStat[3] < trashStat[1]) || (trashStat[3] < trashStat[2]) || (trashStat[3] < trashStat[4]))
	{
		trashStat[3] = 0;
	}
	else if ((trashStat[4] < trashStat[1]) || (trashStat[4] < trashStat[2]) || (trashStat[4] < trashStat[3]))
	{
		trashStat[4] = 0;
	}
	else
	{
		trashStat[1] = 0;
	}
	stat6 = trashStat[1] + trashStat[2] + trashStat[3] + trashStat[4];
}

void predeterminedStats()
{
	stat1 = 15;
	stat2 = 14;
	stat3 = 13;
	stat4 = 12;
	stat5 = 10;
	stat6 = 8;
}

void statRolling()
{
	std::cout << "Which method would you like to use to generate stats?\n 1 - 3d6 : roll 3d6 and use total\n 2 - 4d6 : roll 4d6 and use total of top 3d6\n 3 - Predetermined Stats : 15, 14, 13, 12, 10, 8" << std::endl;
	std::cin >> statChoice;
	if (statChoice == 1)
	{
		stat3d6();
	}
	else if (statChoice == 2)
	{
		stat4d6();
	}
	else if (statChoice == 3)
	{
		predeterminedStats();
	}
	else
	{
		std::cout << "\n\nPlease try again; input a number next to a stat generation method.\n\n" << std::endl;
		statRolling();
	}
}

// Stat rolling block end

void statAssigning()
{
	std::cout << "\n\nOnly use each stat once, or you will have to restart this process.\n" << std::endl;
	std::cout << "Your available stats are :\n 1 - " << stat1 << "\n 2 - " << stat2 << "\n 3 - " << stat3 << "\n 4 - " << stat4 << "\n 5 - " << stat5 << "\n 6 - " << stat6 << std::endl;
	std::cout << std::endl;

	std::cout << "Which stat would you like to assign to Strength?\n > ";										// Stat 1
	std::cin >> usedStat[1];
	if ((usedStat[1] > 6) || (usedStat[1] < 1))
	{
		std::cout << "\n\nYou messed up\nPlease start over and try again.\n\n" << std::endl;
		statAssigning();
	}
	else {}

	std::cout << "Which stat would you like to assign to Dexterity?\n > ";										//Stat 2
	std::cin >> usedStat[2];
	if ((usedStat[2] > 6) || (usedStat[2] < 1) || (usedStat[2] == usedStat[1]))
	{
		std::cout << "\n\nYou messed up\nPlease start over and try again.\n\n" << std::endl;
		statAssigning();
	}
	else {}

	std::cout << "Which stat would you like to assign to Constitution?\n > ";										// Stat 3
	std::cin >> usedStat[3];
	if ((usedStat[3] > 6) || (usedStat[3] < 1) || (usedStat[3] == usedStat[1]) || (usedStat[3] == usedStat[2]))
	{
		std::cout << "\n\nYou messed up\nPlease start over and try again.\n\n" << std::endl;
		statAssigning();
	}
	else {}

	std::cout << "Which stat would you like to assign to Intelligence?\n > ";										// Stat 4
	std::cin >> usedStat[4];
	if ((usedStat[4] > 6) || (usedStat[4] < 1) || (usedStat[4] == usedStat[1]) || (usedStat[4] == usedStat[2]) || (usedStat[4] == usedStat[3]))
	{
		std::cout << "\n\nYou messed up\nPlease start over and try again.\n\n" << std::endl;
		statAssigning();
	}
	else {}

	std::cout << "Which stat would you like to assign to Wisdom?\n > ";										// Stat 5
	std::cin >> usedStat[5];
	if ((usedStat[5] > 6) || (usedStat[5] < 1) || (usedStat[5] == usedStat[1]) || (usedStat[5] == usedStat[2]) || (usedStat[5] == usedStat[3]) || (usedStat[5] == usedStat[4]))
	{
		std::cout << "\n\nYou messed up\nPlease start over and try again.\n\n" << std::endl;
		statAssigning();
	}
	else {}

	std::cout << "Which stat would you like to assign to Charisma?\n > ";										// Stat 6
	std::cin >> usedStat[6];
	if ((usedStat[6] > 6) || (usedStat[6] < 1) || (usedStat[6] == usedStat[1]) || (usedStat[6] == usedStat[2]) || (usedStat[6] == usedStat[3]) || (usedStat[6] == usedStat[4]) || (usedStat[6] == usedStat[5]))
	{
		std::cout << "\n\nYou messed up\nPlease start over and try again.\n\n" << std::endl;
		statAssigning();
	}
	else {}

	if (usedStat[1] == 1)										// Assign usedStat1
	{
		usedStat[1] = stat1;
	}
	else if (usedStat[1] == 2)
	{
		usedStat[1] = stat2;
	}
	else if (usedStat[1] == 3)
	{
		usedStat[1] = stat3;
	}
	else if (usedStat[1] == 4)
	{
		usedStat[1] = stat4;
	}
	else if (usedStat[1] == 5)
	{
		usedStat[1] = stat5;
	}
	else if (usedStat[1] == 6)
	{
		usedStat[1] = stat6;
	}
	else
	{
		std::cout << "ERROR" << std::endl;
		system("Pause");
		exit(0);
	}

	if (usedStat[2] == 1)										// Assign usedStat2
	{
		usedStat[2] = stat1;
	}
	else if (usedStat[2] == 2)
	{
		usedStat[2] = stat2;
	}
	else if (usedStat[2] == 3)
	{
		usedStat[2] = stat3;
	}
	else if (usedStat[2] == 4)
	{
		usedStat[2] = stat4;
	}
	else if (usedStat[2] == 5)
	{
		usedStat[2] = stat5;
	}
	else if (usedStat[2] == 6)
	{
		usedStat[2] = stat6;
	}
	else
	{
		std::cout << "ERROR" << std::endl;
		system("Pause");
		exit(0);
	}

	if (usedStat[3] == 1)										// Assign usedStat3
	{
		usedStat[3] = stat1;
	}
	else if (usedStat[3] == 2)
	{
		usedStat[3] = stat2;
	}
	else if (usedStat[3] == 3)
	{
		usedStat[3] = stat3;
	}
	else if (usedStat[3] == 4)
	{
		usedStat[3] = stat4;
	}
	else if (usedStat[3] == 5)
	{
		usedStat[3] = stat5;
	}
	else if (usedStat[3] == 6)
	{
		usedStat[3] = stat6;
	}
	else
	{
		std::cout << "ERROR" << std::endl;
		system("Pause");
		exit(0);
	}

	if (usedStat[4] == 1)										// Assign usedStat4
	{
		usedStat[4] = stat1;
	}
	else if (usedStat[4] == 2)
	{
		usedStat[4] = stat2;
	}
	else if (usedStat[4] == 3)
	{
		usedStat[4] = stat3;
	}
	else if (usedStat[4] == 4)
	{
		usedStat[4] = stat4;
	}
	else if (usedStat[4] == 5)
	{
		usedStat[4] = stat5;
	}
	else if (usedStat[4] == 6)
	{
		usedStat[4] = stat6;
	}
	else
	{
		std::cout << "ERROR" << std::endl;
		system("Pause");
		exit(0);
	}

	if (usedStat[5] == 1)										// Assign usedStat 5
	{
		usedStat[5] = stat1;
	}
	else if (usedStat[5] == 2)
	{
		usedStat[5] = stat2;
	}
	else if (usedStat[5] == 3)
	{
		usedStat[5] = stat3;
	}
	else if (usedStat[5] == 4)
	{
		usedStat[5] = stat4;
	}
	else if (usedStat[5] == 5)
	{
		usedStat[5] = stat5;
	}
	else if (usedStat[5] == 6)
	{
		usedStat[5] = stat6;
	}
	else
	{
		std::cout << "ERROR" << std::endl;
		system("Pause");
		exit(0);
	}

	if (usedStat[6] == 1)										// Assign usedStat6
	{
		usedStat[6] = stat1;
	}
	else if (usedStat[6] == 2)
	{
		usedStat[6] = stat2;
	}
	else if (usedStat[6] == 3)
	{
		usedStat[6] = stat3;
	}
	else if (usedStat[6] == 4)
	{
		usedStat[6] = stat4;
	}
	else if (usedStat[6] == 5)
	{
		usedStat[6] = stat5;
	}
	else if (usedStat[6] == 6)
	{
		usedStat[6] = stat6;
	}
	else
	{
		std::cout << "ERROR" << std::endl;
		system("Pause");
		exit(0);
	}
}

// Ability Score BS start

void abilityModIncrease()
{
	displayStats();
	std::cout << "Which ability modifier would you like to increase?\n > ";
	std::cin >> abilityChoice[1];

	if (abilityChoice[1] == 1)
	{
		abilityMod[1] = abilityMod[1] + 1;
	}
	else if (abilityChoice[1] == 2)
	{
		abilityMod[2] = abilityMod[2] + 1;
	}
	else if (abilityChoice[1] == 3)
	{
		abilityMod[3] = abilityMod[3] + 1;
	}
	else if (abilityChoice[1] == 4)
	{
		abilityMod[4] = abilityMod[4] + 1;
	}
	else if (abilityChoice[1] == 5)
	{
		abilityMod[5] = abilityMod[5] + 1;
	}
	else if (abilityChoice[1] == 6)
	{
		abilityMod[6] = abilityMod[6] + 1;
	}
	else
	{
		std::cout << "\n\nPlease try again\n\n" << std::endl;
		abilityModIncrease();
	}

	std::cout << "\n\n\nYour stats have the following modifiers : " << std::endl;
	std::cout << "1 -  Strength ...... " << abilityMod[1] << std::endl;
	std::cout << "2 -  Dexterity ..... " << abilityMod[2] << std::endl;
	std::cout << "3 -  Constitution .. " << abilityMod[3] << std::endl;
	std::cout << "4 -  Intelligence ... " << abilityMod[4] << std::endl;
	std::cout << "5 -  Wisdom ........ " << abilityMod[5] << std::endl;
	std::cout << "6 -  Charisma ...... " << abilityMod[6] << std::endl;
	std::cout << std::endl;
	std::cout << "Which ability modifier would you like to increase?\n > ";
	std::cin >> abilityChoice[2];

	if (abilityChoice[1] == abilityChoice[2])
	{
		std::cout << "\n\nYou cannot increase the same ability modifier multiple times.\n\n" << std::endl;

		if (abilityChoice[1] == 1)
		{
			abilityMod[1] = abilityMod[1] - 1;
		}
		else if (abilityChoice[1] == 2)
		{
			abilityMod[2] = abilityMod[2] - 1;
		}
		else if (abilityChoice[1] == 3)
		{
			abilityMod[3] = abilityMod[3] - 1;
		}
		else if (abilityChoice[1] == 4)
		{
			abilityMod[4] = abilityMod[4] - 1;
		}
		else if (abilityChoice[1] == 5)
		{
			abilityMod[5] = abilityMod[5] - 1;
		}
		else if (abilityChoice[1] == 6)
		{
			abilityMod[6] = abilityMod[6] - 1;
		}
		else
		{
			std::cout << "\n\nPlease try again\n\n" << std::endl;
			abilityModIncrease();
		}
		abilityModIncrease();
	}


	else if (abilityChoice[2] == 1)
	{
		abilityMod[1] = abilityMod[1] + 1;
	}
	else if (abilityChoice[2] == 2)
	{
		abilityMod[2] = abilityMod[2] + 1;
	}
	else if (abilityChoice[2] == 3)

	{
		abilityMod[3] = abilityMod[3] + 1;
	}
	else if (abilityChoice[2] == 4)
	{
		abilityMod[4] = abilityMod[4] + 1;
	}
	else if (abilityChoice[2] == 5)
	{
		abilityMod[5] = abilityMod[5] + 1;
	}
	else if (abilityChoice[2] == 6)
	{
		abilityMod[6] = abilityMod[6] + 1;
	}
	else
	{
		std::cout << "\n\nPlease try again\n\n" << std::endl;
		abilityModIncrease();
	}
}

void abilityScoreRaceAndBackgroundCalc()
{
	if (race == 1)
	{
		abilityMod[3] = abilityMod[3] + 2;
	}
	else if (race == 2)
	{
		abilityMod[2] = abilityMod[2] + 2;
	}
	else if (race == 3)
	{
		abilityMod[1] = abilityMod[1] + 2;
		abilityMod[6] = abilityMod[6] + 1;
	}
	else if (race == 4)
	{
		abilityMod[6] = abilityMod[6] + 2;
		abilityModIncrease();					// +1 to two of choice
	}
	else if (race == 5)
	{
		abilityMod[6] = abilityMod[6] + 2;
		abilityMod[4] = abilityMod[4] + 1;
	}
	else if (race == 6)
	{
		abilityMod[2] = abilityMod[2] + 2;
	}
	else if (race == 7)
	{
		abilityMod[1] = abilityMod[1] + 1;
		abilityMod[2] = abilityMod[2] + 1;
		abilityMod[3] = abilityMod[3] + 1;
		abilityMod[4] = abilityMod[4] + 1;
		abilityMod[5] = abilityMod[5] + 1;
		abilityMod[6] = abilityMod[6] + 1;
	}
	else if (race == 8)
	{
		abilityMod[4] = abilityMod[4] + 2;
	}
	else if (race == 9)
	{
		abilityMod[1] = abilityMod[1] + 2;
		abilityMod[3] = abilityMod[3] + 1;
	}
	else
	{

	}

	displayStats();

}

void abilityScoreCalculator()
{
	// Strength Mod - usedStat1
	if ((usedStat[1] == 2) || (usedStat[1] == 3))
	{
		abilityMod[1] = -4;
	}
	else if ((usedStat[1] == 4) || (usedStat[1] == 5))
	{
		abilityMod[1] = -3;
	}
	else if ((usedStat[1] == 6) || (usedStat[1] == 7))
	{
		abilityMod[1] = -2;
	}
	else if ((usedStat[1] == 8) || (usedStat[1] == 9))
	{
		abilityMod[1] = -1;
	}
	else if ((usedStat[1] == 10) || (usedStat[1] == 11))
	{
		abilityMod[1] = 0;
	}
	else if ((usedStat[1] == 12) || (usedStat[1] == 13))
	{
		abilityMod[1] = 1;
	}
	else if ((usedStat[1] == 14) || (usedStat[1] == 15))
	{
		abilityMod[1] = 2;
	}
	else if ((usedStat[1] == 16) || (usedStat[1] == 17))
	{
		abilityMod[1] = 3;
	}
	else if ((usedStat[1] == 18) || (usedStat[1] == 19))
	{
		abilityMod[1] = 4;
	}
	else if ((usedStat[1] == 20) || (usedStat[1] == 21))
	{
		abilityMod[1] = 5;
	}
	else
	{
	}

	// Dexterity Mod - usedStat2
	if ((usedStat[2] == 2) || (usedStat[2] == 3))
	{
		abilityMod[2] = -4;
	}
	else if ((usedStat[2] == 4) || (usedStat[2] == 5))
	{
		abilityMod[2] = -3;
	}
	else if ((usedStat[2] == 6) || (usedStat[2] == 7))
	{
		abilityMod[2] = -2;
	}
	else if ((usedStat[2] == 8) || (usedStat[2] == 9))
	{
		abilityMod[2] = -1;
	}
	else if ((usedStat[2] == 10) || (usedStat[2] == 11))
	{
		abilityMod[2] = 0;
	}
	else if ((usedStat[2] == 12) || (usedStat[2] == 13))
	{
		abilityMod[2] = 1;
	}
	else if ((usedStat[2] == 14) || (usedStat[2] == 15))
	{
		abilityMod[2] = 2;
	}
	else if ((usedStat[2] == 16) || (usedStat[2] == 17))
	{
		abilityMod[2] = 3;
	}
	else if ((usedStat[2] == 18) || (usedStat[2] == 19))
	{
		abilityMod[2] = 4;
	}
	else if ((usedStat[2] == 20) || (usedStat[2] == 21))
	{
		abilityMod[2] = 5;
	}
	else
	{
	}

	// Constitution Mod - usedStat3
	if ((usedStat[3] == 2) || (usedStat[3] == 3))
	{
		abilityMod[3] = -4;
	}
	else if ((usedStat[3] == 4) || (usedStat[3] == 5))
	{
		abilityMod[3] = -3;
	}
	else if ((usedStat[3] == 6) || (usedStat[3] == 7))
	{
		abilityMod[3] = -2;
	}
	else if ((usedStat[3] == 8) || (usedStat[3] == 9))
	{
		abilityMod[3] = -1;
	}
	else if ((usedStat[3] == 10) || (usedStat[3] == 11))
	{
		abilityMod[3] = 0;
	}
	else if ((usedStat[3] == 12) || (usedStat[3] == 13))
	{
		abilityMod[3] = 1;
	}
	else if ((usedStat[3] == 14) || (usedStat[3] == 15))
	{
		abilityMod[3] = 2;
	}
	else if ((usedStat[3] == 16) || (usedStat[3] == 17))
	{
		abilityMod[3] = 3;
	}
	else if ((usedStat[3] == 18) || (usedStat[3] == 19))
	{
		abilityMod[3] = 4;
	}
	else if ((usedStat[3] == 20) || (usedStat[3] == 21))
	{
		abilityMod[3] = 5;
	}
	else
	{
	}

	// Intelligence Mod - usedStat4
	if ((usedStat[4] == 2) || (usedStat[4] == 3))
	{
		abilityMod[4] = -4;
	}
	else if ((usedStat[4] == 4) || (usedStat[4] == 5))
	{
		abilityMod[4] = -3;
	}
	else if ((usedStat[4] == 6) || (usedStat[4] == 7))
	{
		abilityMod[4] = -2;
	}
	else if ((usedStat[4] == 8) || (usedStat[4] == 9))
	{
		abilityMod[4] = -1;
	}
	else if ((usedStat[4] == 10) || (usedStat[4] == 11))
	{
		abilityMod[4] = 0;
	}
	else if ((usedStat[4] == 12) || (usedStat[4] == 13))
	{
		abilityMod[4] = 1;
	}
	else if ((usedStat[4] == 14) || (usedStat[4] == 15))
	{
		abilityMod[4] = 2;
	}
	else if ((usedStat[4] == 16) || (usedStat[4] == 17))
	{
		abilityMod[4] = 3;
	}
	else if ((usedStat[4] == 18) || (usedStat[4] == 19))
	{
		abilityMod[4] = 4;
	}
	else if ((usedStat[4] == 20) || (usedStat[4] == 21))
	{
		abilityMod[4] = 5;
	}
	else
	{
	}

	// Wisdom Mod - usedStat5
	if ((usedStat[5] == 2) || (usedStat[5] == 3))
	{
		abilityMod[5] = -4;
	}
	else if ((usedStat[5] == 4) || (usedStat[5] == 5))
	{
		abilityMod[5] = -3;
	}
	else if ((usedStat[5] == 6) || (usedStat[5] == 7))
	{
		abilityMod[5] = -2;
	}
	else if ((usedStat[5] == 8) || (usedStat[5] == 9))
	{
		abilityMod[5] = -1;
	}
	else if ((usedStat[5] == 10) || (usedStat[5] == 11))
	{
		abilityMod[5] = 0;
	}
	else if ((usedStat[5] == 12) || (usedStat[5] == 13))
	{
		abilityMod[5] = 1;
	}
	else if ((usedStat[5] == 14) || (usedStat[5] == 15))
	{
		abilityMod[5] = 2;
	}
	else if ((usedStat[5] == 16) || (usedStat[5] == 17))
	{
		abilityMod[5] = 3;
	}
	else if ((usedStat[5] == 18) || (usedStat[5] == 19))
	{
		abilityMod[5] = 4;
	}
	else if ((usedStat[5] == 20) || (usedStat[5] == 21))
	{
		abilityMod[5] = 5;
	}
	else
	{
	}

	// Charisma Mod - usedStat6
	if ((usedStat[6] == 2) || (usedStat[6] == 3))
	{
		abilityMod[6] = -4;
	}
	else if ((usedStat[6] == 4) || (usedStat[6] == 5))
	{
		abilityMod[6] = -3;
	}
	else if ((usedStat[6] == 6) || (usedStat[6] == 7))
	{
		abilityMod[6] = -2;
	}
	else if ((usedStat[6] == 8) || (usedStat[6] == 9))
	{
		abilityMod[6] = -1;
	}
	else if ((usedStat[6] == 10) || (usedStat[6] == 11))
	{
		abilityMod[6] = 0;
	}
	else if ((usedStat[6] == 12) || (usedStat[6] == 13))
	{
		abilityMod[6] = 1;
	}
	else if ((usedStat[6] == 14) || (usedStat[6] == 15))
	{
		abilityMod[6] = 2;
	}
	else if ((usedStat[6] == 16) || (usedStat[6] == 17))
	{
		abilityMod[6] = 3;
	}
	else if ((usedStat[6] == 18) || (usedStat[6] == 19))
	{
		abilityMod[6] = 4;
	}
	else if ((usedStat[6] == 20) || (usedStat[6] == 21))
	{
		abilityMod[6] = 5;
	}
	else
	{
	}

	abilityScoreRaceAndBackgroundCalc();

}

// Ability Score BS end
void classSkills()
{
	if (spec == 1)					//Barb
	{
		std::cout << "Choose two to gain profeciency :\n\n 1 - Animal Handling\n 2 - Athletics\n 3 - Intimidation\n 4 - Nature\n 5 - Perception\n 6 - Survival\n\n > ";
		std::cin >> skillSelect[1];

		if (skillSelect[1] == 1)
		{
			skill[10] = skill[10] + 2;
		}
		else if (skillSelect[1] == 2)
		{
			skill[1] = skill[1] + 2;
		}
		else if (skillSelect[1] == 3)
		{
			skill[16] = skill[16] + 2;
		}
		else if (skillSelect[1] == 4)
		{
			skill[8] = skill[8] + 2;
		}
		else if (skillSelect[1] == 5)
		{
			skill[13] = skill[13] + 2;
		}
		else if (skillSelect[1] == 6)
		{
			skill[14] = skill[14] + 2;
		}
		else
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			classSkills();
		}
		std::cout << "\nChoose another : 1 - Animal Handling\n 2 - Athletics\n 3 - Intimidation\n 4 - Nature\n 5 - Perception\n 6 - Survival\nDon't choose the same skill as before.\n\n > ";
		std::cin >> skillSelect[2];

		if (skillSelect[2] == skillSelect[1])
		{
			std::cout << "\n You cannot cain profeciency in the same skill multiple times.\n" << std::endl;

			if (skillSelect[1] == 1)
			{
				skill[10] = skill[10] - 2;
			}
			else if (skillSelect[1] == 2)
			{
				skill[1] = skill[1] - 2;
			}
			else if (skillSelect[1] == 3)
			{
				skill[16] = skill[16] - 2;
			}
			else if (skillSelect[1] == 4)
			{
				skill[8] = skill[8] - 2;
			}
			else if (skillSelect[1] == 5)
			{
				skill[13] = skill[13] - 2;
			}
			else if (skillSelect[1] == 6)
			{
				skill[14] = skill[14] - 2;
			}
			classSkills();
		}
		else if (skillSelect[2] == 1)
		{
			skill[10] = skill[10] + 2;
		}
		else if (skillSelect[2] == 2)
		{
			skill[1] = skill[1] + 2;
		}
		else if (skillSelect[2] == 3)
		{
			skill[16] = skill[16] + 2;
		}
		else if (skillSelect[2] == 4)
		{
			skill[8] = skill[8] + 2;
		}
		else if (skillSelect[2] == 5)
		{
			skill[13] = skill[13] + 2;
		}
		else if (skillSelect[2] == 6)
		{
			skill[14] = skill[14] + 2;
		}
		else
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			if (skillSelect[1] == 1)
			{
				skill[10] = skill[10] - 2;
			}
			else if (skillSelect[1] == 2)
			{
				skill[1] = skill[1] - 2;
			}
			else if (skillSelect[1] == 3)
			{
				skill[16] = skill[16] - 2;
			}
			else if (skillSelect[1] == 4)
			{
				skill[8] = skill[8] - 2;
			}
			else if (skillSelect[1] == 5)
			{
				skill[13] = skill[13] - 2;
			}
			else if (skillSelect[1] == 6)
			{
				skill[14] = skill[14] - 2;
			}
			classSkills();
		}
	}

	else if (spec == 2)					//Cleric
	{
		std::cout << "Choose two to gain profeciency :\n\n 1 - History\n 2 - Insight\n 3 - Medicine\n 4 - Persuasion\n 5 - Religion\n\n > ";
		std::cin >> skillSelect[1];

		if (skillSelect[1] == 1)
		{
			skill[6] = skill[6] + 2;
		}
		else if (skillSelect[1] == 2)
		{
			skill[11] = skill[11] + 2;
		}
		else if (skillSelect[1] == 3)
		{
			skill[12] = skill[12] + 2;
		}
		else if (skillSelect[1] == 4)
		{
			skill[18] = skill[18] + 2;
		}
		else if (skillSelect[1] == 5)
		{
			skill[9] = skill[9] + 2;
		}
		else
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			classSkills();
		}

		std::cout << "Choose another :\n\n 1 - History\n 2 - Insight\n 3 - Medicine\n 4 - Persuasion\n 5 - Religion\nDon't choose the same skill as before.\n\n > ";
		std::cin >> skillSelect[2];

		if (skillSelect[2] == skillSelect[1])
		{
			std::cout << "\n You cannot cain profeciency in the same skill multiple times.\n" << std::endl;

			if (skillSelect[1] == 1)
			{
				skill[6] = skill[6] - 2;
			}
			else if (skillSelect[1] == 2)
			{
				skill[11] = skill[11] - 2;
			}
			else if (skillSelect[1] == 3)
			{
				skill[12] = skill[12] - 2;
			}
			else if (skillSelect[1] == 4)
			{
				skill[18] = skill[18] - 2;
			}
			else if (skillSelect[1] == 5)
			{
				skill[9] = skill[9] - 2;
			}
			classSkills();
		}
		else if (skillSelect[2] == 1)
		{
			skill[6] = skill[6] + 2;
		}
		else if (skillSelect[2] == 2)
		{
			skill[11] = skill[11] + 2;
		}
		else if (skillSelect[2] == 3)
		{
			skill[12] = skill[12] + 2;
		}
		else if (skillSelect[2] == 4)
		{
			skill[18] = skill[18] + 2;
		}
		else if (skillSelect[2] == 5)
		{
			skill[9] = skill[9] + 2;
		}
		else
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			if (skillSelect[1] == 1)
			{
				skill[6] = skill[6] - 2;
			}
			else if (skillSelect[1] == 2)
			{
				skill[11] = skill[11] - 2;
			}
			else if (skillSelect[1] == 3)
			{
				skill[12] = skill[12] - 2;
			}
			else if (skillSelect[1] == 4)
			{
				skill[18] = skill[18] - 2;
			}
			else if (skillSelect[1] == 5)
			{
				skill[9] = skill[9] - 2;
			}
			classSkills();
		}

	}
	else if (spec == 3)					//Fighter
	{
		std::cout << "Choose two to gain profeciency :\n 1 - Acrobatics\n 2 -  Animal Handling\n 3 -  Athletics\n 4 -  History\n 5 - Insight\n 6 - Intimidation\n 7 - Perception\n 8 - Survival\n\n > ";
		std::cin >> skillSelect[1];

		if (skillSelect[1] == 1)
		{
			skill[2] = skill[2] + 2;
		}
		else if (skillSelect[1] == 2)
		{
			skill[10] = skill[10] + 2;
		}
		else if (skillSelect[1] == 3)
		{
			skill[1] = skill[1] + 2;
		}
		else if (skillSelect[1] == 4)
		{
			skill[6] = skill[6] + 2;
		}
		else if (skillSelect[1] == 5)
		{
			skill[11] = skill[11] + 2;
		}
		else if (skillSelect[1] == 6)
		{
			skill[16] = skill[16] + 2;
		}
		else if (skillSelect[1] == 7)
		{
			skill[13] = skill[13] + 2;
		}
		else if (skillSelect[1] == 8)
		{
			skill[14] = skill[14] + 2;
		}
		else
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			classSkills();
		}

		std::cout << "Choose another :\n\n 1 - Acrobatics\n 2 -  Animal Handling\n 3 -  Athletics\n 4 -  History\n 5 - Insight\n 6 - Intimidation\n 7 - Perception\n 8 - Survival\nDon't choose the same skill as before.\n\n > ";
		std::cin >> skillSelect[2];

		if (skillSelect[2] == skillSelect[1])
		{
			std::cout << "\n You cannot cain profeciency in the same skill multiple times.\n" << std::endl;

			if (skillSelect[1] == 1)
			{
				skill[2] = skill[2] - 2;
			}
			else if (skillSelect[1] == 2)
			{
				skill[10] = skill[10] - 2;
			}
			else if (skillSelect[1] == 3)
			{
				skill[1] = skill[1] - 2;
			}
			else if (skillSelect[1] == 4)
			{
				skill[6] = skill[6] - 2;
			}
			else if (skillSelect[1] == 5)
			{
				skill[11] = skill[11] - 2;
			}
			else if (skillSelect[1] == 6)
			{
				skill[16] = skill[16] - 2;
			}
			else if (skillSelect[1] == 7)
			{
				skill[13] = skill[13] - 2;
			}
			else if (skillSelect[1] == 8)
			{
				skill[14] = skill[14] - 2;
			}
			classSkills();
		}
		else if (skillSelect[2] == 1)
		{
			skill[2] = skill[2] + 2;
		}
		else if (skillSelect[2] == 2)
		{
			skill[10] = skill[10] + 2;
		}
		else if (skillSelect[2] == 3)
		{
			skill[1] = skill[1] + 2;
		}
		else if (skillSelect[2] == 4)
		{
			skill[6] = skill[6] + 2;
		}
		else if (skillSelect[2] == 5)
		{
			skill[11] = skill[11] + 2;
		}
		else if (skillSelect[2] == 6)
		{
			skill[16] = skill[16] + 2;
		}
		else if (skillSelect[2] == 7)
		{
			skill[13] = skill[13] + 2;
		}
		else if (skillSelect[2] == 8)
		{
			skill[14] = skill[14] + 2;
		}
		else
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			classSkills();

			if (skillSelect[1] == 1)
			{
				skill[2] = skill[2] - 2;
			}
			else if (skillSelect[1] == 2)
			{
				skill[10] = skill[10] - 2;
			}
			else if (skillSelect[1] == 3)
			{
				skill[1] = skill[1] - 2;
			}
			else if (skillSelect[1] == 4)
			{
				skill[6] = skill[6] - 2;
			}
			else if (skillSelect[1] == 5)
			{
				skill[11] = skill[11] - 2;
			}
			else if (skillSelect[1] == 6)
			{
				skill[16] = skill[16] - 2;
			}
			else if (skillSelect[1] == 7)
			{
				skill[13] = skill[13] - 2;
			}
			else if (skillSelect[1] == 8)
			{
				skill[14] = skill[14] - 2;
			}
			classSkills();
		}

	}
	else if (spec == 4)					//Pally
	{
		std::cout << "Choose two to gain profeciency :\n 1 - Athletics\n 2 -  Insight\n 3 -  Intimidation\n 4 -  Medicine\n 5 - Persuasion\n 6 - Religion\n\n > ";
		std::cin >> skillSelect[1];

		if (skillSelect[1] == 1)
		{
			skill[1] = skill[1] + 2;
		}
		else if (skillSelect[1] == 2)
		{
			skill[11] = skill[11] + 2;
		}
		else if (skillSelect[1] == 3)
		{
			skill[5] = skill[5] + 2;
		}
		else if (skillSelect[1] == 4)
		{
			skill[3] = skill[3] + 2;
		}
		else if (skillSelect[1] == 5)
		{
			skill[18] = skill[18] + 2;
		}
		else if (skillSelect[1] == 6)
		{
			skill[9] = skill[9] + 2;
		}
		else
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			classSkills();
		}

		std::cout << "Choose another :\n\n 1 - Acrobatics\n 2 -  Animal Handling\n 3 -  Athletics\n 4 -  History\n 5 - Insight\n 6 - Intimidation\n 7 - Perception\n 8 - Survival\nDon't choose the same skill as before.\n\n > ";
		std::cin >> skillSelect[2];

		if (skillSelect[2] == skillSelect[1])
		{
			std::cout << "\n You cannot cain profeciency in the same skill multiple times.\n" << std::endl;

			if (skillSelect[1] == 1)
			{
				skill[1] = skill[1] - 2;
			}
			else if (skillSelect[1] == 2)
			{
				skill[11] = skill[11] - 2;
			}
			else if (skillSelect[1] == 3)
			{
				skill[5] = skill[5] - 2;
			}
			else if (skillSelect[1] == 4)
			{
				skill[3] = skill[3] - 2;
			}
			else if (skillSelect[1] == 5)
			{
				skill[18] = skill[18] - 2;
			}
			else if (skillSelect[1] == 6)
			{
				skill[9] = skill[9] - 2;
			}
			classSkills();
		}
		else if (skillSelect[2] == 1)
		{
			skill[1] = skill[1] + 2;
		}
		else if (skillSelect[2] == 2)
		{
			skill[11] = skill[11] + 2;
		}
		else if (skillSelect[2] == 3)
		{
			skill[5] = skill[5] + 2;
		}
		else if (skillSelect[2] == 4)
		{
			skill[3] = skill[3] + 2;
		}
		else if (skillSelect[2] == 5)
		{
			skill[18] = skill[18] + 2;
		}
		else if (skillSelect[2] == 6)
		{
			skill[9] = skill[9] + 2;
		}
		else
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			if (skillSelect[1] == 1)
			{
				skill[1] = skill[1] - 2;
			}
			else if (skillSelect[1] == 2)
			{
				skill[11] = skill[11] - 2;
			}
			else if (skillSelect[1] == 3)
			{
				skill[5] = skill[5] - 2;
			}
			else if (skillSelect[1] == 4)
			{
				skill[3] = skill[3] - 2;
			}
			else if (skillSelect[1] == 5)
			{
				skill[18] = skill[18] - 2;
			}
			else if (skillSelect[1] == 6)
			{
				skill[9] = skill[9] - 2;
			}
			classSkills();
		}
	}
	else if (spec == 5)					//Rogue
	{
		std::cout << "Choose four to gain profeciency :\n 1 - Acrobatics\n 2 -  Athetics\n 3 -  Deception\n 4 -  Insight\n 5 - Intimidation\n 6 - Investigation\n 7 - Perception\n 8 - Performance\n 9 - Persuasion\n 10 - Sleight of Hand\n 11 - Stealth\n\n > ";
		std::cin >> skillSelect[1];

		if (skillSelect[1] < 1 || skillSelect[1] > 11)
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			classSkills();
		}

		std::cout << "Choose another :\n 1 - Acrobatics\n 2 -  Athetics\n 3 -  Deception\n 4 -  Insight\n 5 - Intimidation\n 6 - Investigation\n 7 - Perception\n 8 - Performance\n 9 - Persuasion\n 10 - Sleight of Hand\n 11 - Stealth\n\n > ";
		std::cin >> skillSelect[2];

		if (skillSelect[2] < 1 || skillSelect[2] > 11 || skillSelect[2] == skillSelect[1])
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			classSkills();
		}

		std::cout << "Choose another :\n 1 - Acrobatics\n 2 -  Athetics\n 3 -  Deception\n 4 -  Insight\n 5 - Intimidation\n 6 - Investigation\n 7 - Perception\n 8 - Performance\n 9 - Persuasion\n 10 - Sleight of Hand\n 11 - Stealth\n\n > ";
		std::cin >> skillSelect[3];

		if (skillSelect[3] < 1 || skillSelect[3] > 11 || skillSelect[3] == skillSelect[1] || skillSelect[3] == skillSelect[2])
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			classSkills();
		}

		std::cout << "Choose another :\n 1 - Acrobatics\n 2 -  Athetics\n 3 -  Deception\n 4 -  Insight\n 5 - Intimidation\n 6 - Investigation\n 7 - Perception\n 8 - Performance\n 9 - Persuasion\n 10 - Sleight of Hand\n 11 - Stealth\n\n > ";
		std::cin >> skillSelect[4];

		if (skillSelect[4] < 1 || skillSelect[4] > 11 || skillSelect[4] == skillSelect[1] || skillSelect[4] == skillSelect[2] || skillSelect[4] == skillSelect[3])
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			classSkills();
		}

		if (skillSelect[1] == 1 || skillSelect[2] == 1 || skillSelect[3] == 1 || skillSelect[4] == 1)
		{
			skill[2] = skill[2] + 2;
		}
		else if (skillSelect[1] == 2 || skillSelect[2] == 2 || skillSelect[3] == 2 || skillSelect[4] == 2)
		{
			skill[1] = skill[1] + 2;
		}
		else if (skillSelect[1] == 3 || skillSelect[2] == 3 || skillSelect[3] == 3 || skillSelect[4] == 3)
		{
			skill[5] = skill[5] + 2;
		}
		else if (skillSelect[1] == 4 || skillSelect[2] == 4 || skillSelect[3] == 4 || skillSelect[4] == 4)
		{
			skill[11] = skill[11] + 2;
		}
		else if (skillSelect[1] == 5 || skillSelect[2] == 5 || skillSelect[3] == 5 || skillSelect[4] == 5)
		{
			skill[16] = skill[16] + 2;
		}
		else if (skillSelect[1] == 6 || skillSelect[2] == 6 || skillSelect[3] == 6 || skillSelect[4] == 6)
		{
			skill[7] = skill[7] + 2;
		}
		else if (skillSelect[1] == 7 || skillSelect[2] == 7 || skillSelect[3] == 7 || skillSelect[4] == 7)
		{
			skill[13] = skill[13] + 2;
		}
		else if (skillSelect[1] == 8 || skillSelect[2] == 8 || skillSelect[3] == 8 || skillSelect[4] == 8)
		{
			skill[17] = skill[17] + 2;
		}
		else if (skillSelect[1] == 9 || skillSelect[2] == 9 || skillSelect[3] == 9 || skillSelect[4] == 9)
		{
			skill[18] = skill[18] + 2;
		}
		else if (skillSelect[1] == 10 || skillSelect[2] == 10 || skillSelect[3] == 10 || skillSelect[4] == 10)
		{
			skill[3] = skill[3] + 2;
		}
		else if (skillSelect[1] == 11 || skillSelect[2] == 11 || skillSelect[3] == 11 || skillSelect[4] == 11)
		{
			skill[4] = skill[4] + 2;
		}

	}
	else if (spec == 6)					//Warlock
	{
		std::cout << "Choose two to gain profeciency :\n 1 - Arcana\n 2 -  Deception\n 3 -  History\n 4 -  Intimidation\n 5 - Investigation\n 6 - Nature\n 7 - Religion\n\n > ";
		std::cin >> skillSelect[1];

		if (skillSelect[1] < 1 || skillSelect[1] > 7)
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			classSkills();
		}

		std::cout << "Choose another :\n 1 - Arcana\n 2 -  Deception\n 3 -  History\n 4 -  Intimidation\n 5 - Investigation\n 6 - Nature\n 7 - Religion\n\n > ";
		std::cin >> skillSelect[2];

		if (skillSelect[2] < 1 || skillSelect[2] > 7 || skillSelect[2] == skillSelect[1])
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			classSkills();
		}

		if (skillSelect[1] == 1 || skillSelect[2] == 1)
		{
			skill[5] = skill[5] + 2;
		}
		else if (skillSelect[1] == 2 || skillSelect[2] == 2)
		{
			skill[15] = skill[15] + 2;
		}
		else if (skillSelect[1] == 3 || skillSelect[2] == 3)
		{
			skill[6] = skill[6] + 2;
		}
		else if (skillSelect[1] == 4 || skillSelect[2] == 4)
		{
			skill[16] = skill[16] + 2;
		}
		else if (skillSelect[1] == 5 || skillSelect[2] == 5)
		{
			skill[7] = skill[7] + 2;
		}
		else if (skillSelect[1] == 6 || skillSelect[2] == 6)
		{
			skill[8] = skill[8] + 2;
		}
		else if (skillSelect[1] == 7 || skillSelect[2] == 7)
		{
			skill[9] = skill[9] + 2;
		}

	}
	else if (spec == 7)					//Bard
	{
		std::cout << "Choose three to gain profeciency :\n 1 - Athletics\n 2 -  Acrobatics\n 3 -  Sleight of Hand\n 4 -  Stealth\n 5 - Arcana\n 6 - History\n 7 - Investigation\n 8 - Nature\n 9 - Religion\n 10 - Animal Handling\n 11 - Insight\n 12 - Medicine\n - 13 Perception\n 14 - Survival\n 15 - Deception\n 16 - Intimidation\n 17 - Performance\n 18 - Persuasion\n\n > ";
		std::cin >> skillSelect[1];

		if (skillSelect[1] < 1 || skillSelect[1] > 18)
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			classSkills();
		}

		std::cout << "Choose another :\n 1 - Athletics\n 2 -  Acrobatics\n 3 -  Sleight of Hand\n 4 -  Stealth\n 5 - Arcana\n 6 - History\n 7 - Investigation\n 8 - Nature\n 9 - Religion\n 10 - Animal Handling\n 11 - Insight\n 12 - Medicine\n - 13 Perception\n 14 - Survival\n 15 - Deception\n 16 - Intimidation\n 17 - Performance\n 18 - Persuasion\n\n > ";
		std::cin >> skillSelect[2];

		if (skillSelect[2] < 1 || skillSelect[2] > 18 || skillSelect[2] == skillSelect[1])
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			classSkills();
		}

		std::cout << "Choose another :\n 1 - Athletics\n 2 - Acrobatics\n 3 - Sleight of Hand\n 4 - Stealth\n 5 - Arcana\n 6 - History\n 7 - Investigation\n 8 - Nature\n 9 - Religion\n 10 - Animal Handling\n 11 - Insight\n 12 - Medicine\n - 13 Perception\n 14 - Survival\n 15 - Deception\n 16 - Intimidation\n 17 - Performance\n 18 - Persuasion\n\n > ";
		std::cin >> skillSelect[3];

		if (skillSelect[3] < 1 || skillSelect[3] > 18 || skillSelect[3] == skillSelect[1] || skillSelect[3] == skillSelect[2])
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			classSkills();
		}

		if (skillSelect[1] == 1 || skillSelect[2] == 1 || skillSelect[3] == 1)
		{
			skill[1] = skill[1] + 2;
		}
		else if (skillSelect[1] == 2 || skillSelect[2] == 2 || skillSelect[3] == 2)
		{
			skill[1] = skill[2] + 2;
		}
		else if (skillSelect[1] == 3 || skillSelect[2] == 3 || skillSelect[3] == 3)
		{
			skill[3] = skill[3] + 2;
		}
		else if (skillSelect[1] == 4 || skillSelect[2] == 4 || skillSelect[3] == 4)
		{
			skill[4] = skill[4] + 2;
		}
		else if (skillSelect[1] == 5 || skillSelect[2] == 5 || skillSelect[3] == 5)
		{
			skill[5] = skill[5] + 2;
		}
		else if (skillSelect[1] == 6 || skillSelect[2] == 6 || skillSelect[3] == 6)
		{
			skill[6] = skill[6] + 2;
		}
		else if (skillSelect[1] == 7 || skillSelect[2] == 7 || skillSelect[3] == 7)
		{
			skill[7] = skill[7] + 2;
		}
		else if (skillSelect[1] == 8 || skillSelect[2] == 8 || skillSelect[3] == 8)
		{
			skill[8] = skill[8] + 2;
		}
		else if (skillSelect[1] == 9 || skillSelect[2] == 9 || skillSelect[3] == 9)
		{
			skill[9] = skill[9] + 2;
		}
		else if (skillSelect[1] == 10 || skillSelect[2] == 10 || skillSelect[3] == 10)
		{
			skill[10] = skill[10] + 2;
		}
		else if (skillSelect[1] == 11 || skillSelect[2] == 11 || skillSelect[3] == 11)
		{
			skill[11] = skill[11] + 2;
		}
		else if (skillSelect[1] == 12 || skillSelect[2] == 12 || skillSelect[3] == 12)
		{
			skill[12] = skill[12] + 2;
		}
		else if (skillSelect[1] == 13 || skillSelect[2] == 13 || skillSelect[3] == 13)
		{
			skill[13] = skill[13] + 2;
		}
		else if (skillSelect[1] == 14 || skillSelect[2] == 14 || skillSelect[3] == 14)
		{
			skill[14] = skill[14] + 2;
		}
		else if (skillSelect[1] == 15 || skillSelect[2] == 15 || skillSelect[3] == 15)
		{
			skill[15] = skill[15] + 2;
		}
		else if (skillSelect[1] == 16 || skillSelect[2] == 16 || skillSelect[3] == 16)
		{
			skill[16] = skill[16] + 2;
		}
		else if (skillSelect[1] == 17 || skillSelect[2] == 17 || skillSelect[3] == 17)
		{
			skill[17] = skill[17] + 2;
		}
		else if (skillSelect[1] == 18 || skillSelect[2] == 18 || skillSelect[3] == 18)
		{
			skill[18] = skill[18] + 2;
		}

	}
	else if (spec == 8)					//Druid
	{
		std::cout << "Choose two to gain profeciency :\n 1 - Arcana\n 2 - Animal Handling\n 3 - Insight\n 4 -  Medicine\n 5 - Nature\n 6 - Perception\n 7 - Religion\n 8 - Survival \n\n > ";
		std::cin >> skillSelect[1];

		if (skillSelect[1] < 1 || skillSelect[1] > 18)
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			classSkills();
		}

		std::cout << "Choose another :\n 1 - Arcana\n 2 - Animal Handling\n 3 - Insight\n 4 - Medicine\n 5 - Nature\n 6 - Perception\n 7 - Religion\n 8 - Survival \n\n > ";
		std::cin >> skillSelect[2];

		if (skillSelect[2] < 1 || skillSelect[2] > 18 || skillSelect[2] == skillSelect[1])
		{
			std::cout << "That was not an option.\nPlease try again.\n\n" << std::endl;
			classSkills();
		}

		if (skillSelect[1] == 1 || skillSelect[2] == 1)
		{
			skill[5] = skill[5] + 2;
		}
		else if (skillSelect[1] == 2 || skillSelect[2] == 2)
		{
			skill[10] = skill[10] + 2;
		}
		else if (skillSelect[1] == 3 || skillSelect[2] == 3)
		{
			skill[11] = skill[11] + 2;
		}
		else if (skillSelect[1] == 4 || skillSelect[2] == 4)
		{
			skill[12] = skill[12] + 2;
		}
		else if (skillSelect[1] == 5 || skillSelect[2] == 5)
		{
			skill[8] = skill[8] + 2;
		}
		else if (skillSelect[1] == 6 || skillSelect[2] == 6)
		{
			skill[13] = skill[13] + 2;
		}
		else if (skillSelect[1] == 7 || skillSelect[2] == 7)
		{
			skill[9] = skill[9] + 2;
		}
		else if (skillSelect[1] == 8 || skillSelect[2] == 8)
		{
			skill[14] = skill[14] + 2;
		}

	}
	else if (spec == 9)					//Monk
	{

	}
	else if (spec == 10)					//Ranger
	{

	}
	else if (spec == 11)					//Sorcerer
	{

	}
	else if (spec == 12)					//Wizard
	{

	}
}

void backgroundSkills()
{
	if (background == 1)
	{
		strBackgroundDesc = "You have spent your life in the service of a temple to a specific god or pantheon of gods, You act as an intermediary between the realm of the holy and the mortal world, performing sacred rites and offering sacrifices in order to conduct worshipers into the presence of the divine. You are not necessarily a cleric - performing sacred rites is not the same thing as channeling divine power.\nChoose a god, a pantheon of gods, or some other quasi-divine being from among those listed in appendix-B or those specified by your DM, and work with your DM to detail the nature of your religious service. Were you a lesser functionary in a temple, raised from childhood to assist the priests in the sacred rites? Or were you a high priest who suddenly experienced a call to serve your god in a different way? Perhaps you were the leader of a small cult outside of any established temple structure, or even an occult group that served a fiendish master that you now deny.";

		skill[11] = skill[11] + 2;
		skill[9] = skill[9] + 2;
	}
	else if (background == 2)
	{
		strBackgroundDesc = "You are an experienced criminal with a history of breaking lhe law. You have spent a lot of time among other criminais and still have contacts within the criminal underworld. You're far closer than most people to the world of murder, theft, and violence that pervades the underbelly of civilizalion, and you have survived up to this point by flouting the rules and regulations of society.";

		skill[4] = skill[4] + 2;
		skill[15] = skill[15] + 2;
	}
	else if (background == 3)
	{
		strBackgroundDesc = "You come from a humble social rank, but you are destined for so much more. Already the people of your home village regard you as their champion, and your destiny calls you to stand against the tyrants and monsters that threaten the common folk everywhere.";

		skill[10] = skill[10] + 2;
		skill[14] = skill[14] + 2;
	}
	else if (background == 4)
	{
		strBackgroundDesc = "You lived in seclusion-either in a sheltered community such as a monastery, or entirely alone - for a formative part of your life. In your time apart from the clamor of society, you found quiet, solitude, and perhaps some of the answers you were looking for.";

		skill[9] = skill[9] + 2;
		skill[11] = skill[11] + 2;
	}
	else if (background == 5)
	{
		strBackgroundDesc = "You grew up in the wilds, far from civilization and the comforts of town and technology. You've witnessed the migration of herds larger than forests, survived weather more extreme than any city-dweller could comprehend, and enjoyed the solitude of being the only thinking creature for miles in any direction.The wilds are in your blood, whether you were a nomad, an explorer, a recluse, a hunter-gatherer, or even a marauder. Even in places where you don't know the specific features of the terrain, you know the ways of the wild.";

		skill[1] = skill[1] + 2;
		skill[14] = skill[14] + 2;
	}
	else if (background == 6)
	{
		strBackgroundDesc = "You sailed on a seagoing vessel for years. In that time, you faced down mighty storms, monsters of the deep, and those who wanted to sink your craft to the bottomless depths. Your first love is the distant line of the horizan, but the time has come to try your hand at something new.\nDiscuss the nature of the ship you previously sailed with your Dungeon Master. Was it a merchant ship, a naval vessel, a ship of discovery, or a pirate ship ? How famous(or infamous) is it ? Is it widely traveled ? Is it still sailing, or is it missing and presumed lost with all hands?\nWhat were your duties on board - boatswain, captain, navigator, cook, or some other position ? Who were the captain and first mate ? Did you leave your ship on good terms with your fellows, or on the run?";

		skill[1] = skill[1] + 2;
		skill[13] = skill[13] + 2;
	}
	else if (background == 7)
	{
		strBackgroundDesc = "You grew up on the streets alone, orphaned, and poor. You had no one to watch over you or to provide for you, so you learned to provide for yourself. You fought fiercely over food and kept a constant watch out for other desperate souls who might steal from you. You slept on rooftops and in alleyways, exposed to the elements, and endured sickness without the advantage of medicine or a place to recuperate. You've survived despite all odds, and did so through cunning, strength, speed, or some combination of each./nYou begin your adventuring career with enough money to live modestly but securely for at least ten days. How did you come by that money? What allowed you to break free of your desperate circumstances and embark on a better life?";

		skill[3] = skill[3] + 2;
		skill[4] = skill[4] + 2;
	}
	else if (background == 8)
	{
		strBackgroundDesc = "You have always had a way with people. You know what makes them tick. you can tease out their hearts' desires after a few minutes of conversation, and with a few leading questions you can read them like they were children's books. It's a useful talent, and one that you're perfectly willing to use for your advantage. \nYou know what people want and you deliver, or rather, you promise to deliver. Common sense should steer people away from things that sound too good to be true, but common sense seems to be in short supply when you're around. The bottle of pink-colored liquid will surely cure that unseemly rash, this ointment-nothing more than a bit of fat with a sprinkle of silver dust-can restore youth and vigor, and there's a bridge in the city that just happens to be for sale. These marvels sound implausible, but you make them sound like the real deal.";

		skill[3] = skill[3] + 2;
		skill[15] = skill[15] + 2;
	}
	else if (background == 9)
	{
		strBackgroundDesc = "You thrive in front of an audience. You know how to entrance them, entertain them, and even inspire them. Your poetics can stir the hearts of those who hear you, awakening grief or joy, laughter or anger. Your music raises their spirits or captures their sorrow. Your dance steps captivate, your humor cuts to the quick. Whatever techniques you use, your art is your life.";

		skill[2] = skill[2] = 2;
		skill[17] = skill[17] + 2;
	}
	else if (background == 10)
	{
		strBackgroundDesc = "You are a member of an artisan's guild, skilled in a particular field and closely associated with other artisans. You are a well-established part of the mercantile world, freed by talent and wealth from the constraints of a feudal social order. You learned your skills as an apprentice to a master artisan, under the sponsorship of your guild, until you became a master in your own right.";

		skill[11] = skill[11] + 2;
		skill[18] = skill[18] + 2;
	}
	else if (background == 11)
	{
		strBackgroundDesc = "You understand wealth, power, and privilege. You carry a noble title, and your family owns land, collect taxes, and wields significant political influence. You might be a pampered aristocrat unfamiliar with work or discomfort, a former merchant just elevated to the nobility, or a disinherited scoundrel with a disproportionate sense of entitlement. Or you could be an honest, hard-working landowner who cares deeply about the people who live and work on your land, keenly aware of your responsibility to them. \nWork with your DM to come up with an appropriate title and determine how much authority that title carries. A noble title doesn't stand on its own-it's connected to an entire family, and whatever title you hold, you will pass it down to your own children. Not only do you need to determine your noble title, but you should also work with the DM to describe your family and their influence on you. \nIs your family old and established, or was your title only recently bestowed? How much influence do they wield, and over what area? What kind of reputation does your family have among the other aristocrats of the region? How do the common people regard them? \nWhat's your position in the family? Are you the heir to the head of the family? Have you already inherited the title? How do you feel about that responsibility? Or are you so far down the line of inheritance that no one cares what you do, as long as you don't embarrass the family? How does the head of your family feel about your adventuring career? Are you in your family's good graces, or shunned by the rest of your family? Does your family have a coat of arms? An insignia you might wear on a signet ring? Particular colors you wear all the time? An animal you regard as a symbol of your line or even a spiritual member of the family? \nThese details help establish your family and your title as features of the world of the campaign.";

		skill[6] = skill[6] + 2;
		skill[18] = skill[18] + 2;
	}
	else if (background == 12)
	{
		strBackgroundDesc = "You spent years learning the lore of the multiverse. You scoured manuscripts, studied scrolls, and listened to the greatest experts on the subjects that interest you. Your efforts have made you a master in your fields of study.";

		skill[5] = skill[5] + 2;
		skill[6] = skill[6] + 2;
	}
	else if (background == 13)
	{
		strBackgroundDesc = "War has been your life for as long as you care to remember. You trained as a youth, studied the use of weapons and armor, learned basic survival techniques, including how to stay alive on the battlefield. You might have been part of a standing national army or a mercenary company, or perhaps a member of a local militia who rose to prominence during a recent war. \nWhen you choose this background, work with your DM to determine which military organization you were a part of, how far through its ranks you progressed, and what kind of experiences you had during your military career. Was it a standing army, a town guard, or a village militia? Or it might have been a noble's or merchant's private army, or a mercenary company.";

		skill[1] = skill[1] + 2;
		skill[16] = skill[16] + 2;
	}
	else
	{

	}
}

int main()
{
	std::cout << " - Character Creation - \n" << std::endl;

	raceSelection();
	std::cout << "\n - Race : " << strRace << std::endl;
	std::cout << std::endl;

	classSelection();
	std::cout << "\n - Class : " << strSpec << std::endl;
	std::cout << std::endl;

	backgroundSelection();
	std::cout << "\n - Background : " << strBackground << std::endl;
	std::cout << std::endl;

	statRolling();
	std::cout << std::endl;

	statAssigning();
	std::cout << "\n\n\nYou have assigned the following stats : " << std::endl;
	std::cout << "1 -  Strength ...... " << usedStat[1] << std::endl;
	std::cout << "2 -  Dexterity ..... " << usedStat[2] << std::endl;
	std::cout << "3 -  Constitution .. " << usedStat[3] << std::endl;
	std::cout << "4 -  Inteligence ... " << usedStat[4] << std::endl;
	std::cout << "5 -  Wisdom ........ " << usedStat[5] << std::endl;
	std::cout << "6 -  Charisma ...... " << usedStat[6] << std::endl;
	std::cout << std::endl;

	abilityScoreCalculator();

	classSkills();
	backgroundSkills();

	std::cout << std::endl;
	system("Pause");
	return(0);
}

