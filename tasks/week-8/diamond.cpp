#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter height of diamond (odd): ";
    cin >> n;

    int spaces = n/2, stars = 1;

    if (n % 2 == 0) {
        cout << "Invalid Input";
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (i < n/2 + 1) {
            for (int j = 0; j < spaces; j++) {
                cout << " ";
            }

            for (int j = 0; j < stars; j++) {
                cout << '*';
            }

            cout << '\n';

            stars+= 2;
            spaces--;
        } else {
            for (int j = 0; j < spaces; j++) {
                cout << " ";
            }

            for (int j = 0; j < stars; j++) {
                cout << '*';
            }

            cout << '\n';

            stars -= 2;
            spaces++;
        }
    }

    return 0;
}
