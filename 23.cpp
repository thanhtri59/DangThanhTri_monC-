#include <iostream>

using namespace std;

int main() {
    int n = 10; // Number of rows for both patterns

    // Pattern A
    cout << "Pattern A" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "+";
        }
        cout << endl;
    }

    // Pattern B
    cout << "Pattern B" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}