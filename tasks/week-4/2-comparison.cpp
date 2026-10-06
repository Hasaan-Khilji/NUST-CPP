#include <iostream>

using namespace std;

int main()
{
    // Initialize floats
    float n1, n2;

    // Get input from user
    cout << "Please enter first number: ";
    cin >> n1;
    cout << "PLease enter second number: ";
    cin >> n2;

    // Compare them
    cout << boolalpha;
    cout << (n1 > n2) << endl;
    cout << endl << "First is greater: " << endl;
    cout << "Second is greater: " << endl;
    cout << "They are equal: " << endl;

    return 0;
}
