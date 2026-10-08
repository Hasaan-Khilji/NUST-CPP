#include <iostream>

using namespace std;

int main()
{
    /* // Initialize variable
    int n;

    // Get input form user
    cout << "Select the type of quote you want: \n1) Upbringing\n2) Motivating \n3) Depressing\n";
    cin >> n;

    // Select price using switch
    switch (n)
    {
        case 1:
            cout << "\nCarpe Diem" << endl;
            break;
        case 2:
            cout << "\nYou got this!" << endl;
            break;
        case 3:
            cout << "\nTo be or not o be, that is the question." << endl;
            break;
        default:
            cout << "\nIt's fine";
        }

    return 0; */

    // Initialize day
    int day;

    // Get input from user
    cout << "Select a day (1 to 7): ";
    cin >> day;
    cout << "\n";

    // Print day based on number
    switch (day)
    {
        case 1:
            cout << "Monday\n";
            break;
        case 2:
            cout << "Tuesday\n";
            break;
        case 3:
            cout << "Wednesday\n";
            break;
        case 4:
            cout << "Thursday\n";
            break;
        case 5:
            cout << "Friday\n";
            break;
        case 6:
            cout << "Saturday\n";
            break;
        case 7:
            cout << "Sunday\n";
            break;
        default:
            cout << "Invalid input\n";
    }
}
