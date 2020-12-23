#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Card
{
private:
	char  rank, rankOptions[13] = { 'A', '2','3','4','5','6','7','8','9','T','J','Q','K' };
	string suite, suiteOptions[4] = { "clubs","diamonds", "hearts", "spades" };


public:
	int randomNumR, randomNumS;
	Card();
	int compare(Card other);

	string getSuite();
	char getRank();
	
};
