#include <iostream>
using namespace std;

int main() {
    int numFloors, totalRooms = 0, totalOccupied = 0;

    // Get the number of floors (with input validation)
    do {
        cout << "Enter the number of floors (excluding the 13th floor): ";
        cin >> numFloors;
        if (numFloors < 1) {
            cout << "Please enter a valid number of floors (at least 1).\n";
        }
    } while (numFloors < 1);

    // Loop through each floor and calculate occupancy
    for (int floor = 1; floor <= numFloors; floor++) {
        int numRooms, numOccupied;

        // Get the number of rooms and number of rooms occupied
        do {
            cout << "Enter the number of rooms on floor " << floor << ": ";
            cin >> numRooms;
            if (numRooms < 10) {
                cout << "Please enter at least 10 rooms for each floor.\n";
            }
        } while (numRooms < 10);

        cout << "Enter the number of rooms occupied on floor " << floor << ": ";
        cin >> numOccupied;

        // Add to the total count
        totalRooms += numRooms;
        totalOccupied += numOccupied;
    }

    // Calculate occupancy rate
    double occupancyRate = static_cast<double>(totalOccupied) / totalRooms * 100;

    // Display the results
    cout << "\nHotel Information:\n";
    cout << "Total number of rooms: " << totalRooms << endl;
    cout << "Total number of rooms occupied: " << totalOccupied << endl;
    cout << "Total number of rooms unoccupied: " << totalRooms - totalOccupied << endl;
    cout << "Occupancy rate: " << occupancyRate << "%\n";

    return 0;
}