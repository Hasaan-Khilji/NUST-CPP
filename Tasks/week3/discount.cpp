#include <iostream>

using namespace std;

int main ()
{
    // Initialize variables
    int quantity;
    float price;

    // Get values from user and store them
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter quantity: ";
    cin >> quantity;

    // Calculate total price discount and discounted price
    float totalPrice = quantity * price;
    float totalDiscount = totalPrice * 0.1;
    float discountedPrice = totalPrice - totalDiscount;

    // Display results
    cout << endl << "Total Price: " << totalPrice << endl;
    cout << "Total Discount: " << totalDiscount << endl;
    cout << "Discounted Price: " << discountedPrice << endl;

    return 0;
}