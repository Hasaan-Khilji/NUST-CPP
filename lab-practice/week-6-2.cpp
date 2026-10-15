#include <iostream>

using namespace std;

int main()
{
    // Initialize variables
    float sum = 0;
    int limit;

    cout << "How many numbers? ";
    cin >> limit;

    cout << "\nEnter " << limit << " numbers to add:\n"; 


    int num;
    // int counter = 0;
    // while (counter < limit)
    // {
    //     cin >> num;
    //     sum += num;
    //     counter++;
    // }

    for (int i = 0; i < limit; i++)
    {
        cin >> num;
        sum += num;
    }

    cout << endl << "The sum of the " << limit << " numbers you entered is: "<< sum << endl;

    return 0;
}
