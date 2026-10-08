#include <iostream>

using namespace std;

int main()
{
    // Initialize variable
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

    return 0;
}
