#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // Get number form user
    int n;
    cout << "Enter a number: ";
    cin >> n; 
    
    /* if ((n % 2) == 0)
    {
        cout << "\nNumber is even\n";
    }
    else
    {
        cout << "\nNumber is odd\n";

    } */

    (n % 2 == 0) ? cout << "\nNumber is even!\n" : cout << "\nNumber is odd\n";

    return 0;
}
