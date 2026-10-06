#include <iostream>

using namespace std;

int main()
{
    // Initialize variables
    string name;
    string college;
    int marks;

    // Ask for name college and marks; and strore them in the variables
    cout << "Please eneter your name: ";
    getline(cin, name);
    cout << "Please enter your college name (Don't include \"college\"): ";
    getline(cin, college);
    cout << "Please enter your marks (obtained form total): ";
    cin >> marks;

    // Print the information
    cout << endl << "Hello, " << name << "!" << endl;
    cout << "You attended " << college << " College for intermediate" << endl;
    cout << "You obtained " << marks << " marks in intermediate" << endl;
    return 0;
}