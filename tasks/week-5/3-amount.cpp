#include <iostream>

using namespace std;

int main()
{
    // Initialize float
    float price;
    float quan;
    float amount;
    int discount = 0;
    float discounted;

    // Get input from user
    cout << "Please enter price: ";
    cin >> price;
    cout << "Please enter quantity: ";
    cin >> quan;

    // Calculate and apply discount
    amount = price * quan;
    if (amount >= 1000 && amount < 3000)
    {
        discount = 10;
    }
    else if (amount >= 3000 && amount < 5000)
    {
        discount  = 15;
    } else if (amount >= 5000)
    {
        discount = 20;
    }

    //Alternative way (less cmomputing power)
    if (amount >= 5000)
    {
        discount = 20;
    }
    else if (amount >= 3000)
    {
        discount = 15;
    }
    else if (amount >= 1000)
    {
        discount = 10;
    }

    discounted = amount - (amount * discount/100.0);


    // Print value
    cout << "\nAmount: " << amount << "\n";
    cout << "Discount applied : " << discount << "%\n";
    cout << "Discounted amount: " << discounted << endl; 

    return 0;
}
