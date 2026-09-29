#include <iostream>

using namespace std;

int main()
{
    //Initialize variables
    float mass;
    float volume;

    // Get mass and volume from user
    cout << "Enter mass (in kg): ";
    cin >> mass;
    cout << "Enter volume (in m^3): ";
    cin >> volume;

    // Print density
    cout << endl << "Density: " << mass / volume << " kg/m^3" << endl;

    return 0;
}
