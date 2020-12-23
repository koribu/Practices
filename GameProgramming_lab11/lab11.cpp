#include <iostream>
#include<cstring>

using namespace std;

int countVowel(const char*);
int countConsonants (const char*);
void convertToUpper( char*);
void convertToLower( char*);

int main()
{
	const int S_LENGTH = 50;
	char inputString[S_LENGTH];
	int choose;

	const char* s = "test";
	cout << s;

	cout << "Please enter a string " << S_LENGTH << " characters:" << endl;
	cin.getline(inputString, S_LENGTH);
	cout << "Please choose what you want to do with your text!\n1-Count vowels!\n2-Count consonants!\n3-Convert to uppercase!\n4-Convert to lowercase!\n\n";
	cin >> choose;
	switch (choose)
	{
	case 1:
		cout <<"There are "<<countVowel(inputString)<<" vowels." << endl;
		break;
	case 2:
		cout << "There are " << countConsonants(inputString)<<" consonants." << endl;
		break;
	case 3:
		convertToUpper(inputString);
		cout << inputString << endl;
		break;
	case 4:
		convertToLower(inputString);
		cout << inputString << endl;
		break;

	default:
		cout << "Invalid choose!";
		break;
	}

}

int countVowel(const char* cPtr)
{
	int count = 0;

	while (*cPtr != '\0')
	{
		if (*cPtr ==  'a' || *cPtr == 'e' || *cPtr == 'i' ||
			*cPtr == 'o' || *cPtr == 'u' || *cPtr == 'A' ||
			*cPtr == 'E' || *cPtr == 'I' || *cPtr == 'O' ||*cPtr == 'U')
		{
			count++;
		}
		cPtr++;
	}
	return count;
}

int countConsonants(const char* cPtr)
{
	int count = 0;
	while (*cPtr != '\0')
	{

		if (!(*cPtr == 'a' || *cPtr == 'e' || *cPtr == 'i' ||
			*cPtr == 'o' || *cPtr == 'u' || *cPtr == 'A' ||
			*cPtr == 'E' || *cPtr == 'I' || *cPtr == 'O' || *cPtr == 'U') 
			&& ((*cPtr >= 'a' && *cPtr <= 'z') || (*cPtr >= 'A' && *cPtr <= 'Z')))
		{
			count++;
		}
		cPtr++;
	}
	return count;
}

void convertToUpper(char* cPtr)
{
	int count = 0;
	while (*cPtr != '\0')
	{
		*cPtr = toupper(*cPtr);
		cPtr++;
	}
	
}

void convertToLower(char* cPtr)
{
	int count = 0;
	while (*cPtr != '\0')
	{
		*cPtr = tolower(*cPtr);
		cPtr++;
	}

}