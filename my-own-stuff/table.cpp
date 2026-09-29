#include <iostream>

int main(void){
    std::cout << "Table of? ";
    int n;
    while(!(std::cin >> n)){
        std::cout << "Please enter an integer less than 2 billion: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    std::cout << "Table till? ";
    int m;
    while(!(std::cin >> m)){
        std::cout << "Please enter an integer less than 2 billion: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    for (int i = 1; i <= m; i++){
        std::cout << n << " times " << i << " = " << n * i << std::endl;
    }
    return 0;
}