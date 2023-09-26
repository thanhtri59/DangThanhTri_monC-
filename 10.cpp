#include <iostream>
using namespace std;

int main() {
    int numYears;
    double totalRainfall = 0.0;

    // Get the number of years (with input validation)
    do {
        cout << "Enter the number of years: ";
        cin >> numYears;
        if (numYears < 1) {
            cout << "Please enter a valid number of years (at least 1).\n";
        }
    } while (numYears < 1);

    for (int year = 1; year <= numYears; year++) {
        for (int month = 1; month <= 12; month++) {
            double monthlyRainfall;

            // Get the monthly rainfall (with input validation)
            do {
                cout << "Enter the inches of rainfall for Year " << year << ", Month " << month << ": ";
                cin >> monthlyRainfall;
                if (monthlyRainfall < 0) {
                    cout << "Please enter a non-negative value for monthly rainfall.\n";
                }
            } while (monthlyRainfall < 0);

            totalRainfall += monthlyRainfall;
        }
    }

    int numMonths = numYears * 12;
    double averageRainfall = totalRainfall / numMonths;

    cout << "\nTotal number of months: " << numMonths << endl;
    cout << "Total inches of rainfall: " << totalRainfall << " inches" << endl;
    cout << "Average rainfall per month: " << averageRainfall << " inches" << endl;

    return 0;
}