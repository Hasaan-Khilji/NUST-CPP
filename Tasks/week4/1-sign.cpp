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
    if (n > 0)
    {
        cout << n << " is positive" << endl;
    }
    else if (n < 0)
    {
        cout << n << " is negative" << endl;
    }
    else
    {
        cout << "it's zero!" << endl;
    }

    return 0;
}
