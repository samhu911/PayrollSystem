#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
int main()
{
    ifstream inputFile;

    inputFile.open("Random.txt");

    if (inputFile.fail())
    {
        cout << "Error opening the file." << endl;
    }
    else
    {

        
    }

    system("pause");
    return 0;
}