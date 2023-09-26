#include <iostream>
using namespace std;

int main() {
    int startingPopulation;
    double dailyIncreasePercentage;
    int numDays;

    // Get the starting population (with input validation)
    do {
        cout << "Enter the starting population (must be 2 or more): ";
        cin >> startingPopulation;
        if (startingPopulation < 2) {
            cout << "Please enter a starting population of 2 or more.\n";
        }
    } while (startingPopulation < 2);

    // Get the daily increase percentage (with input validation)
    do {
        cout << "Enter the daily population increase percentage (must be non-negative): ";
        cin >> dailyIncreasePercentage;
        if (dailyIncreasePercentage < 0) {
            cout << "Please enter a non-negative daily population increase percentage.\n";
        }
    } while (dailyIncreasePercentage < 0);

    // Get the number of days (with input validation)
    do {
        cout << "Enter the number of days (must be 1 or more): ";
        cin >> numDays;
        if (numDays < 1) {
            cout << "Please enter a number of days that is 1 or more.\n";
        }
    } while (numDays < 1);

    cout << "\nDay\tPopulation\n";
    cout << "----------------\n";

    for (int day = 1; day <= numDays; day++) {
        cout << day << "\t" << startingPopulation << endl;
        startingPopulation += (startingPopulation * dailyIncreasePercentage / 100);
    }

    return 0;
}