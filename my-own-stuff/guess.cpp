#include <iostream>

using namespace std;

int main()
{
    // Initialize variables
    int number = 41;
    int guess;
    int hp = 10;

    cout << "Enter a guess (1 to 100): ";
    cin >> guess;
    cout << "HP: " << hp;

    while (guess != number || hp == 0 )
    {
        if (guess > number)
        {
            cout << "Wrong, too High!\n";
        } else 
        {
            cout << "Wrong, Too Low!\n";
        }
        cout << "Remaining hp: " << --hp;
        cin >> guess;
    }

    if (hp == 0)
    {
        cout << "You ran out of hp :P\n";
    } else {
        cout << "\nCongrats, you guessed right!" << endl;

    }
    

    return 0;
}
