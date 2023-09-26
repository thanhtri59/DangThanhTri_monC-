#include <iostream>
using namespace std;

int main() {
    cout << "Celsius to Fahrenheit Conversion Table\n";
    cout << "-------------------------------------\n";
    
    // Display table header
    cout << "Celsius\tFahrenheit\n";
    cout << "-----------------\n";
    
    // Loop through Celsius temperatures from 0 to 20
    for (int celsius = 0; celsius <= 20; celsius++) {
        // Convert Celsius to Fahrenheit
        double fahrenheit = (celsius * 9.0 / 5.0) + 32;
        
        // Display the conversion
        cout << celsius << "\t" << fahrenheit << endl;
    }
    
    return 0;
}