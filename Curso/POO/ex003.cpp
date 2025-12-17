#include <iostream>
using namespace std;
#include <ios>
#include <limits>

class Pessoa{
    public:
    string nome;
    int idade;
    float salario;

    void imprime(){
        cout << nome << ", " << idade << " anos" << ", Salario: " << salario;
    }

};



int main(){
    Pessoa pessoa1;
    pessoa1.nome = "Arthur";
    pessoa1.idade = 19;
    pessoa1.salario = 5500.55;
    pessoa1.imprime();

    return 0;
}