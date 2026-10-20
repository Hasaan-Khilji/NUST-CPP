#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    bool again = false;
    do
    {
    // Initialize variables
    int n;
    srand(time(0));
    int number = rand() % 100;
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

    cout << "\nDo you want to play again?\nType 1 or 2\n1)Yes\n2)No\n";
    cin >> n;

    switch (n)
    {
        case 1:
            again = true;
            break;
        case 2:
            again = false;
            break;
        default:
            again = false;
            cout << "Invalid input" << endl;
    }
    } while (again);
    

    return 0;
}
