#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    // Get a positive integer from the user
    do {
        cout << "Enter a positive integer: ";
        cin >> number;

        if (number <= 0) {
            cout << "Please enter a positive integer." << endl;
        }
    } while (number <= 0);

    // Calculate the sum of integers from 1 to number
    for (int i = 1; i <= number; i++) {
        sum += i;
    }

    // Display the result
    cout << "The sum of integers from 1 to " << number << " is: " << sum << endl;

    return 0;
}