#include <iostream>
using namespace std;

int main() {
    int charsPerLine = 16;

    // Loop through ASCII codes 0 to 127
    for (int code = 0; code <= 127; code++) {
        // Display the character for the current code
        cout << static_cast<char>(code) << " ";

        // Start a new line after displaying 'charsPerLine' characters
        if ((code + 1) % charsPerLine == 0) {
            cout << endl;
        }
    }

    cout << endl; // Add a final newline for neatness

    return 0;
}