#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Initialize variables
    float deposited, final, interest;
    char option;
    string account;

    // Ask user for Account type
    cout << "Enter account type\nS) Savings Account\nC) Current Account\nF) Fixed Deposit Account\nE) Exit\n";
    cin >> option;

    switch (option)
    {
        case 'S':
        case 's':
            account = "Savings Account";
            interest = 5.0;
            break;
        case 'C':
        case 'c':
            account = "Current Account";
            interest = 0.0;
            break;
        case 'F':
        case 'f':
            account = "Fixed Deposit Account";
            interest = 10.0;
            break;
        case 'E':
        case 'e':
            cout << "Exited!";
            return 0;
        default:
            cout << "Invalid input";
    }

    // Ask for deposit
    cout << "Deposited amount: ";
    cin >> deposited;

    if (deposited >= 100000)
    {
        if (interest == 5.0 || interest == 10.0)
        {
            interest += 1; 
        }
    }

    // Caculate final amount
    final = deposited + (deposited * interest / 100);


    cout << endl << setw(30) << left << "Account Type" << right << "Interest" << endl;
    cout << setw(30) << left << account << right << interest << '%' << endl;


    cout << endl << setw(30) << left << "Deposited Amount" << right << "Final Amount" << endl;
    cout << setw(30) << left << deposited << right << final << endl;

    return 0;
}