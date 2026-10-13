#include <iostream>

using namespace std;

int main()
{
    // Initialize variables
    float a, b, c, d;
    int count;
    
    // Ask how many numbers
    cout << "How many numbers? (2, 3 or 4): ";
    cin >> count;

    // Find average based on switch
    switch (count)
    {
        case 2:
            cout << "Enter the two numbers (separated by space): ";
            cin >> a >> b;
            cout << "Average = "<< ((a + b)/count);
            break;
        case 3:
            cout << "Enter the three numbers (separated by space): ";
            cin >> a >> b >> c;
            cout << "Average = " << ((a + b + c)/count); 
            break;
        case 4:
            cout << "Enter the four numbers (separated by space): ";
            cin >> a >> b >> c >> d;
            cout << "Average = " << ((a + b + c + d)/count);
            break;
        default:
            cout << "Invalid Input";
        }

    return 0;
}