#include <iostream>

using namespace std;

int main() {
    int n = 10;
    int numbers[n][2];

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i][0];
    }

    for (int i = 0; i < n; i++) {
        numbers[i][1] = numbers[i][0];
    }

    for (int i = 0; i < 2; i++) {
            cout << "ARRAY " << i + 1 << endl;
            for (int j = 0; j < n; j++) {
                cout << "Number " << j + 1 << ": " << numbers[j][i] << endl;
            } 
        cout << "\n\n";
    }


    return 0;
}
