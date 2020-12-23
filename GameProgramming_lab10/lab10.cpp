#include <iostream>
#include<time.h>

using namespace std;

int* getRanNumber(int);
int checkNumber(int*,int);
int main()
{
	
	int size,divNum;
	int* numbers = nullptr;

	do
	{
		cout << "enter the number of elements"<<endl;
		cin >> size;
	} while (!(size > 0 && size < 100));

	numbers = getRanNumber(size);
	divNum = checkNumber(numbers, size);
	cout << "No of elements divisble by 5 is " << divNum << endl;

	delete[] numbers;
	numbers = nullptr;

	return 0;
}

int* getRanNumber(int s)
{
	int* ranNums = nullptr;
	srand(time(NULL));

	ranNums = new int[s];

	for (int i = 0; i < s; i++)
	{
		ranNums[i] = rand() % 1000;
	}

	return ranNums;

}

int checkNumber(int* n ,int s)
{
	int divN = 0;
	for (int i = 0; i < s; i++)
	{
		if (n[i] % 5 == 0)
		{
			divN++;
		}
		
	}
	return divN;
}


