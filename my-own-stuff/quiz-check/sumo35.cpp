#include <iostream>

using namespace std;

int main(){
    int number, count3 = 0, count5 = 0, sum = 0;
    const int inputs = 50;

    for( int i = 1; i <= inputs; i++ ){
        cout << "Enter (" << i << ") number: ";
        cin >> number;
        if ( number % 3 ==  0 || number % 5 == 0 ){
            sum += number;
            if ( number % 3 == 0 ) { count3++; }
            if ( number % 5 == 0 ) { count5++; }
        }
    }

    cout << "\nSum: " << sum << endl;
    cout << "\nMultiples of 3: " << count3 << endl;
    cout << "\nMultiples of 5: " << count5 << endl; 
}
