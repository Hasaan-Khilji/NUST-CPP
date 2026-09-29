#include <iostream>

using namespace std;

int main()
{
    // Initialize variables
    int a;
    int b;

    // Get values from user and store them
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    // Output sum, product and difference
    cout << endl << "Sum: " << a + b << endl;
    cout << "Product: " << a * b << endl;
    cout << "Difference: " << a - b << endl;
    return 0;
}