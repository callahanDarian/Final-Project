//Program: MillhouseManastorm
//Authors: Brandon Seamer, Darian Callahan
//Date: 5/3/2018
//Code Description
/*
This program will run the turns for Millhouse Manastorm, the sole opponent of our DnD Millhouse Manastorm game. This boss will roll a random number
to select it's spell, and then cast it on the opponent for a random amount of damage, with a range determined by the spell type.
*/

//Libraries
#include<iostream>	//cout cin
#include<fstream>	//file in and out
#include<time.h>	//system clock
#include<random>	//random number generator
#include<string>	//string outputs
#include<Windows.h>	//GetTickCount
#include<conio.h>	//Brosius's Special Colors

using namespace std;
//Only uses namespace std


//Declare Global Variables
int damage; //Damage value of an attack (if it hits)
int armorClass = 10; //The resistance to being hit with an attack ( This does not reduce amount of damage taken, but instead the likelihood of taking damage)
int MillhouseManastormHP = 3; //This is Millhouse's starting hit points (Health)
int characterHP = 12; //This is the adventurer's starting hit points (Health)
int heal; //This is the health value gained through the use of a healing spell
int spellAttackRoll; //This is the rating of an attack, if it is greater than the armor class, it hits)
int millhouseArmorClass = 10;

string randomSpell[] = { "Firebolt", "Ray of Frost", "Acid Splash", "Chill Touch", "Poison Spray", "Shocking Grasp", "Burning Hands", "Magic Missile", "Thunderwave" };
//These are the damaging spells that Milhouse Manastorm can use.


string character;
string spec;

string feat[10];
string equipment[10];
int attackMod, damageMod;
int weaponDice[10];
int spellAttack, spellDC;

int initiative, health, speed, hitDice, AC, proficiency, StrScore, StrMod, StrSave, DexScore, DexMod, DexSave, ConScore, ConMod, ConSave, IntScore, IntMod, IntSave, WisScore, WisMod, WisSave, ChaScore, ChaMod, ChaSave, athletics, acrobatics, sleightOfHand, stealth, arcana, history, investigation, nature, religion, animalHandling, insight, medicine, perception, survival, deception, intimidation, performance, persuasion;

int rage, rageDamage, secondWind;
void characterFeng()
{
	spec = "barbarian";

	initiative = DexMod;
	health = 12 + ConMod;
	speed = 30;
	hitDice = 12;
	AC = 10 + DexMod + ConMod;
	proficiency = 2;

	StrScore = 17;
	StrMod = 3;
	StrSave = StrMod + proficiency;

	DexScore = 13;
	DexMod = 1;
	DexSave = DexMod;

	ConScore = 15;
	ConMod = 2;
	ConSave = ConMod + proficiency;

	IntScore = 8;
	IntMod = -1;
	IntSave = IntMod;

	WisScore = 10;
	WisMod = 0;
	WisSave = WisMod;

	ChaScore = 12;
	ChaMod = 1;
	ChaSave = ChaMod;

	attackMod = StrMod + proficiency;
	damageMod = StrMod;

	equipment[1] = "Greataxe";
	weaponDice[1] = 12;

	equipment[2] = "Handaxe";
	weaponDice[2] = 6;

	equipment[3] = "Javelin";
	weaponDice[3] = 6;

	feat[1] = "Once, you can drop to 1hp instead of being reduced to 0hp";
	secondWind = 1;

	feat[2] = "Roll one additional weapon die of damage on a crit";

	feat[3] = "Twice, you gain advantage on Str checks and saves, deal +2 damage on attacks, and gain resistance vs bludgeoning, piercing, and slashing";
	rage = 2;
	rageDamage = 2;
}



void characterChant()
{
	spec = "bard";

	initiative = DexMod;
	health = 8 + ConMod;
	speed = 30;
	hitDice = 8;
	AC = 11 + DexMod;
	proficiency = 2;

	StrScore = 13;
	StrMod = 1;
	StrSave = StrMod;

	DexScore = 14;
	DexMod = 2;
	DexSave = DexMod + proficiency;

	ConScore = 10;
	ConMod = 0;
	ConSave = ConMod;

	IntScore = 13;
	IntMod = 1;
	IntSave = IntMod;

	WisScore = 8;
	WisMod = -1;
	WisSave = WisMod;

	ChaScore = 17;
	ChaMod = 3;
	ChaSave = ChaMod + proficiency;

	attackMod = DexMod + proficiency;
	damageMod = DexMod;

	equipment[1] = "Rapier";
	weaponDice[1] = 8;

	equipment[2] = "Dagger";
	weaponDice[2] = 4;

	spellAttack = 5;
	spellDC = 13;
}



