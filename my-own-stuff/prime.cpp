#include <iostream>

using namespace std;

int main()
{
    // int n;
    // int count = 0;

    // cout << "How many primes?" << endl;
    // cin >> n;

    // bool prime = true;

    // for (int i = 2; count < n; i++)
    // {
    //     prime = true;
    //     for (int j = 2; j < i/2; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //              prime = false;
    //             break;
    //         }
    //     }
    //     if (prime) {
    //         cout << i << " ";
    //         count ++;
    //     }
    // }

    long long n = 9223372036854775807;

    bool prime = true;

    for (int i = 0; i < n/2; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime)
    {
        cout << "Prime";

    }
    else{
        cout << "not prime";
    }
    

    return 0;
}
