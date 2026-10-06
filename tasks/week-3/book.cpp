#include <iostream>

using namespace std;

int main()
{
    // Initialize variables
    string name;
    string author;
    int year;
    float price;

    // Get values from user and store them
    cout << "Enter book name: ";
    getline(cin, name);
    cout << "Enter author name: ";
    getline(cin, author);
    cout << "Enter year of publication: ";
    cin >> year;
    cout << "Enter price: ";
    cin >> price;

    // Display results
    cout << endl << "Book Name: " << name << endl;
    cout << "Author Name: " << author << endl;
    cout << "Year of Publication: " << year << endl;
    cout << "Price: " << price << endl;
    return 0;
}