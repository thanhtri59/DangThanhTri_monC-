#include <iostream>
#include <cstdlib> // For random number generation
using namespace std;

int main() {
    int choice;

    do {
        // Display menu
        cout << "Math Tutor Menu\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Validate the menu selection
        if (choice < 1 || choice > 5) {
            cout << "Invalid choice. Please select a valid option (1-5).\n";
            continue;
        }

        if (choice == 5) {
            cout << "Goodbye!\n";
            break; // Exit the program
        }

        // Generate two random numbers
        int num1 = rand() % 100 + 1;
        int num2 = rand() % 100 + 1;

        int answer;
        bool correct = false;

        // Perform the selected math operation
        switch (choice) {
            case 1: // Addition
                answer = num1 + num2;
                cout << "What is " << num1 << " + " << num2 << "? ";
                break;
            case 2: // Subtraction
                answer = num1 - num2;
                cout << "What is " << num1 << " - " << num2 << "? ";
                break;
            case 3: // Multiplication
                answer = num1 * num2;
                cout << "What is " << num1 << " * " << num2 << "? ";
                break;
            case 4: // Division
                answer = num1 / num2;
                cout << "What is " << num1 << " / " << num2 << "? ";
                break;
        }

        // Get user's answer
        int userAnswer;
        cin >> userAnswer;

        // Check if the answer is correct
        if (userAnswer == answer) {
            cout << "Congratulations! That's correct.\n";
        } else {
            cout << "Sorry, the correct answer is " << answer << ".\n";
        }
    } while (choice != 5);

    return 0;
}