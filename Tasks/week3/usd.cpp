#include <iostream>

using namespace std;

int main()
{
    // Initialize variable
    float usd;

    // Get value from user and store it
    cout << "Enter amount in USD: $";
    cin >> usd;

    // Convert USD to PKR
    cout << endl << "Amount in PKR: Rs." << usd * 280 << endl;

    return 0;
}