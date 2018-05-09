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


using namespace std;
//Only uses namespace std


//Declare Global Variables
int damage; //Damage value of an attack (if it hits)
int armorClass = 10; //The resistance to being hit with an attack ( This does not reduce amount of damage taken, but instead the likelihood of taking damage)
int MillhouseManastormHP = 3; //This is Millhouse's starting hit points (Health)
int characterHP = 12; //This is the adventurer's starting hit points (Health)
int heal; //This is the health value gained through the use of a healing spell
int spellAttackRoll; //This is the rating of an attack, if it is greater than the armor class, it hits)
string randomSpell[] = { "Firebolt", "Ray of Frost", "Acid Splash", "Chill Touch", "Poison Spray", "Shocking Grasp", "Burning Hands", "Magic Missile", "Thunderwave" };
//These are the damaging spells that Milhouse Manastorm can use.

int acCheck() //Generates the spellAttackRoll value to determine if the spell hits the adventurer
{
	Sleep(1); //Change RNG seed
	srand(GetTickCount()); //Run random number Generator
	spellAttackRoll = rand() % 20 + 1;	//Run random number generator, and assign value to spellAttackRoll
	spellAttackRoll = spellAttackRoll + 4; //Add 4 from Millhouse's proficiency rating to the spellAttackRoll value
		
	return 0; //Conclude function
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
	return 0; // Function conclusion
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

int saveThrow(int x) //Determines if adventurer is wise enough to avoid falling for a spell
{
	int savingThrow = 0;	//Resets saving throw value
	int WisModifier = 0;	//Target's wisdom modifer
	srand(GetTickCount());	//Sets RNG seed
	savingThrow = rand() % 20 + 1;	//Sets saving throw = to a random 20 sided dice value
	savingThrow = savingThrow + WisModifier; //Adds wisdom modifier to saving throw value
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
		if(saveThrow(12) != 0)
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
	string wizardSpells = "Acid Splash, Blade Ward, Chill Touch, Dancing Lights, Fire Bolt, Friends, Light, Mage Hand, Mending, Message, Minor Illusion, Poison Spray, Prestidigitation, Ray of Frost, Shocking Grasp, True Strike, Alarm, Burning Hands, Charm Person, Chromatic Orb, Color Spray, Comprehend Languages, Detect Magic, Disguise Self, Expeditious Retreat, False Life, Feather Fall, Find Familiar, Fog Cloud, Grease, Identify, Illusory Script, Jump, Longstrider, Mage Armor, Magic Missile, Protection from Evil and Good, Ray of Sickness, Shield, Silent Image, Sleep, Tasha’s Hideous Laughter, Tenser’s Floating Disk, Thunderwave, Unseen Servant, Witch Bolt";
	string warlockSpells = "Blade Ward, Chill Touch, Eldritch Blast, Friends, Mage Hand, Minor Illusion, Poison Spray, Prestidigitation, True Strike, Armor of Agathys, Arms of Hadar, Charm Person, Comprehend Languages, Expeditious Retreat, Hellish Rebuke, Hex, Illusory Script, Protection from Evil and Good, Unseen Servant, Witch Bolt";
	string sorcererSpells = "Acid Splash, Blade Ward, Chill Touch, Dancing Lights, Fire Bolt, Friends, Light, Mage Hand, Mending, Message, Minor Illusion, Poison Spray, Prestidigitation,Ray of Frost ,Shocking Grasp True Strike, Burning Hands, Charm Person, Chromatic Orb, Color Spray, Comprehend Languages, Detect Magic, Disguise Self, Expeditious Retreat, False Life, Feather Fall, Fog Cloud, Jump, Mage Armor, Magic Missile, Ray of Sickness, Shield, Silent Image, Sleep, Thunderwave, Witch Bolt";
	string rangerSpells = "Alarm, Animal Friendship, Cure Wounds, Detect Magic, Detect Poison and Disease, Ensnaring Strike, Fog Cloud, Goodberry, Hail o f Thorns, Hunter’s Mark, Jump, Longstrider, Speak with Animals";
	string paladinSpells = "Bless, Command, Compelled Duel, Cure Wounds, Detect Evil and Good, Detect Magic, Detect Poison and Disease, Divine Favor, Heroism, Protection from Evil and Good, Purify Food and Drink, Searing Smite, Shield of Faith, Thunderous Smite, Wrathful Smite";
	string druidSpells = "Druidcraft, Guidance, Mending, Poison Spray, Produce Flame, Resistance, Shillelagh, Thorn Whip, Animal Friendship, Charm Person, Create or Destroy Water, Cure Wounds, Detect Magic, Detect Poison and Disease, Entangle, Faerie Fire, Fog Cloud, Goodberry, 	Healing Word, Jump, Longstrider, Purify Food and Drink, Speak with Animals,	Thunderwave";
	string clericSpells = "Guidance, Light, Mending, Resistance, Sacred Flame, Spare the Dying, Thaumaturgy, Bane, Bless, Command, Create or Destroy Water, Cure Wounds, Detect Evil and Good, Detect Magic, Detect Poison and Disease, Guiding Bolt, Healing Word, Inflict Wounds, Protection from, Evil and Good, Purify Food and Drink, Sanctuary, Shield of Faith";
	string bardSpells = "Blade Ward, Dancing Lights, Friends, Light, Mage Hand, Mending, Message, Minor Illusion, Prestidigitation, True Strike, Vicious Mockery, Animal Friendship, Bane, Charm Person, Comprehend Languages, Cure Wounds, Detect Magic, Disguise Self, Dissonant Whispers, Faerie Fire, Feather Fall, Healing Word, Heroism, Identify, Illusory Script, Longstrider, Silent Image, Sleep, Speak with Animals, Tasha’s Hideous Laughter, Thunderwave, Unseen Servant";
	//if (class == bard)
	cout << "What spell would you like to cast? (Type exactly as follows) " << bardSpells;
	//else if (class == cleric)
	cout << "What spell would you like to cast? (Type exactly as follows) " << clericSpells;
	//else if (class == druid)
	cout << "What spell would you like to cast? (Type exactly as follows) " << druidSpells;
	//else if (class == ranger)
	cout << "What spell would you like to cast? (Type exactly as follows) " << rangerSpells;
	//else if (class == paladin)
	cout << "What spell would you like to cast? (Type exactly as follows) " << paladinSpells;
	//else if (class == sorcerer)
	cout << "What spell would you like to cast? (Type exactly as follows) " << sorcererSpells;
	//else if (class == warlock)
	cout << "What spell would you like to cast? (Type exactly as follows) " << warlockSpells;
	//else if (class == wizard)
	cout << "What spell would you like to cast? (Type exactly as follows) " << wizardSpells;
	return 0;
}

int main()
{
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
			if (characterHP <= 0)	//Escape loop
				goto GetOut;	//You got killed by Millhouse!
			castDmgSpell();	//Cast DMG Spells
			characterHP = characterHP - damage;	// Apply damage
			cout << "Your current HP is: " << characterHP << ". \n";	//Display HP
		}
	} while (MillhouseManastormHP > 0);	//While Millhouse is alive, cast spells

	cout << "You have defeated the great and glorious Millhouse Manastorm! \n After murdering the great wizard, the town guards execute you. \n";	//Millhouse dies
GetOut:	//Millhouse Manastorm wins
	if (characterHP <= 0)	//If character dies
	{
		cout << "You have been defeated by the great, glorious, and victorious Millhouse Manastorm! Long live the sorcerer! Long live the foolish! \n";	//Millhouse win statement
	}
	SpellsCharacter();
	system("pause");	//Conclusion
	return 0;	//Conclusion
}

