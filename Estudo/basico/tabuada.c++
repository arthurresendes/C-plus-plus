#include <iostream>

int main(){
    int num;

    std::cout << "Digite um numero: ";
    std::cin >> num;


    for(int i = 1; i < 11; i++){
        std::cout << num << "x" << i << " = " << num * i << "\n";
    }

    return 0;
}