void characterPope()
{
	spec = "cleric";

	initiative = DexMod;
	health = 8 + ConMod;
	speed = 30;
	hitDice = 8;
	AC = 14 + 2 + DexMod;
	proficiency = 2;

	StrScore = 14;
	StrMod = 2;
	StrSave = StrMod;

	DexScore = 13;
	DexMod = 1;
	DexSave = DexMod;

	ConScore = 15;
	ConMod = 2;
	ConSave = ConMod;

	IntScore = 11;
	IntMod = 0;
	IntSave = IntMod;

	WisScore = 16;
	WisMod = 3;
	WisSave = WisMod + proficiency;

	ChaScore = 9;
	ChaMod = -1;
	ChaSave = ChaMod + proficiency;

	attackMod = StrMod + proficiency;
	damageMod = StrMod;

	equipment[1] = "Mace";
	weaponDice[1] = 6;

	spellAttack = 5;
	spellDC = 13;
}



void characterNohki()
{
	spec = "cleric";

	initiative = DexMod;
	health = 8 + 1 + ConMod;
	speed = 25;
	hitDice = 8;
	AC = 11 + 2 + DexMod;
	proficiency = 2;

	StrScore = 13;
	StrMod = 1;
	StrSave = StrMod;

	DexScore = 12;
	DexMod = 1;
	DexSave = DexMod;

	ConScore = 16;
	ConMod = 3;
	ConSave = ConMod;

	IntScore = 8;
	IntMod = -1;
	IntSave = IntMod + proficiency;

	WisScore = 16;
	WisMod = 3;
	WisSave = WisMod + proficiency;

	ChaScore = 10;
	ChaMod = 0;
	ChaSave = ChaMod;

	attackMod = StrMod + proficiency;
	damageMod = StrMod;

	equipment[1] = "Scimitar";
	weaponDice[1] = 6;

	equipment[2] = "Shield";
	weaponDice[1] = 4;

	spellAttack = 5;
	spellDC = 13;
}



void characterAlexander()
{
	spec = "fighter";

	initiative = DexMod;
	health = 10 + ConMod;
	speed = 30;
	hitDice = 10;
	AC = 16 + 2 + 1;
	proficiency = 2;

	StrScore = 17;
	StrMod = 3;
	StrSave = StrMod + proficiency;

	DexScore = 14;
	DexMod = 2;
	DexSave = DexMod;

	ConScore = 13;
	ConMod = 1;
	ConSave = ConMod + proficiency;

	IntScore = 12;
	IntMod = 1;
	IntSave = IntMod;

	WisScore = 10;
	WisMod = 0;
	WisSave = WisMod;

	ChaScore = 9;
	ChaMod = -1;
	ChaSave = ChaMod;

	attackMod = StrMod + proficiency;
	damageMod = StrMod;

	equipment[1] = "Lance";
	weaponDice[1] = 12;

	equipment[2] = "Handaxe";
	weaponDice[2] = 6;

	spellAttack = 3;
	spellDC = 11;
}



void characterCaine()
{
	spec = "monk";

	initiative = DexMod;
	health = 8 + ConMod;
	speed = 35;
	hitDice = 8;
	AC = 10 + DexMod + WisMod;
	proficiency = 2;

	StrScore = 13;
	StrMod = 1;
	StrSave = StrMod + proficiency;

	DexScore = 17;
	DexMod = 3;
	DexSave = DexMod + proficiency;

	ConScore = 12;
	ConMod = 1;
	ConSave = ConMod;

	IntScore = 10;
	IntMod = 0;
	IntSave = IntMod;

	WisScore = 15;
	WisMod = 2;
	WisSave = WisMod;

	ChaScore = 8;
	ChaMod = -1;
	ChaSave = ChaMod;

	attackMod = DexMod + proficiency;
	damageMod = DexMod;

	equipment[1] = "Shortsword";
	weaponDice[1] = 10;

	spellAttack = 2;
	spellDC = 1;
}



