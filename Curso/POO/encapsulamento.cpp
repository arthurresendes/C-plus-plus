#include <iostream>
using namespace std;
#include <ios>
#include <limits>

class Cachorro{
    private:
        string raca;
    
    public:
        Cachorro(){
            raca = "ViraLatinha";
        }
        // Getter -> Retorna
        string getNome(){
            return raca;
        }
        // Setter -> altera
        void setNome(string novaRaca){
            raca = novaRaca;
        }
};



int main(){
    Cachorro cachorro1;
    Cachorro cachorro2;

    cout << "Raca Cachorro 1: " << cachorro1.getNome() << endl;
    cachorro2.setNome("Pitbull");
    cout << "Raca Cachorro 2: " << cachorro2.getNome() << endl;
    

    return 0;
}