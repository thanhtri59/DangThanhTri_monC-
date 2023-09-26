#include <iostream>
using namespace std;

int main() {
    const double initialFee = 2500.0; // Initial membership fee
    const double annualIncrease = 0.04; // 4% annual increase

    double currentFee = initialFee;

    cout << "Year\tMembership Fee" << endl;
    cout << "-------------------" << endl;

    for (int year = 1; year <= 6; year++) {
        cout << year << "\t$" << currentFee << endl;
        currentFee += currentFee * annualIncrease; // Calculate the new fee for the next year
    }

    return 0;
}
