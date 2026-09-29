#include <iostream>

int main(){
    int n[3];
    int len = sizeof(n) / sizeof(n[0]);
    int greatest;
    for (int i = 0; i < len; i++){
        std::cout << "Enter your " << i + 1 << " number: ";
        while (!(std::cin >> n[i])){
            std::cout << "PLease enter an integer less than 2 billion: ";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        if (i == 0){
            greatest = n[0];
        } else {
            if (n[i] > greatest){
                greatest = n[i];
            }
        }
    }
    std::cout <<greatest << " is the greatest  number!" <<std::endl;
    return 0;
}