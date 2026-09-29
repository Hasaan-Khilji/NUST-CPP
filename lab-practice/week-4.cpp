#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << M_PI << endl;
    cout << fixed << setprecision(5) << M_PI << endl;
    cout << defaultfloat << setprecision(6) << M_PI << endl;

    return 0;
}