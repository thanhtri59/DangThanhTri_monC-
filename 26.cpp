#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outputFile("SavingsAccountReport.txt"); // Open the file for writing

    if (!outputFile) {
        cout << "Error opening the file for writing." << endl;
        return 1;
    }

    double annualInterestRate, startingBalance;
    int numMonths;

    cout << "Enter the annual interest rate: ";
    cin >> annualInterestRate;
    cout << "Enter the starting balance: ";
    cin >> startingBalance;
    cout << "Enter the number of months: ";
    cin >> numMonths;

    double balance = startingBalance;
    double totalDeposits = 0.0;
    double totalWithdrawals = 0.0;
    double totalInterest = 0.0;

    for (int month = 1; month <= numMonths; month++) {
        double deposits, withdrawals;

        cout << "Month " << month << ":" << endl;
        cout << "Enter the amount deposited: ";
        cin >> deposits;
        cout << "Enter the amount withdrawn: ";
        cin >> withdrawals;

        balance += deposits - withdrawals;
        totalDeposits += deposits;
        totalWithdrawals += withdrawals;
        totalInterest += balance * (annualInterestRate / 12 / 100);

        outputFile << "Month " << month << " - ";
        outputFile << "Balance: $" << balance << ", ";
        outputFile << "Total Deposits: $" << totalDeposits << ", ";
        outputFile << "Total Withdrawals: $" << totalWithdrawals << ", ";
        outputFile << "Total Interest: $" << totalInterest << endl;
    }

    outputFile.close();
    cout << "Report has been written to SavingsAccountReport.txt." << endl;

    return 0;
}