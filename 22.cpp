#include <iostream>

using namespace std;

int main() {
    int sideLength;

    cout << "Enter a positive integer no greater than 15: ";
    cin >> sideLength;

    if (sideLength < 1 || sideLength > 15) {
        cout << "Invalid input. Please enter a positive integer between 1 and 15." << endl;
        return 1;
    }

    for (int i = 0; i < sideLength; i++) {
        for (int j = 0; j < sideLength; j++) {
            cout << "X";
        }
        cout << endl;
    }

    return 0;
}