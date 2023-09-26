#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numDays;

    // Get the number of days from the user with input validation
    do {
        cout << "Enter the number of days worked (must be 1 or more): ";
        cin >> numDays;
        if (numDays < 1) {
            cout << "Please enter a valid number of days.\n";
        }
    } while (numDays < 1);

    double totalPay = 0.0; // Total earnings
    double dailyPay = 0.01; // Initial daily salary

    // Display the table header
    cout << setw(5) << "Day" << setw(18) << "Salary (in dollars)" << endl;
    cout << "------------------------" << endl;

    // Calculate and display daily salary and accumulate total earnings
    for (int day = 1; day <= numDays; day++) {
        cout << setw(5) << day << setw(18) << fixed << setprecision(2) << dailyPay << endl;
        totalPay += dailyPay;
        dailyPay *= 2; // Double the daily salary for the next day
    }

    // Display the total pay at the end of the period
    cout << "\nTotal earnings over " << numDays << " days: $" << totalPay << endl;

    return 0;
}