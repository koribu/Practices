#include<iostream>
#include"Card.h"

void getScore();
int score;
int main()
{
	srand((unsigned)time(NULL));
	char doYouWant;
	do
	{
		Card pCard1, pCard2, pCard3, cCard1, cCard2, cCard3;
		int score = 0;

		score += pCard1.compare(cCard1);

		score += pCard2.compare(cCard2);

		score += pCard3.compare(cCard3);

		if (score > 0)
			cout << "You win!!!"<<endl;
		else if (score == 0)
			cout << "There is no winner!!! You have same points!"<<endl;
		else
			cout << "You lose!!!"<<endl;

		cout << "Do you want to play again?\n<y>     <n>"<<endl;
		cin >> doYouWant;
		cin.ignore();
	} while (doYouWant == 'y');

	return 0;
}

void getScore()
{
	score++;
}