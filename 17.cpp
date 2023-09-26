#include <iostream>
using namespace std;

int main() {
    const int NUM_STORES = 5;
    int sales[NUM_STORES];

    // Input sales for each store
    for (int store = 0; store < NUM_STORES; store++) {
        cout << "Enter today's sales for store " << store + 1 << ": ";
        cin >> sales[store];
    }

    cout << "\nSALES BAR CHART\n(Each * = $100)\n";

    // Display bar chart
    for (int store = 0; store < NUM_STORES; store++) {
        cout << "Store " << store + 1 << ": ";
        for (int i = 0; i < sales[store] / 100; i++) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}