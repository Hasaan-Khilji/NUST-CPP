#include <iostream>

int main(void)
{
    int a;
    int b;
    std::cout << "Enter first number: ";
    while(!(std::cin >> a))
    {
        std::cout << "Please enter a integer less than 2 billion: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    std::cout << "Enter second number: ";
    while(!(std::cin >> b))
    {
        std::cout << "Please enter a integer less than 2 billion:";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    if (a > b)
    {
        std::cout << "First no. " << a << " is GREATER than the second no. " << b << "!" << std::endl;
    } else if (a < b)
    {
        std::cout << "First no. " << a << " is LESS than the second no. " << b << "!" << std::endl;
    } else
    {
        std::cout << "They are equal!" << std::endl;
    }
    return 0;
}