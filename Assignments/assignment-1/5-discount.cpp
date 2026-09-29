#include <iostream>

using namespace std;

int main()
{
    // Initialize price and quantity variables
    float price1, price2;
    float quan1, quan2;
    
    // Initialize discount percentage variables
    float disc1 = 12.5 / 100;
    float disc2 = 25.0 / 100;

    // Get prices and quantities from user and store them
    cout <<"Enter price of 1st product: ";
    cin >> price1;
    cout << "Enter quantity of 1st product: ";
    cin >> quan1;

    cout << endl <<"Enter price of 2nd product: ";
    cin >> price2;
    cout << "Enter quantity of 2nd product: ";
    cin >> quan2;

    // Calculate totals and taxes
    float total1 = price1 * quan1;
    float discount1 = total1 * disc1;

    float total2 = price2 * quan2;
    float discount2 = total2 * disc2;

    // Calculate overall total and total tax
    float Overall = total1 + total2;
    float TotalDiscount = discount1 + discount2;

    // Displaying the results

    cout << endl << "PRODUCT TOTALS" << endl;
    cout << "   WITHOUT DISCOUNT" << endl;
    cout << "       1st product: " << total1 << endl;
    cout << "       2nd product: " << total2 << endl;
    cout << "   WITH DISCOUNT" << endl;
    cout << "       1st product: " << total1 - discount1 << endl;
    cout << "       2nd product: " << total2 - discount2 << endl;

    cout << endl << "OVERALL TOTAL" << endl;
    cout << "   WITHOUT DISCOUNT: " << Overall << endl;
    cout << "   WITH DISCOUNT: " << Overall - TotalDiscount << endl;

    cout << endl << "Total discount availed: " << TotalDiscount << endl;

    return 0;
}
