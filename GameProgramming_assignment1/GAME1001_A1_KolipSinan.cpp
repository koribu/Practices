#include<iostream>
#include<fstream>
#include<string>
#include<time.h>
#include<stdio.h>
#include<cstring>
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

using namespace std;

void readFile(ifstream& someFile);

void savingCheck(char name[20]);

void game(char name[20]);


int win=0, lose=0, tie=0;
bool readyToExit = false;


int main()
{
	char playerName[20];

	cout << "greetings..."<< endl;
	cout << "Welcome to Great Federation Tournament of  Rock-Paper-Scissor-Lizard-Spock!!!" << endl << endl;
	cout << "***Klingons not allowed for safety reasons!!!" << endl << endl;
	cout << "What is your name dear sentient being: "<<endl<<endl;
	cin >> playerName;
	savingCheck(playerName);
	game(playerName);

	cout << "See you again " << playerName << "! I will remember you! You better come back and rise like star in our galaxy!!!" << endl << endl;


	return 0;

}

void savingCheck(char name[20] )
{
	ofstream scoreChartWrite;
	ifstream scoreChartRead;
	char txtName[20] = { 0 };	
	char formatTxt[5] = { '.','t','x','t' };

	strncat(txtName, name, 20);
	strncat(txtName, formatTxt, 4);
	
	scoreChartRead.open(txtName);

	if (scoreChartRead.fail())
	{
		cout << "Oh you are new to our Federation! Welcome! "<<name<<"!" << endl;
		scoreChartWrite.open(txtName);
		scoreChartWrite << win << lose << tie;
		scoreChartWrite.close();

		
	}
	else
	{
		if (readyToExit)
		{
			scoreChartWrite.open(txtName);
			scoreChartWrite << win<< endl<< lose<<endl << tie;
		}
		else
		{
			cout << "I remember you!!! "<< endl<<"Are you The Magnificent "<<name<<" right?\nYou are well-known with your scores: ";
			readFile(scoreChartRead);
			scoreChartRead.close();

		}
	}
	
}


void readFile(ifstream &someFile)
{


	while (someFile >> win>>lose>>tie)
	{
		cout <<"  win: "<< win<<"   lose: " << lose<<"   tie: "<<tie<<endl<<endl;
	}
}

void game(char *name)
{
	string botChoose[5] = { "Scissors!","Paper!", "Rock!","Lizard!","Spock!" };

	int gestures = 1, bot;

	bool doYouPlay = true;

	cout << "Anyway... Here the rules:\nYou will choose one of those gestures to win the competitor!\nVery simple right? " << endl << endl;
	cout << "1. Scissors\n2. Paper\n3. Rock\n4. Lizard\n5. Spock\n0. Exit" << endl;
	cout << "please give a number: ";

	while (doYouPlay)
	{
		srand(time(NULL));
		bot = 0 + rand() % 5;


		cin >> gestures;

		switch (gestures)
		{
		case 1:
			cout << "You choosed Scissors! " << endl;
			cout << "end... The Competitor was " << botChoose[bot];
			switch (bot)
			{
			case 0:
				cout << "\nScissors like each other! So, it is TIE!" << endl << endl;
				tie++;
				break;
			case 1:
				cout << "\nScissors cuts paper! You WIN!" << endl << endl;
				win++;
				break;
			case 2:
				cout << "\nRock crushes scissors! You LOSE!" << endl << endl;
				lose++;
				break;
			case 3:
				cout << "\nScissors decapitates lizard! You WIN!" << endl << endl;
				win++;
				break;
			case 4:
				cout << "\nSpock smashes scissors! You LOSE!" << endl << endl;
				lose++;
				break;
			default:
				cout << "\n Your choosed one is alien to us! Please choose a valid number." << endl << endl;
				break;
			}
			break;

		case 2:
			cout << "You choosed Paper! " << endl;		
			cout << "end... The Competitor was " << botChoose[bot];
			switch (bot)
			{
			case 0:
				cout << "\nScissors cuts paper! You LOSE!" << endl << endl;
				lose++;
				break;
			case 1:
				cout << "\nPapers go to the paper party in library! So, it is TIE!" << endl << endl;
				tie++;
				break;
			case 2:
				cout << "\nPaper covers rock! You WIN!" << endl << endl;
				win++;
				break;
			case 3:
				cout << "\nLizard eats paper! You LOSE!" << endl << endl;
				lose++;
				break;
			case 4:
				cout << "\nPaper disproves Spock! You WIN!" << endl << endl;
				win++;
				break;
			default:
				cout << "\n Your choosed one is alien to us! Please choose a valid number." << endl << endl;
				break;
			}
			break;
		case 3:
			cout << "You choosed Rock! " << endl;
			cout << "end... The Competitor was " << botChoose[bot];
			switch (bot)
			{
			case 0:
				cout << "\nRock crushes scissors! So it is WIN!" << endl << endl;
				win++;
				break;
			case 1:
				cout << "\nPaper covers rock! You LOSE!" << endl << endl;
				lose++;
				break;
			case 2:
				cout << "\nRocks handle their problem with talking like adults! So, it is TIE!" << endl << endl;
				tie++;
				break;
			case 3:
				cout << "\Rock crushes lizard! You WIN!" << endl << endl;
				win++;
				break;
			case 4:
				cout << "\nSpock vaporizes rock! You LOSE!" << endl << endl;
				lose++;
				break;
			default:
				cout << "\n Your choosed one is alien to us! Please choose a valid number." << endl << endl;
				break;
			}
			break;
		case 4:
			cout << "You choosed Lizard! " << endl;
			cout << "end... The Competitor was " << botChoose[bot];
			switch (bot)
			{
			case 0:
				cout << "\nScissors decapitates lizard! You WIN! " << endl << endl;
				win++;
				break;
			case 1:
				cout << "\nLizard eats paper! You LOSE!" << endl << endl;
				lose++;
				break;
			case 2:
				cout << "\nRock crushes lizard! You LOSE!" << endl << endl;
				lose++;
				break;
			case 3:
				cout << "\nLizards chill on the beach with mojitos! So it is TIE!" << endl << endl;
				tie++;
				break;
			case 4:
				cout << "\nLizard poisons Spock! You WIN!" << endl << endl;
				win++;
				break;
			default:
				cout << "\n Your choosed one is alien to us! Please choose a valid number." << endl << endl;
				break;
			}
			break;
		case 5:
			cout << "You choosed Spock! " << endl;
			cout << "end... The Competitor was " << botChoose[bot];
			switch (bot)
			{
			case 0:
				cout << "\nSpock smashes scissors! You WIN! " << endl << endl;
				win++;
				break;
			case 1:
				cout << "\nPaper disproves Spock! You LOSE!" << endl << endl;
				lose++;
				break;		
			case 2:
				cout << "\nSpock vaporizes rock! You WIN!" << endl << endl;
				win++;
				break;
			case 4:
				cout << "\nLizard poisons Spock! You LOSE!" << endl << endl;
				lose++;
				break;
			case 5:
				cout << "\nSpock met with Spock and they dived into a deep logical convervation! So it is TIE!" << endl << endl;
				tie++;
				break;
			default:
				cout << "\n Your choosed one is alien to us! Please choose a valid number." << endl << endl;
				break;
			}
			break;
		case 0:
			readyToExit = true;
			savingCheck(name);
			doYouPlay = false;
			break;

		default:
			cout << "Please give acceptable number!" << endl;
			break;
		}
		cout << name << "'s score:   win: " << win << "   lose: " << lose << "   tie: " << tie << endl << endl<<endl;

	}
}
