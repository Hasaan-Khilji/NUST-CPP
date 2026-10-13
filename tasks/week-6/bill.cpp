#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Initialize and get units form user
    float units, price, bill, final, tax;
    cout << "Number of units consumed: ";
    cin >> units;

    // Get price per unit
    if (units < 100)
    {
        price = 12;
    } else if (units <= 200)
    {
        price = 15;
    } else
    {
        price = 20;
    }

    // Calculate bill
    bill = units * price;

    // Apply tax 
    if (bill > 3000)
    {
        tax = 10.0;
    }
    else {
        tax = 0.0;
    }

    final = bill + (bill * tax / 100);

    cout << endl << fixed << setprecision(2) << setw(30) << left << "Units" << right << "Tax" << endl;
    cout << setw(30) << left << units << right << tax << '%' << endl;


    cout << endl << setw(30) << left << "Basic Bill" << right << "Final Bill" << endl;
    cout << setw(30) << left << bill << right << final << endl;

    return 0;
}