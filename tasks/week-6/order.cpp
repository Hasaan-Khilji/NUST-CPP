#include <iostream>

using namespace std;

int main()
{
    // Initialize variables
    float n1, n2, n3;
    char choice;

    // Get input form user
    cout << "Enter three numbers separated by space: ";
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cout << "\nCHOICE?\na)Ascending\nb)Descending\nc)Exit\n";
    cin >> choice;
    
    // Find smallest middle and largest
    float large, middle, small;
    if (n1 > n2 && n1 > n3)
    {
        large = n1;
        if (n2 > n3)
        {
            small = n3;
            middle = n2;
        } else
        {
            small = n2;
            middle = n3;
        }
    } else if (n2 > n3 && n2 > n1)
    {
        large = n2;
        if (n1 > n3)
        {
            small = n3;
            middle = n1;
        } else
        {
            small = n1;
            middle = n3;
        }
    } else
    {
        large = n3;
        if (n1 > n2)
        {
            small = n2;
            middle = n1;
        } else
        {
            small = n1;
            middle = n2;
        }
    }

    // Apply switch
    switch (choice)
    {
        case 'a':
        case 'A':
            cout << small << endl << middle << endl << large << endl;
            break;
        case 'b':
        case 'B':
            cout << large << endl << middle << endl << small << endl;
            break;
        case 'c':
        case 'C':
            cout << "Exited!";
            break;
        default:
            cout << "Invalid input";
    }
    
    return 0;
}