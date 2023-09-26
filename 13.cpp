#include <iostream>
using namespace std;

int main() {
    int number, largest, smallest;
    bool firstNumber = true;

    cout << "Enter a series of integers, and enter -99 to end the series: ";

    while (true) {
        cin >> number;

        if (number == -99)
            break;

        if (firstNumber) {
            largest = number;
            smallest = number;
            firstNumber = false;
        } else {
            if (number > largest)
                largest = number;
            if (number < smallest)
                smallest = number;
        }
    }

    if (!firstNumber) {
        cout << "Largest number entered: " << largest << endl;
        cout << "Smallest number entered: " << smallest << endl;
    } else {
        cout << "No numbers were entered." << endl;
    }

    return 0;
}