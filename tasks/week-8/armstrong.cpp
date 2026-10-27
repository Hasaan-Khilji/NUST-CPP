#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, temp, digits = 0, sum = 0;

    cout << "Enter number: ";
    cin >> n;

    temp = n;
    do {
        temp /= 10;
        digits++;
    } while (temp != 0);

    temp = n;
    do {
        sum += round(pow(temp % 10, digits));
        temp /= 10;
    } while (temp != 0);

    if (sum == n) {
        cout << "It's Armstrong";
    } else {
        cout << "It's not Armstrong";
    }
    return 0;
}