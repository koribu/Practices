#include<iostream>

using namespace std;

int raceNumber = 0, classNumber;
string raceName, className, rUReady;



void raceChoose()
{
	switch (raceNumber)
	{
	case 0:
		cout << "Okey. Whatever, leave! Who am i right! A simple GOD!!!\n\n";
		return;
	case 1:
		raceName = "Dwarf ";
		cout << "You are a " << raceName << " now!\n\n";
			break;
	case 2:
		raceName = "Elf ";
		cout << "You are a " << raceName << " now!\n\n";

			break;
	case 3:
		raceName = "Halfling ";
		cout << "You are a " << raceName << " now!\n\n";
			break;
	case 4:
		raceName = "Human ";
		cout << "You are a " << raceName << " now!\n\n";
			break;
	case 5:
		raceName = "Orc ";
		cout << "You are a " << raceName << " now!\n\n";
			break;
	default:
		break;
	}
}

void classChoose()
{
	switch (classNumber)
	{
	case 0:
		cout << "Okey. Whatever, leave! Who am i right! A simple GOD!!!\n\n";
		return;
	case 1:
		className = "Barbarian ";
		cout << "You are a " << className << " " << raceName << " now!\n\n";
		break;
	case 2:
		className = "Bard ";
		cout << "You are a " << className << " " << raceName << " now!\n\n";
		break;
	case 3:
		className = "Cleric ";
		cout << "You are a " << className << " " << raceName << " now!\n\n";
		break;
	case 4:
		className = "Druid ";
		cout << "You are a " << className << " " << raceName << " now!\n\n";
		break;
	case 5:
		className = "Fighter ";
		cout << "You are a " << className << " " << raceName << " now!\n\n";
		break;
	case 6:
		className = "Monk ";
		cout << "You are a " << className << " " << raceName << " now!\n\n";
		break;
	case 7:
		className = "Paladin ";
		cout << "You are a " << className << " " << raceName << " now!\n\n";
		break;
	case 8:
		className = "Ranger ";
		cout << "You are a " << className << " " << raceName << " now!\n\n";
		break;
	case 9:
		className = "Rogue ";
		cout << "You are a " << className << " " << raceName << " now!\n\n";
		break;
	case 10:
		className = "Wizard ";
		cout << "You are a " << className << " " << raceName << " now!\n\n";
		break;
	default:
		break;
	}
}


int main()
{
	cout << "     Welcome to Ancient, Magical, Fantastic, Cool POND!!! " << endl << endl;
	cout << "The pond let you choose your race and class in this Fantastic World!!!" << endl << endl;
	cout << "Now! You mortal soul! Here the Races:\n\nDwarf: 1,\nElf: 2,\nHalfling: 3,\nHuman: 4,\nOrc: 5,\nExit: 0." << endl;
	cout << "Choose wisely!!!" << endl;
	cin >> raceNumber;
	while (raceNumber < 1 || raceNumber>5)
	{
		cout << "You Fool!!! Don't make GODs angry! Anwser correctly!";
		cin >> raceNumber;
	}
	raceChoose();

	cout << "Which Class will you wish from the POND " << raceName<<"?"<<endl<<endl;
	cout << "Here the Classes:\n\nBarbarian: 1,\nBard: 2,\nCleric: 3,\nDruid: 4,\nFighter: 5,\nMonk: 6,\nPaladin: 7,\nRanger: 8,\nRogue: 9,\nWizard: 10,\nExit: 0.\n\n";
	cin >> classNumber;
	while (classNumber < 1 || classNumber>10)
	{
		cout << "Damn dude... I try to be a good pond :( Try a valid number!";
		cin >> classNumber;
	}
	
	classChoose();

	cout << "The time has come!!!\nYou need to Test your power front of the GODs!!!" << endl << endl;
	cout << "Here the ancient Warrior The Titan Tim!!!\n\nTim: Wassap!"<<endl<<endl;
	cout << "are you ready?\n\n<y>     <n>"<<endl;
	cin >> rUReady;
	if (rUReady == "y")
	{
		cout << "HAHAHA You are Death now you poor " << className << raceName<<"!" << endl;
		cout << "You can't win against Tim! He is the best!\n"<<endl<<endl;
	}
	else if (rUReady == "n")
	{
		cout << "You win " << className << raceName << "!!!" <<endl<<endl;
		cout << "But you are Dead now anyway!\nbecause we like to kill n stuff... you understand :/\n" << endl << endl;
	}

}