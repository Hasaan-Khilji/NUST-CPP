#include <iostream>

using namespace std;

int main()
{
    // Initialize price and quantity variables
    float price1, price2, price3;
    float quan1, quan2, quan3;
    
    // Initialize gst percentage variables
    float gst1 = 13.0 / 100;
    float gst2 = 18.0 / 100;
    float gst3 = 25.0 / 100;

    // Get prices and quantities from user and store them
    cout <<"Enter price of 1st product: ";
    cin >> price1;
    cout << "Enter quantity of 1st product: ";
    cin >> quan1;

    cout << endl <<"Enter price of 2nd product: ";
    cin >> price2;
    cout << "Enter quantity of 2nd product: ";
    cin >> quan2;

    cout << endl <<"Enter price of 3rd product: ";
    cin >> price3;
    cout << "Enter quantity of 3rd product: ";
    cin >> quan3;

    // Calculate totals and taxes
    float total1 = price1 * quan1;
    float tax1 = total1 * gst1;

    float total2 = price2 * quan2;
    float tax2 = total2 * gst2;

    float total3 = price3 * quan3;
    float tax3 = total3 * gst3;

    // Calculate overall total and total tax
    float Overall = total1 + total2 + total3;
    float TotalTax = tax1 + tax2 + tax3;

    // Displaying the results

    cout << endl << "PRODUCT TOTALS" << endl;
    cout << "   WITHOUT GST" << endl;
    cout << "       1st product: " << total1 << endl;
    cout << "       2nd product: " << total2 << endl;
    cout << "       3rd product: " << total3 << endl;
    cout << "   WITH GST" << endl;
    cout << "       1st product: " << total1 + tax1 << endl;
    cout << "       2nd product: " << total2 + tax2 << endl;
    cout << "       3rd product: " << total3 + tax3 << endl;

    cout << endl << "OVERALL TOTAL" << endl;
    cout << "   WITHOUT GST: " << Overall << endl;
    cout << "   WITH GST: " << Overall + TotalTax << endl;

    cout << endl << "Total tax paid: " << TotalTax << endl;

    return 0;
}
