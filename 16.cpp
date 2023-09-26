#include <iostream>
using namespace std;

int main() {
    double annualInterestRate, startingBalance, monthlyInterestRate;
    int months;
    
    double balance, totalDeposits = 0.0, totalWithdrawals = 0.0, totalInterest = 0.0;

    cout << "Savings Account Balance Calculator\n";
    cout << "Enter the annual interest rate (in decimal form): ";
    cin >> annualInterestRate;

    cout << "Enter the starting balance: $";
    cin >> startingBalance;

    cout << "Enter the number of months: ";
    cin >> months;

    // Calculate the monthly interest rate
    monthlyInterestRate = annualInterestRate / 12.0;

    balance = startingBalance;

    for (int month = 1; month <= months; month++) {
        double deposit, withdrawal;

        cout << "\nMonth " << month << ":\n";
        
        // Deposit input validation
        do {
            cout << "Enter the amount deposited: $";
            cin >> deposit;
            if (deposit < 0) {
                cout << "Invalid input. Please enter a non-negative deposit amount.\n";
            }
        } while (deposit < 0);

        // Withdrawal input validation
        do {
            cout << "Enter the amount withdrawn: $";
            cin >> withdrawal;
            if (withdrawal < 0) {
                cout << "Invalid input. Please enter a non-negative withdrawal amount.\n";
            }
        } while (withdrawal < 0);

        // Update balance, deposits, withdrawals, and interest
        balance += deposit - withdrawal;
        totalDeposits += deposit;
        totalWithdrawals += withdrawal;
        double monthlyInterest = balance * monthlyInterestRate;
        balance += monthlyInterest;
        totalInterest += monthlyInterest;
    }

    cout << fixed 'setprecision'(2);
    cout << "\nEnding Balance: $" << balance << endl;
    cout << "Total Deposits: $" << totalDeposits << endl;
    cout << "Total Withdrawals: $" << totalWithdrawals << endl;
    cout << "Total Interest Earned: $" << totalInterest << endl;

    return 0;
}
