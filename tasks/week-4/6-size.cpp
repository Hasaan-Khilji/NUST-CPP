#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Initialize string
    string sentence;

    // Get sentence from user
    cout << "Enter sentence: ";
    getline(cin, sentence);

    // Display number of characters
    cout << "Number of characters: " << size(sentence);

    return 0;
}