void characterLeucis()
{
	spec = "paladin";

	initiative = DexMod;
	health = 10 + ConMod;
	speed = 30;
	hitDice = 10;
	AC = 16 + 2;
	proficiency = 2;

	StrScore = 15;
	StrMod = 2;
	StrSave = StrMod;

	DexScore = 12;
	DexMod = 1;
	DexSave = DexMod;

	ConScore = 14;
	ConMod = 2;
	ConSave = ConMod;

	IntScore = 11;
	IntMod = 0;
	IntSave = IntMod;

	WisScore = 8;
	WisMod = -1;
	WisSave = WisMod + proficiency;

	ChaScore = 15;
	ChaMod = 2;
	ChaSave = ChaMod + proficiency;

	attackMod = StrMod + proficiency;
	damageMod = StrMod;

	equipment[1] = "Lance";
	weaponDice[1] = 12;

	equipment[2] = "Javelin";
	weaponDice[2] = 6;

	spellAttack = 4;
	spellDC = 12;
}



void characterAdrie()
{
	spec = "ranger";

	initiative = DexMod;
	health = hitDice + ConMod;
	speed = 30;
	hitDice = 10;
	AC = 14 + DexMod;
	proficiency = 2;

	StrScore = 12;
	StrMod = 1;
	StrSave = StrMod + proficiency;

	DexScore = 17;
	DexMod = 3;
	DexSave = DexMod + proficiency;

	ConScore = 14;
	ConMod = 2;
	ConSave = ConMod;

	IntScore = 10;
	IntMod = 0;
	IntSave = IntMod;

	WisScore = 14;
	WisMod = 2;
	WisSave = WisMod;

	ChaScore = 8;
	ChaMod = -1;
	ChaSave = ChaMod;

	attackMod = DexMod + proficiency;
	damageMod = DexMod;

	equipment[1] = "Shortsword";
	weaponDice[1] = 6;

	equipment[2] = "Longbow";
	weaponDice[2] = 8;

	spellAttack = 4;
	spellDC = 12;
}



void characterEnna()
{
	spec = "rogue";

	initiative = DexMod;
	health = hitDice + ConMod;
	speed = 35;
	hitDice = 8;
	AC = 14;
	proficiency = 2;

	StrScore = 13;
	StrMod = 1;
	StrSave = StrMod;

	DexScore = 17;
	DexMod = 3;
	DexSave = DexMod + proficiency;

	ConScore = 12;
	ConMod = 1;
	ConSave = ConMod;

	IntScore = 10;
	IntMod = 0;
	IntSave = IntMod + proficiency;

	WisScore = 9;
	WisMod = -1;
	WisSave = WisMod;

	ChaScore = 14;
	ChaMod = 2;
	ChaSave = ChaMod;

	attackMod = DexMod + proficiency;
	damageMod = DexMod;

	equipment[1] = "Rapier";
	weaponDice[1] = 8;

	equipment[2] = "Shortsword";
	weaponDice[2] = 6;

	equipment[3] = "Dagger";
	weaponDice[3] = 4;

	spellAttack = 4;
	spellDC = 12;
}

void characterMillificent()
{
	spec = "sorcerer";

	initiative = DexMod;
	health = hitDice + ConMod;
	speed = 25;
	hitDice = 8;
	AC = 11;
	proficiency = 2;

	StrScore = 13;
	StrMod = 1;
	StrSave = StrMod;

	DexScore = 13;
	DexMod = 1;
	DexSave = DexMod;

	ConScore = 14;
	ConMod = 2;
	ConSave = ConMod + proficiency;

	IntScore = 12;
	IntMod = 1;
	IntSave = IntMod;

	WisScore = 8;
	WisMod = -1;
	WisSave = WisMod;

	ChaScore = 15;
	ChaMod = 2;
	ChaSave = ChaMod + proficiency;

	attackMod = StrMod + proficiency;
	damageMod = StrMod;

	equipment[1] = "Sickle";
	weaponDice[1] = 8;

	equipment[3] = "Dagger";
	weaponDice[3] = 4;

	spellAttack = 4;
	spellDC = 12;
}



