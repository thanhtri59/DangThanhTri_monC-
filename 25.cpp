#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ifstream inputFile("LineUp.txt"); // Open the file for reading
    vector<string> names;

    if (!inputFile) {
        cout << "Error opening the file." << endl;
        return 1;
    }

    string name;
    while (getline(inputFile, name)) {
        names.push_back(name);
    }

    inputFile.close();

    cout << "List of students in the line up:" << endl;
    for (const string& student : names) {
        cout << student << endl;
    }

    return 0;
}
