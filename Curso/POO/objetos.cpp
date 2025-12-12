#include <iostream>
using namespace std;


class Pessoa {
public:
    string nome;
    int idade;

    void informacoes(){
        cout << "Nome: " << nome << endl << "Idade: " << idade << " anos";
    };
};

int main(){

    Pessoa pessoa1;
    pessoa1.nome = "Arthur Resende";
    pessoa1.idade = 19;
    pessoa1.informacoes();
    return 0;
}