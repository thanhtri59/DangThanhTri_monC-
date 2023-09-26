#include <iostream>
using namespace std;

int main() {
    double budget;
    cout << "Enter your budget for the month: $";
    cin >> budget;

    double totalExpenses = 0.0;
    char addAnotherExpense;

    do {
        double expense;
        cout << "Enter an expense: $";
        cin >> expense;
        totalExpenses += expense;

        cout << "Do you want to add another expense? (Y/N): ";
        cin >> addAnotherExpense;
    } while (addAnotherExpense == 'Y' || addAnotherExpense == 'y');

    double difference = totalExpenses - budget;

    cout << fixed;
    cout.precision(2);

    if (difference > 0) {
        cout << "You are over budget by $" << difference << endl;
    } else if (difference < 0) {
        cout << "You are under budget by $" << -difference << endl;
    } else {
        cout << "You are right on budget. No overspending or underspending.\n";
    }

    return 0;
}