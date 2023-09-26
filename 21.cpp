#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Random Number Guessing Game!" << endl;

    do {
        cout << "Guess the number (between 1 and 100): ";
        cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            cout << "Too low, try again." << endl;
        } else if (guess > randomNumber) {
            cout << "Too high, try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << randomNumber << " in " << attempts << " attempts." << endl;
        }
    } while (guess != randomNumber);

    return 0;
}