#include <iostream>
#include <vector> 

int main() {
    // Cria um vetor de inteiros
    std::vector<int> idades;

    // Adiciona elementos
    idades.push_back(25);
    idades.push_back(30);
    idades.push_back(22);


    std::cout << "Segunda idade: " << idades[1] << std::endl;

    for (int idade : idades) {
        std::cout << idade << " "; 
    }
    idades.pop_back();
    for (int idade : idades) {
        std::cout << idade << " "; 
    }
    std::cout << std::endl;

    return 0;
}