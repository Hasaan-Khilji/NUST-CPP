#include <iostream>

using namespace std;

int main()
{
    // Initialze char
    char gender;

    // Get char from user
    cout << "F or M: ";
    cin >> gender;

    // Print result
    if ((gender == 'M') || (gender == 'm'))
    {
        cout << "\nMale" << endl;
    }
    else if ((gender == 'F') || (gender == 'f'))
    {
        cout << "\nFemale" << endl;
    }
    else 
    {
        cout << "\nInvalid input." << endl;
    }

    return 0;
}
