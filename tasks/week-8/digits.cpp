#include <iostream>

using namespace std;

int main(){
    int n1, n2, count1 = 0, count2 = 0, temp;

    cout << "Input numbers: ";
    cin >> n1 >> n2;

    temp = n1;
    do{
        temp /= 10;
        count1++;
    } while (temp != 0);

    temp = n2;
    do{
        temp /= 10;
        count2++;
    } while (temp != 0);

    cout << count1 << endl << count2<< endl;

    if (count1 > count2){
        cout << "\nFirst number " << n1 << " has more digits!" << endl;
    } else if (count1 < count2){
        cout << "\nSecond number " << n2 << " has more digits!" << endl;
    } else {
        cout << "\nBoth have equal digits" << endl;
    }
    return 0;
}
