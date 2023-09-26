#include <iostream>
#include <string>
using namespace std;

int main() {
    int numStudents;

    // Input validation for the number of students
    do {
        cout << "Enter the number of students in the class (1-25): ";
        cin >> numStudents;
    } while (numStudents < 1 || numStudents > 25);

    cin.ignore(); // Clear the newline character from the input buffer

    string firstName, firstStudent, lastStudent;

    // Loop to read names and find first and last students
    for (int i = 1; i <= numStudents; i++) {
        cout << "Enter the name of student #" << i << ": ";
        getline(cin, firstName);

        if (i == 1) {
            firstStudent = firstName;
            lastStudent = firstName;
        } else {
            if (firstName < firstStudent)
                firstStudent = firstName;
            if (firstName > lastStudent)
                lastStudent = firstName;
        }
    }

    cout << "The student at the front of the line is: " << firstStudent << endl;
    cout << "The student at the end of the line is: " << lastStudent << endl;

    return 0;
}