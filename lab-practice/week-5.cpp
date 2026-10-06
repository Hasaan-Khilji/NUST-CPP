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
    
    if ((n % 2) == 0)
    {
        cout << endl << "Number is even" << endl;
    }
    else
    {
        cout << endl << "Number is odd" << endl;

    }

    return 0;
}
