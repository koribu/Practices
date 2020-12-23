

#include <iostream>

#include <ctime>

#include <fstream>
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

using namespace std;
string getDate();
string getTime();

int main()
{
    ofstream writeFile;
    ifstream openFile;

    string date, time, lastLogRec;

    time = getTime();

    cout << "This Access Date and Time: " << getDate() << " " << time<<endl<<endl;

    date = (getDate() += ".txt");
    

    openFile.open(date);
    if (openFile.fail())
    {
        cout << "This is the first access of today!"<<endl<<endl;
        
    }
    else
    {
        string inside;

        cout << "Access log:\n";
        while (openFile >> inside)
        {
            cout << inside<<endl;
            lastLogRec += "\n" + inside;
        }       
        openFile.close();
    }
    lastLogRec += "\n" + time + "\nAccess";
    writeFile.open(date);
   
    writeFile <<lastLogRec;
    writeFile.close();
}


string getDate() {

    time_t rawtime;

    struct tm* timeinfo;

    char buffer[80];
    time(&rawtime);

    timeinfo = localtime(&rawtime);

    strftime(buffer, sizeof(buffer), "%Y-%m-%d", timeinfo);

    std::string str(buffer);

    return str;

}



string getTime() {

    time_t rawtime;

    struct tm* timeinfo;

    char buffer[80];
    time(&rawtime);

    timeinfo = localtime(&rawtime);

    strftime(buffer, sizeof(buffer), " %H:%M:%S", timeinfo);

    std::string str(buffer);

    return str;

}





