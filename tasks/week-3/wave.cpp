#include <iostream>

using namespace std;

int main()
{
    // initialize variables
    float frequency;
    float wavelength;

    // Get values from user
    cout << "Enter frequency (in Hz): ";
    cin >> frequency;
    cout << "Enter wavelength (in m): ";
    cin >> wavelength;

    // Print wave speed
    cout << endl << "Wave speed: " << frequency * wavelength << " m/s" << endl;

    return 0;
}
