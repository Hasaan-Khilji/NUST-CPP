#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Initialize strings
    string pass;
    string confirm;
    string access;

    // Get inpout from users
    cout << "Enter Password: ";
    cin >> pass;
    cout << "Confirm Password: ";
    cin >> confirm;

    // Check passwords
    if ((pass.length() == confirm.length()) && (!pass.compare(confirm)))
    {
        access = "ACCESS GRANTED!";
    }
    else
    {
        access = "ACCESS DENIED!";
    }

    // With ternary
    access = ((pass.length() == confirm.length()) && (!pass.compare(confirm))) ? "ACCESS GRANTED!" : "ACCESS DENIED!";


    // Print access value
    cout << access << endl;
    return 0;
}
