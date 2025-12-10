#include <iostream>

int main(){
    int num,soma =0;

    std::cout << "Digite um numero: ";
    std::cin >> num;


    for(int i = 1; i < 11; i++){
        std::cout << num << "x" << i << " = " << num * i << "\n";
        soma += num * i;
    }

    std::cout << "Soma de todas multiplicações: " << soma;

    return 0;
}