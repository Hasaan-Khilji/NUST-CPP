#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    bool again;
    do
    {
    // Initialize variables
    string n;
    int N = 3;
    srand(time(0));
    int number = rand() % 100 + 1;
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

    cout << "\nDo you want to play again?\n1)Yes\n2)No\n";
    cin >> n;
    if (n == "1" || n == "y" || n == "Y" || n == "Yes" || n == "yes"){
        N = 1;
    }
    if (n == "2" || n == "n" || n == "N" || n == "No" || n == "no"){
        N = 2;
    }

    switch (N)
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
