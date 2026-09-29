#include <iostream>

using namespace std;

int main()
{
    // Initialze string
    string fullName;

    // Get full name from user
    cout << "PLease enter your full name: ";
    getline(cin, fullName);

    // Display full name
    cout << endl << fullName << endl;
    cout << size(fullName);

    return 0;
}
