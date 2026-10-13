#include <iostream>
#include <string>
#include <random>

using namespace std;

int main()
{
    random_device rd;

    mt19937 gen(rd());

    uniform_int_distribution<> distr(1,3);
    
    int opp = distr(gen);

    string pick;
    int picknum;
    cout << "Rock, Papers, Scissors, Shoot!\n";
    cin >> pick;
    if (pick == "R" || pick == "r" || pick == "1" || pick == "rock" || pick == "Rock" || pick == "ROCK")
    {
        picknum = 1;
    } else if (pick == "P" || pick == "p" || pick == "2" || pick == "paper" || pick == "Paper" || pick == "PAPER")
    {
        picknum = 2;
    } else if (pick == "S" || pick == "s" || pick == "3" || pick == "scissors" || pick == "Scissors" || pick == "SCISSORS")
    {
        picknum = 3;
    }

    if (picknum == opp)
    {
        cout << "Tie" << endl;
    } else if ((opp == 1 && picknum == 2) || (opp == 2 && picknum == 3) || (opp == 3 && picknum == 1))
    {
        cout << "You Won!";
    } else if ((opp == 1 && picknum == 3) || (opp == 2 && picknum == 1) || (opp == 3 && picknum == 2))
    {
        cout << "You lost";
    }

    return 0;
}