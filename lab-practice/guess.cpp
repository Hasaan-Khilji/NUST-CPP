#include <iostream>

using namespace std;

int main()
{
    // Initialize variables
    int number = 41;
    int guess;
    int hp = 10;

    cout << "HP: " << hp;
    cout << "\nEnter a guess (1 to 100): ";
    cin >> guess;

    while (guess != number)
    {
        if (guess > number)
        {
            cout << "\nWrong, too High!\n";
        } else 
        {
            cout << "\nWrong, Too Low!\n";
        }
        cout << "Remaining hp: " << --hp << endl;
        if (hp == 0)
        {
            break;
        }
        cout << "Try Again: ";
        cin >> guess;
    }

    if (hp == 0)
    {
        cout << "\nYou ran out of hp :P\n";
    } else {
        cout << "\nCongrats, you guessed right!" << endl;

    }
    

    return 0;
}
