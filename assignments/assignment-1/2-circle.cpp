#include <iostream>

using namespace std;

int main()
{
    // Initialize variables
    float radius;
    
    // Initialize pi
    const float pi = 3.14159;

    // Get radius from user and store it
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Print area and circumference
    cout << endl << "Area: " << pi * radius * radius << endl;
    cout << "Circumference: " << 2 * pi * radius << endl;

    return 0;
}
