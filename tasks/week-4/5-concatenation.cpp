#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Initialize strings
    string firstName, lastName, fullName;

    // Get first and last name from user
    cout << "Please enter first name: ";
    cin >> firstName;
    cout << "Please enter last name: ";
    cin >> lastName;

    // Make full name
    fullName = firstName + " " + lastName;

    // Display full name
    cout << endl << fullName << endl;
    cout << "Length of full name (including space): " << size(fullName) << endl;


    return 0;
}
