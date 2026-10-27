#include <iostream>

using namespace std;

int main(){
    int n, temp, rev = 0;

    cout << "Enter Number: ";
    cin >> n;

    temp = n;
    while (temp != 0){
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }

    cout << rev << endl;

    if (n == rev) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}