void characterGuldan()
{
	spec = "warlock";

	initiative = DexMod;
	health = hitDice + ConMod;
	speed = 30;
	hitDice = 8;
	AC = 11;
	proficiency = 2;

	StrScore = 15;
	StrMod = 1;
	StrSave = StrMod;

	DexScore = 13;
	DexMod = 1;
	DexSave = DexMod;

	ConScore = 14;
	ConMod = 2;
	ConSave = ConMod + proficiency;

	IntScore = 12;
	IntMod = 1;
	IntSave = IntMod;

	WisScore = 8;
	WisMod = -1;
	WisSave = WisMod;

	ChaScore = 15;
	ChaMod = 2;
	ChaSave = ChaMod + proficiency;

	attackMod = StrMod + proficiency;
	damageMod = StrMod;

	equipment[1] = "Fel-Fire";
	weaponDice[1] = 12;

	equipment[3] = "Dagger";
	weaponDice[3] = 4;

	spellAttack = 5;
	spellDC = 15;
}

void characterLiming()
{
	spec = "warlock";

	initiative = DexMod;
	health = hitDice + ConMod;
	speed = 30;
	hitDice = 6;
	AC = 10;
	proficiency = 2;

	StrScore = 10;
	StrMod = 0;
	StrSave = StrMod;

	DexScore = 10;
	DexMod = 0;
	DexSave = DexMod;

	ConScore = 10;
	ConMod = 0;
	ConSave = ConMod;

	IntScore = 30;
	IntMod = 10;
	IntSave = IntMod + proficiency;

	WisScore = 10;
	WisMod = 0;
	WisSave = WisMod;

	ChaScore = 10;
	ChaMod = 0;
	ChaSave = ChaMod + proficiency;

	attackMod = StrMod + proficiency;
	damageMod = StrMod;

	equipment[3] = "Wand";
	weaponDice[3] = 4;

	spellAttack = 10;
	spellDC = 30;
}



int characterSelection()
{
	MessUp:
	cout << " - Select your character - \n\nFeng : Barbarian\nChant : Bard\nPope : Cleric\nNohki : Druid\nAlexander : Fighter\nCaine : Monk\nLeucis : Paladin\nAdrie : Ranger\nEnna : Rogue\nMillificent :  Sorcerer\nGul'Dan : Warlock\nLi-Ming : Wizard\n\n > ";
	cin >> character;

	for (auto&c : character) c = toupper(c);

	if (character == "FENG")
	{
		characterFeng();
	}
	else if (character == "CHANT")
	{
		characterChant();
	}
	else if (character == "POPE")
	{
		characterPope();
	}
	else if (character == "NOHKI")
	{
		characterNohki();
	}
	else if (character == "ALEXANDER")
	{
		characterAlexander();
	}
	else if (character == "CAINE")
	{
		characterCaine();
	}
	else if (character == "LEUCIS")
	{
		characterLeucis();
	}
	else if (character == "ADRIE")
	{
		characterAdrie();
	}
	else if (character == "ENNA")
	{
		characterEnna();
	}
	else if (character == "MILLIFICENT")
	{
		characterMillificent();
	}
	else if (character == "GUL'DAN")
	{
		characterGuldan();
	}
	else if (character == "LI-MING")
	{
		characterLiming();
	}
	else
	{
		cout << "You didn't select a real character, please type it exactly. \n";
		goto MessUp;
	}
	system("Pause");
	return(0);
}
int roll(int x, int y) //Rolls the damage values of a spell
{
	/*
	This function rolls the dice to determine the damage of the spell
	x = sides of dice rolled
	y = amount of dice rolled
	Runs a random number generator, using x as the max number, and y as the amount of dice rolled
	damage = sum of dice rolled
	*/


	damage = 0; //Reset Damage Value
	for (int z = 0; z < y; z++) //For loop for amount of dice rolled
	{
		Sleep(1); // Change Tick Count for RNG
		srand(GetTickCount()); //Set RNG seed
		damage = damage + rand() % x + 1; //Add another dice roll's rating to the earlier damage value
	}
	cout << "You rolled a " << damage << ". \n";
	return 0; // Function conclusion
}
int attack()
{
	int attackHit;
	attackHit = 0;
	srand(GetTickCount());
	attackHit = rand() % 20 + 1;
	attackHit = attackHit + attackMod;
	
	string userInputString;

	equipmentTypo:
	cout << "What would you like to attack with? " << equipment[1] << ", or " << equipment[2] << endl;
	cin >> userInputString;
	cout << "You rolled a " << attackHit << " for attempting to strike millhouse \n";
	if (attackHit < millhouseArmorClass)
	{
		cout << "You miss!" << endl;
	 	goto Miss;
	}
	if(userInputString == equipment[1])
		roll(weaponDice[1], 1);
	else if(userInputString == equipment[2])
		roll(weaponDice[2], 1);
	else
	{
	cout << "Please type it exactly." << endl;
	goto equipmentTypo;
	}
Miss:
	return 0;
}

