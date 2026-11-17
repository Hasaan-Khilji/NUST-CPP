#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Size of Arary: ";
    cin >> size;

    int num1[size];
    int num2[size];
    int sum[size];

    for (int i = 0; i < size; i++) {
        cout << "Number " << i + 1 << " for Array 1: ";
        cin >> num1[i];
        cout << "Number " << i + 1 << " for Array 2: ";
        cin >> num2[i];
    }
    cout << '\n';
    for (int i = 0; i < size; i++) {
        sum[i] = num1[i] + num2[i];
        cout << "Sum of " << num1[i] << " and " << num2[i] << " is: " << sum[i] << endl;
    }

    return 0;
}