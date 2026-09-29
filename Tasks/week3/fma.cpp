#include <iostream>

using namespace std;

int main()
{
    // Initialize variables
    float mass;
    float acceleration;

    // Get values from user and store them
    cout << "Enter mass (in kg): ";
    cin >> mass;
    cout << "Enter acceleration (in m/s^2): ";
    cin >> acceleration;

    // Print force
    cout << "Force: " << mass * acceleration << " N" << endl;

    return 0;
}