#include <iostream>

using namespace std;

int main()
{
    //Initilialize variables
    float length;
    float width;

    // Ask for input and store in variables
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    // Print area
    cout << endl << "Area of rectangle is: " << length * width <<  " sq. units" << endl;
    return 0;
}