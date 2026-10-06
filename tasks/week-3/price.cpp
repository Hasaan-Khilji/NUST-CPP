#include <iostream>

using namespace std;

int main()
{
    // Initialize variables
    float price1;
    float price2;
    float price3;

    // Get values from user and store them
    cout << "Enter first price: ";
    cin >> price1;
    cout << "Enter second price: ";
    cin >> price2;
    cout << "Enter third price: ";
    cin >> price3;

    // Calculate total price
    float totalPrice = price1 + price2 + price3;

    // Display result
    cout << endl << "Total price: " << totalPrice << endl;

    return 0;
}