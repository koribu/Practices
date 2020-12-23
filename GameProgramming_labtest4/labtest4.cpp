// This program demonstrates the use of a structure. 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Employee
{
private:
	int    empNumber;  // Employee number
	string name;       // Employee name
	double hours,      // Hours worked
		payRate;    // Hourly pay rate
public:
	Employee(int empN, string n, double h, double p)
	{
		empNumber = empN;
		name = n;
		hours = h;
		payRate = p;
	}

	Employee()
	{
		empNumber = 0;
		name = "No Name";
		hours = 0;
		payRate = 0;
	}
	void setEmpNumber(int number)
	{
		empNumber = number;
	}

	void setName(string n)
	{
		name = n;
	}

	void setPayRate(double rate)
	{
		payRate = rate;
	}

	void setHours(double h)
	{
		hours = h;
	}

	int getEmpNumber()
	{
		return empNumber;
	}

	string getName()
	{
		return name;
	}

	double getHours()
	{
		return hours;
	}

	double getPayRate()
	{
		return payRate;
	}

	double getWage()
	{
		return payRate * hours;
	}

	string getEmpData()
	{
		string data = "\nEmployee ID Number ===> " + to_string(empNumber);
		data += "\nEmployee Name ========> " + name;
		data += "\nHours Worked =========> " + to_string(hours);
		data += "\nPay Rate =============> " + to_string(payRate);
		data += "\nTotal Wage ===========> " + to_string(getWage());
		data += "\n";

		return data;
	}



};


Employee findHigh(Employee list[], int size);
Employee findLow(Employee list[], int size);
void sortEmployeesAZ(Employee list[], int size);

void sortEmployeesPayHL(Employee list[], int size);
int averageEarning(Employee list[], int size);
int employeesHigherThanAvarage(Employee list[], int size);
void sortEmployeesPayHL(Employee list[], int size);
int findEmployee(Employee list[], int size, string empName);



int main()
{
	const int NUM_EMPLOYEES = 4;
	int functionChoose = 0;
	string empName;

	Employee list[NUM_EMPLOYEES];
	list[0] = Employee(1, "John", 40, 25);
	list[1] = Employee(2, "Mary", 30, 40);
	list[2] = Employee(3, "Grace", 35, 30);
	list[3] = Employee(4, "Mark", 45, 20);

	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		cout << list[i].getEmpData();
	}

	cout <<"\n\n\nPlease enter a number of function to take action:" << endl
		<< "-2. Employee with highest wage." << endl
		<< "-1. Employee with lowest wage." << endl
		<< " 0. Sort Employees A to Z." << endl
		<< " 1. Sort Employees by rate of pay from high to low." << endl
		<< " 2. Returns the average earnings of all employees." << endl
		<< " 3. Returns the number of employees whose earnings are higher then average." << endl
		<< " 4. Find one of the employee's informations. " << endl << endl;
	cin >> functionChoose;

	switch (functionChoose)
	{
	case -2:
		cout << "Employee with the highest wage is: " << findHigh(list, NUM_EMPLOYEES).getEmpData();
		break;
	case -1:
		cout << "Employee with the lowest wage is: " << findLow(list, NUM_EMPLOYEES).getEmpData();
		break;
	case 0:
		sortEmployeesAZ(list, NUM_EMPLOYEES);
		cout << "Employees are sorted Low to High!" << endl;
		for (int i = 0; i < NUM_EMPLOYEES; i++)
		{
			cout << list[i].getEmpData();
		}
		break;
	case 1:
		sortEmployeesPayHL( list, NUM_EMPLOYEES);
		cout << "Employees are sorted high wage to low!" << endl;
		for (int i = 0; i < NUM_EMPLOYEES; i++)
		{
			cout << list[i].getEmpData();
		}
		break;
	case 2:
		cout<<"Average earning of all employees is "<< averageEarning(list, NUM_EMPLOYEES)<<endl;
		break;
	case 3:
		cout << "Number of employees who have wage higher than average is " << employeesHigherThanAvarage(list, NUM_EMPLOYEES)<<endl;
		break;
	case 4:
		
		cout << "Please enter employee name you look for: " << endl;
		cin >> empName;
		cout<<"ID number of " <<empName<<" is "<<findEmployee(list, NUM_EMPLOYEES, empName)<<endl<<endl;
		break;
	default:
		cout << "Invalid choose!" << endl;
		break;
	}

	system("pause");
	return 0;
}

Employee findHigh(Employee list[], int size)
{

	Employee high = list[0];
	for (int i = 0; i < size; i++)
			if (list[i].getWage() > high.getWage())
			{
				high = list[i];
			}
	return high;
}

Employee findLow(Employee list[], int size)
{

	Employee low = list[0];
	for (int i = 0; i < size; i++)
		if (list[i].getWage() < low.getWage())
		{
			low = list[i];
		}
	return low;
}

void sortEmployeesAZ(Employee list[], int size)
{
	Employee emp;
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (list[i].getWage() > list[j].getWage())
			{
				emp = list[i];
				list[i] = list[j];
				list[j] = emp;
			}
}

void sortEmployeesPayHL(Employee list[], int size)
{
	Employee emp;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (list[i].getWage() < list[j].getWage())
			{
				emp = list[i];
				list[i] = list[j];
				list[j] = emp;
			}
		}
	}
}
int averageEarning(Employee list[], int size)
{
	int average = 0;
	for (int i = 0; i < size; i++)
	{
		average += list[i].getWage();
	}
	return average / size;
}
int employeesHigherThanAvarage(Employee list[], int size)
{
	int empEarningHigherAv = 0;
	
	for (int i = 0; i < size; i++)
	{
		if(list[i].getWage()>averageEarning(list,size))
		empEarningHigherAv++;
	}
	return empEarningHigherAv;
}

int findEmployee(Employee list[], int size, string empName)
{
	int empID = 0;
	for (int i = 0; i < size; i++)
	{
		if (list[i].getName() == empName)
		{
			empID = list[i].getEmpNumber();			
		}		
	}
	return empID;
}

