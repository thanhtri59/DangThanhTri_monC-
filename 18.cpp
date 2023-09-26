#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("People.txt");
    if (!inputFile) {
        cerr << "Error opening the file.\n";
        return 1;
    }

    int year, population;
    
    cout << "PRAIRIEVILLE POPULATION GROWTH\n(each * represents 1,000 people)\n";

    while (inputFile >> year >> population) {
        cout << year << " ";
        for (int i = 0; i < population / 1000; i++) {
            cout << '*';
        }
        cout << endl;
    }

    inputFile.close();

    return 0;
}