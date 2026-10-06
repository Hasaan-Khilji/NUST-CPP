#include <iostream>

using namespace std;

int main()
{
    //initializing vriable
    float joule;

    // Get energy in joules from user and store it
    cout << "Enter energy in joules: ";
    cin >> joule;

    // Print energy in electron volts
    cout << endl << "Energy in electron volts: " << joule * 6.242e18 << " eV" << endl;

    return 0;
}
