#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Card
{
private:
	char  rankOptions[13] = {'A', '2','3','4','5','6','7','8','9','T','J','Q','K'},rank;
	string suite, suiteOptions[4] = { "clubs","diamonds", "hearts", "spades" };

public:
	Card()
	{
		cout << "Default constructor start!" << endl;
		rank = rankOptions[0];
		suite = suiteOptions[1];
		cout << "It is a " << rank << " of " << suite << "!" << endl<<endl;
	}

	Card(int)
	{
		srand((unsigned)time(NULL));

		cout << "Second constructor start!" << endl;
		do
		{
			rank = rankOptions[rand() % 13];
			suite = suiteOptions[rand() % 4];

		} while (rank == rankOptions[0] && suite == suiteOptions[0]);
		
		cout << "It is a " << rank << " of " << suite << "!" << endl;
	}
	
	bool isEqual(Card other);
};

bool Card::isEqual(Card other)
{
	return (rank == other.rank && suite == other.suite);
}

int main()
{	
	Card card1, card2, card3(1); 
	
	if (card1.isEqual(card2))
	{
		cout << "\nCard1 equal to card2!" << endl;
	}
	if (!(card1.isEqual(card3)))
	{
		cout << "\nCard1 not equal to card3!"<<endl;
	}
	return 0;
}