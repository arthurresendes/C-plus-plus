#include <iostream>
#include <string>

int main(){
    int idade;
    std:: string nome;

    std::cout << "Digite seu nome: ";
    std::getline(std::cin,nome);
    std::cout << "Digite sua idade: ";
    std::cin >> idade;


    std::cout << "Seu nome eh " << nome << ", e você tem " << idade << " anos.";

    return 0;
}