#include <iostream>
using namespace std;
#include <ios>
#include <limits>

// O this é utilizado para diferenciar nomes que são em comum, utilizando ele para refernciar o atributo da classe

class Cachorro{
    private:
        string raca;
    
    public:
        Cachorro(string raca){
            setNome(raca);
        }
        // Getter -> Retorna
        string getNome(){
            return raca;
        }
        // Setter -> altera
        void setNome(string raca){
            this-> raca = raca;
        }
};



int main(){
    Cachorro cachorro1("Vira-Lata");
    Cachorro cachorro2("Pitbull");

    cout << "Raca Cachorro 1: " << cachorro1.getNome() << endl;
    cout << "Raca Cachorro 2: " << cachorro2.getNome() << endl;
    

    return 0;
}