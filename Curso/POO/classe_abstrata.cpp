#include <iostream>
using namespace std;

class Funcionario{
    virtual void nomeCargo(){};
    public:
        string nome;
        int idade;

    void setNome(string nome){
        this->nome = nome;
    }

    void setIdade(int idade){
        this->idade = idade;
    }

};

class Seguranca: public Funcionario{
    public:
        void nomeCargo(){
            cout << "Segurança " << nome << " com " << idade << " anos." << endl;
        }
};

class Medica: public Funcionario{
    public:
        void nomeCargo(){
            cout << "Medica " << nome << " com " << idade << " anos." << endl;
        }
};

int main(){
    Seguranca s;
    Medica m;

    s.setNome("Jose");
    s.setIdade(33);
    m.setNome("Alice");
    m.setIdade(22);
    s.nomeCargo();
    m.nomeCargo();


    return 0;
}