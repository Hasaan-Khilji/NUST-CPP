#include <iostream>

using namespace std;

int main() {
    int n = 5, temp;
    int array[n];

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    temp = array[1];
    array[1] = array[3];
    array[3] = temp;

    for (int i = 0; i < n; i++) {
        cout << "Postion " << i + 1 << ": " << array[i] << endl;
    }

    return 0;
}
