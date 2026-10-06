#include <iostream>

using namespace std;

int main()
{
    // Initialize variable
    float Celcius;

    // Get value from user and store it
    cout << "Enter temperature in Celcius: ";
    cin >> Celcius;

    // Print temperatue in Farenheit
    cout << "Temperature in Farenheit: " << (Celcius * 9 / 5) + 32 << endl;

    return 0;
}