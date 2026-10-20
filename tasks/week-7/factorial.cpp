#include <iostream>

using namespace std;

int main()
{
    int fact = 1;
    int num;

    cout << "Factorial of: ";
    cin >> num;

    if (num > 0){
        for (int i = 1; i <= num; i++)
        {
            fact *= i;
        }
        cout << "\nFactorial is " << fact << endl;
    } else if (num == 0) {
        cout << "\nFactorial is 1" << endl;
    } else {
        cout << "Factorial of negative numbers do not exist!";
    }

    return 0;
}
