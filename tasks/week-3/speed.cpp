#include <iostream>

using namespace std;

int main()
{
    // Initialize variables
    float distance;
    float time;

    // Get values from user and store them
    cout << "Enter distance (in meters): ";
    cin >> distance;
    cout << "Enter time (in seconds): ";
    cin >> time;

    // Calculate speed
    float speed = distance / time;

    // Display result
    cout << "Speed: " << speed << " m/s" << endl;

    return 0;
}