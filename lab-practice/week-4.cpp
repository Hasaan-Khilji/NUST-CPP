#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << M_PI << endl;
    cout << setw(30) << left << M_PI << right << setprecision(10) << fixed << M_PI << endl;
    cout << defaultfloat << setprecision(6) << M_PI << endl;

    return 0;
}