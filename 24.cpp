#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile("Random.txt"); // Open the file for reading
    int number;
    int count = 0;
    int sum = 0;
    double average = 0.0;

    if (!inputFile) {
        cout << "Error opening the file." << endl;
        return 1;
    }

    while (inputFile >> number) {
        count++;
        sum += number;
    }

    inputFile.close();

    if (count > 0) {
        average = static_cast<double>(sum) / count;
    }

    cout << "Number of numbers in the file: " << count << endl;
    cout << "Sum of all the numbers: " << sum << endl;
    cout << "Average of all the numbers: " << average << endl;

    return 0;
}