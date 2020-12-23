#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readFile(ifstream &someFile);

int main()
{
	ifstream inputFile;

	inputFile.open("test.txt");
	if (inputFile.fail())
	{
		cout << "Your file too cool to be exist.\n";
	}
	else
	{
		readFile(inputFile);
		inputFile.close();
	}
	return 0;
}

void readFile(ifstream &someFile)
{
	string needToDo;
	while (someFile >> needToDo)
	{
		cout << needToDo << " ";
	}
}
