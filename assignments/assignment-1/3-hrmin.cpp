#include <iostream>

using namespace std;

int main()
{
    // Initialize variables
    int hours;
    int minutes;

    // Get minute from user and store them
    cout << "Enter minutes: ";
    cin >> minutes;

    // Calculate hours and minutes
    hours = minutes / 60;
    minutes = minutes % 60;

    // Print the result
    cout << hours << " hours and " << minutes << " minutes" << endl;
    
    return 0;
}