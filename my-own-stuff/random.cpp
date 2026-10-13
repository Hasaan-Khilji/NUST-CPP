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
    cout << "Rock, Papers, Scissors, Shoot!";
    cin >> pick;
    if (pick == "rock" || pick == "Rock" || pick == "ROCK")
    {
        picknum = 1;
    } else if (pick == "paper" || pick == "Paper" || pick == "PAPER")
    {
        picknum = 2;
    } else if (pick == "scissors" || pick == "Scissors" || pick == "SCISSORS")
    {
        picknum = 3;
    }

    if (picknum == 1)
    {
        
    }

    return 0;
}