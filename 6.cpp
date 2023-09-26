#include <iostream>
using namespace std;

int main() {
    int speed, time;

    // Get the speed from the user with input validation
    do {
        cout << "What is the speed of the vehicle in mph? ";
        cin >> speed;
        if (speed < 0) {
            cout << "Please enter a non-negative speed.\n";
        }
    } while (speed < 0);

    // Get the time traveled from the user with input validation
    do {
        cout << "How many hours has it traveled? ";
        cin >> time;
        if (time < 1) {
            cout << "Please enter a value of 1 or greater for time traveled.\n";
        }
    } while (time < 1);

    // Display the table header
    cout << "Hour\tDistance Traveled" << endl;
    cout << "-----------------------" << endl;

    // Calculate and display the distance for each hour
    for (int hour = 1; hour <= time; hour++) {
        int distance = speed * hour;
        cout << hour << "\t" << distance << endl;
    }

    return 0;
}