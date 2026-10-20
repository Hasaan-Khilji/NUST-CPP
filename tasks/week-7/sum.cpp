#include <iostream>

using namespace std;

int main()
{
    float num;
    float sum;
    int count;

    cout << "Enetr all numbers you want sum of (-1 to exit)\n";
    cin >> num;
    while (num != -1)
    {
        sum += num;
        cin >> num;
    }

    cout << "\n Sum is " << sum << endl;
    cout << "\n Number of terms were " << count << endl;

    return 0;
}
