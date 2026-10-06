#include <iostream>

using namespace std;

int main()
{
    // Initialize float
    float n;

    // Get input form user
    cout << "Please enter a number: ";
    cin >> n;

    // Check if it is between 1 and hundred
    cout << boolalpha;
    cout << endl << "Between 1 and 100: " << (n >= 1 && n <= 100) << endl;

    return 0;
}
