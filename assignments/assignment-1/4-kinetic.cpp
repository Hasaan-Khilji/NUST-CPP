#include <iostream>

using namespace std;

int main()
{
    // Initialize variable
    float mass;
    float velocity;

    // Get mass and velocity from user
    cout << "Enter mass (in kg): ";
    cin >> mass;
    cout << "Enter velocity (in m/s): ";
    cin >> velocity;

    // Calculate kinetic energy
    float kineticEnergy = 0.5 * mass * velocity * velocity;

    // Print the result
    cout << "Kinetic Energy: " << kineticEnergy << " J" << endl;

    return 0;
}