int acCheck() //Generates the spellAttackRoll value to determine if the spell hits the adventurer
{
	Sleep(1); //Change RNG seed
	srand(GetTickCount()); //Run random number Generator
	spellAttackRoll = rand() % 20 + 1;	//Run random number generator, and assign value to spellAttackRoll
	spellAttackRoll = spellAttackRoll + 4; //Add 4 from Millhouse's proficiency rating to the spellAttackRoll value
		
	return 0; //Conclude function
}


int healingRoll(int x, int y) //Rolls the heal value of a spell
 /*
	This function rolls the dice to determine the heal value of a spell
	x = sides of dice rolled
	y = amount of dice rolled
	The function runs a random number generator, using x as the max number, and y as the amount of dice rolled
*/

{
	heal = 0; //Resets heal value to 0
	for (int z = 0; z < y; z++)	//For loop for amount of dice rolled
	{
		Sleep(1); //Change Tick Count for RNG
		srand(GetTickCount()); //Set RNG Seed
		heal = heal + rand() % x + 1; //Add another dice roll's rating to the earlier heal value
		
	}
	MillhouseManastormHP = MillhouseManastormHP + heal; // Add heal value to Millhouse Manastorm's HP

	return 0;	//Function Conclusion
}

int saveThrow(int x, int y) //Determines if adventurer is wise enough to avoid falling for a spell
{
	int savingThrow = 0;	//Resets saving throw value
	int WisModifier = 0;	//Target's wisdom modifer
	srand(GetTickCount());	//Sets RNG seed
	savingThrow = rand() % 20 + 1;	//Sets saving throw = to a random 20 sided dice value
	savingThrow = savingThrow; //Adds wisdom modifier to saving throw value
	if (savingThrow > x)
		return 1; //Ends the function
	else
		return 0; //Ends the function
}
int saveThrowHalf(int x)	//Check if save throw passes
{
	/*
	This function rolls the dice to determine if the adventurer is dexterous enough to only receive
	half damage from an area of effect spell. If the roll is higher than the spell's predetermined
	saving throw value, the adventurer only receives half damage, if not, do not change the damage.
	x = Spell value for check to pass
	The function runs a random number generator, using x as the max number, and y as the amount of dice rolled
	*/

	int savingThrow = 0;	//Resets saving throw value
	int DexModifier = 0;	//Target's dexterity modifier
	srand(GetTickCount());	//Sets RNG Seed
	savingThrow = rand() % 20 + 1;	//Sets saving throw = to a random 20 sided dice value
	savingThrow = savingThrow + DexModifier;	//Adds dexterity modifier to saving throw value
	if (savingThrow >= x)	 //If the saving throw is greater than or equal to dex save value of a spell
		damage = damage / 2; //Cut the damage in half
							 //If not
	else{}					 //Do nothing
	return 0;	//End function
}
int castDmgSpell() //Determines what damage spell to roll, and uses the roll function to determine damage dealt
{
	//Random Number Generator Seed for spell selection.
	srand(GetTickCount());
	//Random Number Generator (1 through 3)
	int spellChosen = rand() % 9 + 1;
	//Display spell cast
	cout << "I cast.... " << randomSpell[spellChosen -1] << "!\n";	//Display to adventurer what spell Millhouse casts
	Sleep(547); //Wait for 547 milliseconds to cast spell
	switch (spellChosen)	//Rolls damage depending on spell chosen
	{
		/*
		Spell structures are as follows:
		//Spell Name
		Case # for switch statement
			(optional)acCheck to roll spellAttackValue 
			if statement to check if spell pierces armor class
			(optional )
			savingThrowHalf call for dex checks
			(necessary)
			call roll function to determine damage
			break to end case in switch statement
		*/


		//FireBolt
		case 1:
			acCheck();
			if (spellAttackRoll > armorClass)
			roll(8, 1);
			break;
		//Ray of Frost
		case 2:
			acCheck();
			if (spellAttackRoll > armorClass)
			roll(10, 1);
			break;
		//Acid Splash
		case 3:
			acCheck();
			if (spellAttackRoll > armorClass)
			roll(6, 1);
			break;
		//Chill Touch
		case 4:
			acCheck();
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
			acCheck();
			if (spellAttackRoll > armorClass)
			roll(8, 1);
			break;
		//Burning Hands
		case 7:
			acCheck();
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
	string randomSpell[] = { "Charm Person", "False Life" };	//Healing spells to chose from
	srand(GetTickCount());	//Random Number Generator Seed for spell selection
	int spellChosen = rand() % 2 + 1; //Random Number Generator (1 through 2) to determine spell chosen
	cout << "I cast.... " << randomSpell[spellChosen -1] << "!\n";	//Display spell cast for adventurer
	switch (spellChosen) //Switch statement for spell chosen
	{
		//Charm Person
	case 1:
		//SaveThrow for Wisdom > 12
		if(saveThrow(12, WisMod) != 1)
		{
			cout << "You become charmed by the handsome Millhouse Manastorm. \n";	//Flavor Text
			Sleep(2113);	//Wait 2 seconds (ish)
			cout << "You go shopping with the awesome Millhouse Manastorm. \n";		//Flavor Text
			Sleep(2246);	//Wait 2 seconds (ish)
			cout << "You go on a walk with the venturesome Millhouse Manastorm. \n";	//Flavor Text
		}
		else
			cout << "You manage to be aware of the handsome Millhouse Manastorm... but not handsome enough! \n"; //Flavor Text (Save Throw)
		break;
	case 2:
		healingRoll(4, 1);	//Heal for 1d4
		heal = heal + 4;	//Add 4 to heal
		MillhouseManastormHP = MillhouseManastormHP + heal;	//Apply heal
		break;
	}
	return 0;
}
int SpellsCharacter()


{
	int LayOnHands;
	string userSpell;
	string wizardSpells = "Acid-Splash, Chill-Touch, Fire-Bolt, Poison-Spray, Prestidigitation, Ray-of-Frost, Shocking-Grasp, Burning-Hands, Charm-Person, Chromatic-Orb, False-Life, Mage-Armor, Magic-Missile, Ray-of-Sickness, Tasha's-Hideous-Laughter, Thunderwave, Witch-Bolt \n"; 
	string warlockSpells = "Chill-Touch, Eldritch-Blast, Poison-Spray, Prestidigitation, Arms-of-Hadar, Charm-Person, Hellish-Rebuke, Hex, Witch-Bolt \n";
	string sorcererSpells = "Acid-Splash, Chill-Touch, Fire-Bolt, Poison-Spray, Prestidigitation, Ray-of-Frost, Shocking-Grasp, Burning-Hands, Charm-Person, Chromatic-Orb, False-Life, Mage-Armor, Magic-Missile, Ray-of-Sickness, Thunderwave, Witch-Bolt \n";
	string rangerSpells = "Cure-Wounds, Hail-of-Thorns, Hunter’s-Mark \n";
	string paladinSpells = "Cure-Wounds, Lay-on-Hands, Searing-Smite, Shield-of-Faith, Thunderous-Smite, Wrathful-Smite \n";
	string druidSpells = "Poison-Spray, Produce-Flame, Shillelagh, Thorn-Whip, Charm-Person, Cure-Wounds, Faerie-Fire, Healing-Word, Thunderwave \n";
	string clericSpells = "Sacred-Flame, Spare-the-Dying, Cure-Wounds, Guiding-Bolt, Healing-Word, Inflict-Wounds, Shield-of-Faith \n";
	string bardSpells = "Prestidigitation, Vicious-Mockery, Charm-Person, Cure-Wounds, Dissonant-Whispers, Healing-Word, Tasha's-Hideous-Laughter, Thunderwave \n";
	if (spec == "bard")
	cout << "What spell would you like to cast? (Type exactly as follows) " << bardSpells;
	else if (spec == "cleric")
	cout << "What spell would you like to cast? (Type exactly as follows) " << clericSpells;
	else if (spec == "druid")
	cout << "What spell would you like to cast? (Type exactly as follows) " << druidSpells;
	else if (spec == "ranger")
	cout << "What spell would you like to cast? (Type exactly as follows) " << rangerSpells;
	else if (spec == "paladin")
	cout << "What spell would you like to cast? (Type exactly as follows) " << paladinSpells;
	else if (spec == "sorcerer")
	cout << "What spell would you like to cast? (Type exactly as follows) " << sorcererSpells;
	else if (spec == "warlock")
	cout << "What spell would you like to cast? (Type exactly as follows) " << warlockSpells;
	else if (spec == "wizard")
		cout << "What spell would you like to cast? (Type exactly as follows) " << wizardSpells;
	else
	{
		cout << "You have no spells idiot." << endl;
		attack();
		goto noSpells;
	}

	MessUpSpell:
	
	cin >> userSpell;


	if (userSpell == "Acid-Splash")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(6, 1);
	}

	else if (userSpell == "Chill-touch")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(8, 1);
	}
	
	else if (userSpell == "Cure-Wounds")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			healingRoll(8, 1);
		heal = heal + spellAttack;
		characterHP = characterHP + heal;
	}
	else if (userSpell == "Eldritch-Blast")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(10, 1);
	}
	
	else if (userSpell == "Firebolt")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(10, 1);
	}
	else if (userSpell == "Hail-of-Thorns")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(10, 1);
	}
	else if (userSpell == "Poison-Spray")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(12, 1);
	}
	else if (userSpell == "Prestidigitation")
	{
		cout << "You make a circle on the ground. Woo You. Great Job.";
		cout << "Sparks come out your hands for 10 minutes.";
	}
	else if (userSpell == "Produce-Flame")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(8, 1);
	}
	else if (userSpell == "Ray-of-Frost")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(8, 1);
	}
	else if (userSpell == "Sacred-Flame")
	{
		saveThrow(spellDC, DexMod);
		if (spellAttackRoll > millhouseArmorClass)
			roll(6, 1);
	}
	else if (userSpell == "Spare-the-Dying")
	{
			healingRoll(8, 1);
		characterHP = characterHP + heal;
	}
	else if (userSpell == "Shillelagh")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(8, 1);
	}
	else if (userSpell == "Shocking-Grasp")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(8, 1);
	}
	else if (userSpell == "Shield-of-Faith")
	{
		armorClass = armorClass + 2;
	}
	else if (userSpell == "Thorn-Whip")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(6, 1);
	}
	else if (userSpell == "Thunderous-Smite")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(6, 2);
	}
	else if (userSpell == "Wrathful-Smite")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(6, 1);
	}
	else if (userSpell == "Vicious-Mockery")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(4, 1);
	}
	else if (userSpell == "Arms-of-Hadar")
	{
			roll(6, 2);
		if (saveThrow(spellDC, StrMod) != 1)
			damage = damage / 2;
	}
	else if (userSpell == "Burning-Hands")
	{
			roll(6, 3);
		if (saveThrow(spellDC, DexMod) != 1)
			damage = damage / 2;
	}
	else if (userSpell == "Charm-Person")
	{
		if (saveThrow(spellDC, WisMod) != 1)
		{
			cout << "You charm the handsome Millhouse Manastorm. \n";	//Flavor Text
			Sleep(2113);	//Wait 2 seconds (ish)
			cout << "You go shopping with the awesome Millhouse Manastorm. \n";		//Flavor Text
			Sleep(2246);	//Wait 2 seconds (ish)
			cout << "You go on a walk with the venturesome Millhouse Manastorm. \n";	//Flavor Text
		}
		else
			cout << "You manage to be aware of the handsome Millhouse Manastorm... but not handsome enough! \n"; //Flavor Text (Save Throw)
	}
	else if (userSpell == "Chromatic-Orb")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(8, 3);
	}
	else if (userSpell == "Cure-Wounds")
	{
			healingRoll(8, 1);
			heal = heal + 4;
			characterHP = characterHP + heal;
	}
	else if (userSpell == "Dissonant-Whispers")
	{
		if (saveThrow(spellDC, WisMod) != 1)
			roll(6, 3);
	}
	else if (userSpell == "False-Life")
	{
		healingRoll(4, 1);
		heal = heal + 4;
		characterHP = characterHP + heal;
	}
	else if (userSpell == "Healing-Word")
	{
		healingRoll(4, 1);
			heal = heal + spellAttack;
		characterHP = characterHP + heal;
	}
	else if (userSpell == "Hellish-Rebuke")
	{
			roll(6, 1);
			if (saveThrow(spellDC, DexMod) != 1)
				damage = damage / 2;
	}
	else if (userSpell == "Hex")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(6, 1);
	}
	else if (userSpell == "Inflict-Wounds")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(10, 3);
	}
	else if (userSpell == "Mage-Armor")
	{
		armorClass = 13 + DexMod;
	}
	else if (userSpell == "Magic-Missile")
	{
			roll(4, 3);
			damage = damage + 3;
	}
	else if (userSpell == "Ray-of-Sickness")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(8, 2);
	}
	else if (userSpell == "Tasha's-Hideous-Laughter")
	{
		cout << "Millhouse begins to laugh uncontrollably." << endl;
		Sleep(2001);
		cout << "Millhouse continues to laugh uncontrollably." << endl;
		Sleep(2001);
		cout << "Millhouse ends laughing uncontrollably." << endl;
	}
	else if (userSpell == "Lay-on-Hands" && LayOnHands != 1)
	{
		characterHP = characterHP + 5;
		LayOnHands++;
		
	}
	else if (userSpell == "Thunderwave")
	{
			roll(8, 2);
			if (saveThrow(spellDC, ConMod) != 1)
				damage = damage / 2;
	}
	else if (userSpell == "Witch-Bolt")
	{
		acCheck();
		if (spellAttackRoll > millhouseArmorClass)
			roll(12, 1);
	}
	else
	{
		goto MessUpSpell;
	}
	noSpells:

	return 0;
}

