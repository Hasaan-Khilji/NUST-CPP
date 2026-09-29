#include <iostream>

using namespace std;

int main()
{
    // Initialize a float
    float n;

    // Get input form user
    cout << "Please enter a number: ";
    cin >> n;

    // Check the sign of number
    cout << boolalpha;
    cout << endl << n << " is positive: " << ( n > 0 ) << endl;
    cout << n << " is negative: "<< ( n < 0 ) << endl;
    cout << "It's zero: " << ( n == 0) << endl;

    return 0;
}
