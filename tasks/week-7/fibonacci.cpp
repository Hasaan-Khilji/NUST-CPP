#include <iostream>

using namespace std;

int main()
{
    int n;
    int a = 0;
    int b = 1;
    int temp;

    cout << "How many terms? ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << a + b << endl;
        temp = a;
        a = b;
        b = temp + b;
    }
    return 0;
}
