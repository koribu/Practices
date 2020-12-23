#include<iostream>
#include<ctime>
#include<vector>

using namespace std;

void sortingBubble(vector<int>& num);
void swap(int i, int j);
void binarySearch(vector<int> num, int lookFor);

int main()
{
	vector<int>numbers;
	string tryAgain;
	int guess;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 100; i++)
	{
		numbers.push_back(rand()%1000);
	}
	
	sortingBubble(numbers);

	cout << "Hello!!! I have one hundred number between 0 to 1000\nTry your chance and find one of the numbers!!!" << endl<<endl;
	//for (int i : numbers)
	//{
	//	cout << i << " ";
	//}
	do
	{
		cout << "Give me a number so i can say is it one of those hundred: ";
		cin >> guess;
		binarySearch(numbers, guess);
		cout << "Do you want to try again?\n<y>        <n>" << endl<<endl;
		cin >> tryAgain;


	} while (tryAgain == "y");

}

void sortingBubble(vector<int>& num)
{
	int i;
	bool swap;
	do
	{	
		swap = false;
		for (unsigned count = 0; count < num.size() - 1; count++)
		{
			if (num[count] > num[count + 1])
			{
				i = num[count];
				num[count] = num[count + 1];
				num[count + 1] = i;
				swap = true;
			}
		}
	} while (swap);
}

void binarySearch(vector<int> num, int guess)
{
	int first=0,mid, last;

	bool found = false;
	last = num.size();
	while (first<=last && !found)
	{
		mid = (first + last)/2;
		if (num[mid]  == guess)
		{
			found = true;
		}
		else if (num[mid] < guess)
		{
			first = mid + 1;
		}
		else
		{
			last = mid - 1;
		}
	}
	if (found)
		cout << "Your guessed right!!! It is number of index " << mid << ".\nCongrats!"<<endl<<endl;
	else
		cout << "Your guess isnt one of my numbers!"<<endl<<endl;	

}