int main()
{
	system("color 5E");
	int userInput;
	string userInputString;
	System::Console::WindowLeft;
	System::Console::WindowTop;
	int width = System::Console::LargestWindowWidth - 25;
	int height = System::Console::LargestWindowHeight - 8;
	System::Console::SetWindowSize(width, height);
	characterSelection();
	characterHP = health;

	do
	{
		if (MillhouseManastormHP <= 2)	//If HP <= 2, run away and heal
		{
			//Expeditious Retreat
			cout << "Millhouse runs away 75ft/s for 10 minutes. \n Millhouse being " << 75 * 60 * 60 << " feet away, heals to maximum and you spend 30 minutes catching up to him!" << endl;
			MillhouseManastormHP = 8;
			Sleep(1000 * 4);
		}
		else if (MillhouseManastormHP > 2 && MillhouseManastormHP <= 4)	//If HP is between 3 and 4 cast healing spells.
		{	//Healing Spells
			healingSpells();
		}
		else	//Cast damaging spells when HP is not below 4
		{
			
			castDmgSpell();	//Cast DMG Spells
			characterHP = characterHP - damage;	// Apply damage
			cout << "Your current HP is: " << characterHP << ". \n";	//Display HP
			if (characterHP <= 0)	//Escape loop
				goto GetOut;	//You got killed by Millhouse!
		}
	userInputError:
		cout << "What would you like to do? Attack (1), or Cast a Spell(2)\n";
		cin >> userInput;
		if (userInput == 1)
		{
			damage = 0;
			attack();
		}
		else if (userInput == 2)
		{
			damage = 0;
			SpellsCharacter();
		}
		else
		{
		cout << "Please select a given option integer (1, or 2)" << endl;
		goto userInputError;
		}
		MillhouseManastormHP = MillhouseManastormHP - damage;
		cout << "Millhouse HP = " << MillhouseManastormHP << endl;
		userInput = 0;
		damage = 0;
	} while (MillhouseManastormHP > 0);	//While Millhouse is alive, cast spells
	Sleep(1000);
	cout << "You have defeated the great and glorious Millhouse Manastorm! \n After murdering the great wizard, the town guards execute you. \n";	//Millhouse dies
GetOut:	//Millhouse Manastorm wins

	if (characterHP <= 0)	//If character dies
	{
		cout << "You have been defeated by the great, glorious, and victorious Millhouse Manastorm! Long live the sorcerer! Long live the foolish! \n";	//Millhouse win statement
	}
	Sleep(3000);
	system("color 4C");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << " You Died " << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("pause");	//Conclusion
	return 0;	//Conclusion
}

//Hey, Author's note:
//It works. Unlike some other peoples >.> 
// ¯\_(ツ)_/¯