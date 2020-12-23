#include "weapon.h"


void shop(Weapon *inv, const int size, vector<int> *ourInv);
void simulation(Weapon *inv,vector<int> ourInv);

int main()
{
	const int INV_NUM = 10;
	Weapon *invPtr;
	//vector<int> ourInvPtr = nullptr;
	vector<int> ourInv;
	Weapon inventory[INV_NUM] = {
		Weapon(),
		 Weapon("Axe", "Potoss!",45,5,4),
		 Weapon("Dagger", "Fettess!",32,8,1),
		 Weapon("Bow", "Tipiss!",54,12,2),
		 Weapon("Sword", "Zzwass!",58,10,3),
		 Weapon("Snake", "Ttsss!",39,1,8),
		 Weapon("Bread", "Namnamss!",1,2,-2),
		 Weapon("Water", "Foshss!",0,3,-1),
		 Weapon("Scream", "ahhhhhass!",12,7,1),
		 Weapon("Love", "kissass!",100,20,-5)
	};

	invPtr = inventory;

	shop(invPtr, INV_NUM, &ourInv);
	for (int i = 0; i < ourInv.size(); i++)
	{
		cout<<ourInv[i]<<endl;
	}
	simulation(invPtr, ourInv);
}

void shop(Weapon *inv, const int size, vector<int> *ourInv)
{
	string choose;
	int buy=1,budget = 148;
	bool haveWeapon = true;
	cout << "*Enter's to shop\n\n-Greetings to Ultimate Weaponary!!!\n\nWhat do you want?" << endl;

	do
	{
		cout << "\na. Buy Weapon\nb. Check Balance\nc. Exit Store\n\n";
		cin >> choose;
		if (choose == "a")
		{
			for (int i = 1; i < size; i++)
			{
				cout << fixed << showpoint << setprecision(2);
				cout << i << ". " << setw(7) << inv[i].getName() << setw(5) << inv[i].getPrice() << " gold" << endl;
			}
			cout << "0. Back to the menu!" << endl;
			while (buy != 0)
			{
				cout << "Please enter a number choose!" << endl;
				cin >> buy;
				if (buy == 1 || buy == 2 || buy == 3 || buy == 4 || buy == 5 || buy == 6 || buy == 7 || buy == 8 || buy == 9)
				{
					if (inv[buy].getPrice() <= budget && !inv[buy].getowned())
					{

						Weapon a = inv[buy];
						haveWeapon = true;
						inv[buy].setowned();
						ourInv->push_back(buy);
						budget -= inv[buy].getPrice();
						cout << "Great! You have " << inv[buy].getName() << " now!" << endl;
					}
					else
					{
						if (inv[buy].getPrice() > budget)
						{
							cout << "You don't have enough gold!" << endl;
						}
						else if (inv[buy].getowned())
							cout << "You already have this weapon!" << endl;
					}
				}
				
			}			
		}

		else if (choose == "b")
		{
			cout << "You have " << budget << " gold in your pocket!" << endl;
		}
		else if(choose != "c")
			cout << "Please enter a valid choose!";
	} while (choose != "c" || !haveWeapon);

	cout << "Thank you, come again!" << endl<<endl<<endl;
}
void simulation(Weapon* inv, vector<int> ourInv)
{
	bool orcSaved = false;
	
	int holdWeapon = 0, elfLives = 15;
	char choose;
	cout << "-What a lovely day isn't it? Lets go to the market:)" << endl << endl;
	cout << "-Did you hear that?\n\n-HEEELP!!!..." << endl<<endl;
	cout << "-Somebody needs our help hurry! Go to the back of that building where voices are coming!" << endl << endl;
	cout << "-There is a filthy Elf try to mug a poor Orc!\n\n-Use your weapons!" << endl << endl;
	cout << "enter 'a' and 'd' to choose previous or next weapon!\nEnter 's' to attack!\n ";
	//cout << "You have " << inv[1];
	int weaponMax = ourInv.size();
	while(!orcSaved)
	{
		cout <<endl<< "enter!"<<endl;
		cin >> choose;

		if (choose == 'a' && holdWeapon>0)
		{
			cout << "You have " << inv[ourInv[--holdWeapon]].getName() << " in your hand now!"<<endl;
		}
		else if (choose == 'd' && holdWeapon <weaponMax-1)
		{
			cout << "You have " << inv[ourInv[++holdWeapon]].getName() << " in your hand now!" << endl;
		}
		else if(choose =='s'&& inv[ourInv[holdWeapon]].getMaxUse()!=0)
		{
			cout << inv[ourInv[holdWeapon]].getSound() << endl;
			int use = inv[ourInv[holdWeapon]].getMaxUse() - 1;
			inv[ourInv[holdWeapon]].setMaxUse(use);
			if (inv[ourInv[holdWeapon]].getMaxUse() <= 0)
			{
				cout << "Ouch you broke your "<< inv[ourInv[holdWeapon]].getName()<<"!" << endl;
				inv[ourInv[holdWeapon]].setName("the broken " + inv[ourInv[holdWeapon]].getName());
			}

			elfLives -= inv[ourInv[holdWeapon]].getDamage();
			if (elfLives > 0)
			{

				cout << "Elf's life is " << elfLives << " now!" << endl;
			}
			else
			{
				cout << "\n\nCongrats!!!\n\nYou saved the lovely orc Orcella!!!" << endl << endl;
				orcSaved = true;
			}
		}
	}
}
