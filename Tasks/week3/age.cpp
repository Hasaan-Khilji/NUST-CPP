#include <iostream>

using namespace std;

int main()
{
    // Initialize variables
    int age;
    int year;

    // Ask user for age and current year and store them
    cout << "Enter your age: ";
    cin  >> age;
    cout << "Enter current year: ";
    cin >> year;

    // Tell current and next age
    cout << endl << "You are " << age << " years old in " << year << endl;
    cout << "And will be " << age + 1 << " years old in " << year + 1 << endl;
    
    return 0;    
}