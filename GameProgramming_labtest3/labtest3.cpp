#include <iostream>
#include<fstream>
#include<vector>

using namespace std;
void readFile(ifstream& someFile);
int salaryRanger(int amount);



int fixedAmount[10], sales[10]; // i have issues with leaving array empty. so i had to assign a size to arrays

int main()
{
    ofstream writeFile;
    ifstream openFile;
   
    openFile.open("data.txt");
    if (openFile.fail())
    {
        cout << "I can't find the data.txt:(" << endl << endl;
    }
	readFile(openFile);
	
	openFile.close();

return 0;
}

void readFile(ifstream& someFile)
{
	int value1, value2;
	vector<int> fixedAmount, sales;
	int ranges[9] = { 0 };
	string temp[9] = { "$200-299 -> ","$300-399 -> " ,"$400-499 -> " ,"$500-599 -> " ,"$600-699 -> " ,"$700-799 -> " ,"$800-899 -> ","$900-999 -> ","$1000 up -> " };

	while (someFile >> value1>>value2)
	{
		fixedAmount.push_back(value1);
		sales.push_back(value2);
	}
	for (int i = 0; i < sales.size(); i++)
	{
		fixedAmount[i] += sales[i] * 0.05;
		ranges[salaryRanger(fixedAmount[i])]++; 
	}
	for (int i = 0; i < 9; i++)
	{
		cout << temp[i] << ranges[i] << endl;
	}

}

int salaryRanger(int amount)
{
	if (amount < 300)
		return 0;
	else if (amount < 400)
		return 1;
	else if (amount < 500)
		return 2;
	else if (amount < 600)
		return 3;
	else if (amount < 700)
		return 4;
	else if (amount < 800)
		return 5;
	else if (amount < 900)
		return 6;
	else if (amount < 1000)
		return 7;
	else
		return 8;
}