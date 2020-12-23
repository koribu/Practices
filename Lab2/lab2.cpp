#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double workedHours, hourlyRate, regularPay, overTimePay ;
	string calculateAgain;

	cout << "Welcome to the workers one of the best helper THE PAYMENT BOT!!!\n" << endl;
	cout << "Please enter the number of hours worked: ";
	cin >> workedHours;
	cout << "Now can you enter the hourly rate: ";
	cin >> hourlyRate;
	
	if (workedHours > 40)
	{
		regularPay = 40 * hourlyRate;
		overTimePay = ((workedHours - 40) * hourlyRate * 1.5);
	}

	else
	{
		regularPay = workedHours * hourlyRate;
		overTimePay = 0;
	}

	cout << "Your regular pay is $" << regularPay << endl;
	cout << "Your overtime payment is $" << overTimePay << endl;
	cout << "Your total pay is $" << regularPay+overTimePay << endl;
	cout << "Your tax is $" << (regularPay + overTimePay) * 0.18<<endl;
	cout << "\n Would you like to calculate another payment?\n<yes>" << setw(10) << "<no>"<<endl;
	cin >> calculateAgain;

	if (calculateAgain == "yes")
	{
		main();
	}
	else
		cout << "Okey then. See you later!"<<endl;

}