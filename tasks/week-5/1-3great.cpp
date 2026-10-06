#include <iostream>

using namespace std;

int main()
{
    // Initialize floats
    float n1, n2, n3;

    // Get numbers from user
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << "Enter third number: ";
    cin >> n3;

    // chcek greatest
    if (n1 > n2 and n1 > n3)
    {
        cout << "\n" << n1 << " is greatest" << endl;
    }
    else if (n2 > n3)
    {
        cout << "\n" << n2 << " is greatest" << endl;
    }
    else 
    {
        cout << "\n" << n3 << " is greatest" << endl;
    }
    
    return 0;
}
