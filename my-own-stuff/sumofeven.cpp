#include <iostream>

int main(void){
    int sum = 0;
    for (int i = 0, n; i < 10; i++){
        std::cout << "Input your " << i + 1 << " number: ";
        while(!(std::cin >> n)){
            std::cout << "Please enter an integer less than 2 billion: ";
            std::cin.clear();
            std::cin.ignore(10000, '\n');           
        }
        if (n % 2 == 0){
            sum += n;
        }
    }
    std::cout << "sum = " << sum << std::endl;
    return 0;
}