#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int employeeNumber;
    double grossPay, stateTax, federalTax, ficaWithholdings;
    
    double totalGrossPay = 0.0, totalStateTax = 0.0, totalFederalTax = 0.0, totalFicaWithholdings = 0.0, totalNetPay = 0.0;

    cout << "Payroll Report\n";
    cout << "Enter employee data (or 0 to quit).\n";

    while (true) {
        cout << "Employee Number (0 to quit): ";
        cin >> employeeNumber;

        if (employeeNumber == 0) {
            break;
        }

        // Input validation for negative numbers
        if (employeeNumber < 0) {
            cout << "Invalid employee number. Please enter a positive number.\n";
            continue;
        }

        cout << "Gross Pay: $";
        cin >> grossPay;
        
        cout << "State Tax: $";
        cin >> stateTax;
        
        cout << "Federal Tax: $";
        cin >> federalTax;
        
        cout << "FICA Withholdings: $";
        cin >> ficaWithholdings;

        // Input validation for withholdings exceeding gross pay
        if (stateTax + federalTax + ficaWithholdings > grossPay) {
            cout << "Error: Withholdings cannot exceed Gross Pay. Please re-enter data for employee #" << employeeNumber << endl;
            continue;
        }

        // Update total values
        totalGrossPay += grossPay;
        totalStateTax += stateTax;
        totalFederalTax += federalTax;
        totalFicaWithholdings += ficaWithholdings;
        totalNetPay += (grossPay - stateTax - federalTax - ficaWithholdings);
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "Total Gross Pay: $" << totalGrossPay << endl;
    cout << "Total State Tax: $" << totalStateTax << endl;
    cout << "Total Federal Tax: $" << totalFederalTax << endl;
    cout << "Total FICA Withholdings: $" << totalFicaWithholdings << endl;
    cout << "Total Net Pay: $" << totalNetPay << endl;

    return 0;
}