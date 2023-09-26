#include <iostream>
using namespace std;

int main() {
    const double risePerYear = 1.5; // Ocean rise rate in millimeters per year
    int years = 25; // Number of years to display

    cout << "Year\tMillimeters Risen" << endl;
    cout << "-------------------------" << endl;

    for (int year = 1; year <= years; year++) {
        double totalRise = risePerYear * year;
        cout << year << "\t" << totalRise << " mm" << endl;
    }

    return 0;
}