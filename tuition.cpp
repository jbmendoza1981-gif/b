#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double tuition, feePercent, downPayment;
    int months;

    cout << "Enter base tuition: ";
    cin >> tuition;

    cout << "Enter processing fee percentage: ";
    cin >> feePercent;

    cout << "Enter down payment: ";
    cin >> downPayment;

    cout << "Enter number of monthly installments: ";
    cin >> months;

    double processingFee = tuition * (feePercent / 100.0);

    double adjustedTuition = tuition + processingFee;

    double balance = adjustedTuition - downPayment;

    double monthlyInstallment = balance / months;

    cout << fixed << setprecision(2);

    cout << "\nProcessing fee: " << processingFee << endl;
    cout << "Adjusted tuition: " << adjustedTuition << endl;
    cout << "Balance: " << balance << endl;
    cout << "Monthly installment: " << monthlyInstallment << endl;

    return 0;
}