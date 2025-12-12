#include <iostream>
using namespace std;


class Pessoa {
public:
    string nome;
    int idade;
};

int main(){

    Pessoa pessoa1;
    pessoa1.nome = "Arthur Resende";
    pessoa1.idade = 19;
    cout << "Nome: " << pessoa1.nome << endl << "Idade: " << pessoa1.idade << " anos";
    return 0;
}