#include <iostream>
#include "Card.h"


Card::Card()
{
	randomNumR = rand() % 13;
	randomNumS = rand() % 4;
	rank = rankOptions[randomNumR];
	suite = suiteOptions[randomNumS];

}
string Card::getSuite()
{
	return suite;
}
char Card::getRank()
{
	return rank;
}
int Card::compare(Card other)
{
	if (randomNumR == other.randomNumR)
	{
		cout << "You both have same card of " << Card::getRank() << " of " << Card::getSuite() << endl;
		return 0;
	}
	else if (randomNumR > other.randomNumR)
	{
		 cout << "Your card " << Card::getRank() << " of " << Card::getSuite() << " is bigger than Computer's " <<
			other.getRank() << " of " << other.getSuite()<<"!" << endl;
		 return 1;
		
	}
	else
	{
		cout << "Your card " << Card::getRank() << " of " << Card::getSuite() << " is smaller than Computer's " <<
			other.getRank() << " of " << other.getSuite()<<"!"<<endl;
		return -1;
	}
	
}