#include <iostream>

using namespace std;

int main() {
    int n = 5, num, pos;
    int array[n];
    bool found = false;

    cout << "Input 10 numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "Which place number do you wnat to find? ";
    cin >> num;

    for (int i = 0; i < n; i++) {
        if (array[i] == num) {
            found = true;
            pos = i + 1;
            break;
        }
    }

    if (found) {
        cout << "Number " << num << " found at position " << pos << " (position " << pos - 1 << " if 0-indexed)." << endl;
    } else {
        cout << "Number not found";
    }
    return 0;
}
