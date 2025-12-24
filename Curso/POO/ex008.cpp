#include <iostream>
using namespace std;


class Pessoa{
    private:
        string nome;
        string cpf;
    
    public:
        string getNome(){
            return nome;
        }

        string getCpf(){
            return cpf;
        }

        void setNome(string nome){
            this->nome = nome;
        }

        void setCpf(string cpf){
            this->cpf = cpf;
        }
    
    protected:
        void souPessoa(){
            cout << "Pessoa criada" << endl;
        }
};


class Professor: public Pessoa{
    private:
        float salario;
    
    public:
        Professor(){
            cout << "Ola eu sou professor" << endl;
        }

        Professor(string nome, string cpf,float salario){
            this->salario = salario;
            this->setCpf(cpf);
            this->setNome(nome);
        }

        float getSalario(){
            return salario;
        }

        void setSalario(float salario){
            this->salario = salario;
        }
};

int main(){
    Pessoa p1;
    Professor pro1;
    Professor pro2("Josias", "111-111-222-33", 2207.21);


    p1.setNome("Agoni");
    p1.setCpf("111-222-333-21");
    cout << "Nome p1: " << p1.getNome() << "Cpf: " << p1.getCpf() << endl;

    pro1.setNome("Alberto");
    pro1.setCpf("222-333-444-55");
    pro1.setSalario(3000.55);
    cout << "Nome pro1: " << pro1.getNome() << " Cpf: " << pro1.getCpf() << " Salario: " << pro1.getSalario() << endl;
    cout << "Nome pro2: " << pro2.getNome() << " Cpf: " << pro2.getCpf() << " Salario: " << pro2.getSalario() << endl;

    return 0;
}