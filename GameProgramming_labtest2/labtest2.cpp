#include <iostream>

using namespace std;

int main()
{
	int number;

	cin >> number;

	while(number >= 0)
	{
		(number % 2 == 0) ? cout << number << " is even" <<endl : cout<< number << " is odd"<<endl;
		(number % 3 == 0) ? cout << number << " is evenly divisible by 3" << endl : cout<<"";
		(number % 5 == 0) ? cout << number << " is evenly divisible by 5" << endl : cout << "";

		cin >> number;
	}

	return 0;

}