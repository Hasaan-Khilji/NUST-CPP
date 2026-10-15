#include <iostream>

using namespace std;

int main()
{
    // Initialize variables
    float sum = 0;
    int counter = 100;

    for (int counter = 0; counter < 50; counter++)
    {
        sum += counter;
        cout << sum << endl;
    }

    cout << counter;
    return 0;
}
