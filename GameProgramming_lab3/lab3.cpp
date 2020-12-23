#include<iostream>
#include<iomanip>


using namespace std;

int main()
{
	const double BREADPRICE = 1.99, MILKPRICE = 3.00, CHEESEPRICE = 9.99, TAXPERCENT = 0.13;
	int breadTotal, milkTotal, cheeseTotal, totalPrice;

	cout << fixed << showpoint << setprecision(2);
	cout << "     Welcome to the Sinan's Poor Market! We have few!" << endl<<endl;
	cout << "Bread Price: $" << BREADPRICE<<endl;
	cout << "Milk Price: $" << MILKPRICE << endl;
	cout << "Cheese Price: $" << CHEESEPRICE << endl << endl;
	
	cout << "How many Bread do you want: ";
	cin >> breadTotal;
	cout << "How many Milk do you want: ";
	cin >> milkTotal;
	cout << "How many Cheese do you want: ";
	cin >> cheeseTotal;
	cout << endl << endl;
	
	breadTotal != 0 ? cout<<"": cout << "No Bread ";
	milkTotal != 0 ? cout << "" : cout << "No Milk ";
	cheeseTotal != 0 ? cout << "" : cout << "No Cheese ";
	
	totalPrice = BREADPRICE * breadTotal + MILKPRICE * milkTotal + CHEESEPRICE * cheeseTotal;

	cout << "Total amount before tax is $" << totalPrice <<endl<<endl;
	cout << "Amount tax is $" << totalPrice * TAXPERCENT<<endl<<endl;
	cout << "Grand total amount including tax is $" << (TAXPERCENT + 1) * totalPrice<<endl<<endl;
}