#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Iitialize strings    
    string s1, s2;

    // Get strings from user
    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);

    // Tell if equal or not
    cout << boolalpha << endl;
    cout << "String are equal: " << !(s1.compare(s2)) << endl;

    return 0;
}
