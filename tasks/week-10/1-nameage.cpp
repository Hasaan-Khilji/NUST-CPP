#include <iostream>

using namespace std;

int main() {

    // Initialize arrays
    int ages[5];
    string names[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name of person " << i + 1 << ": ";
        getline(cin, names[i]);
        
        cout << "Enter age of person " << i + 1 << ": ";
        cin >> ages[i];

        // cin.clear();
        cin.ignore(1000, '\n');

    }

    for (int i = 0; i < 5; i++)
    {
        cout << endl << endl << "PERSON " << i + 1 << ": " << endl;
        cout << "Name: " << names[i] << endl;
        cout << "Age: " << ages[i]; 
    }

    return 0;
}
