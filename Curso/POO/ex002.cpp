#include <iostream>
using namespace std;
#include <ios>
#include <limits>

class Cachorro{
    public:
        string raca;
    
    Cachorro(){
        raca = "ViraLatinha";
    }
    Cachorro(string escolhauser){
        raca = escolhauser;
    }
};



int main(){
    Cachorro cachorro1;
    Cachorro cachorro2("Pitbull");

    cout << "Raca Cachorro 1: " << cachorro1.raca << endl;
    cout << "Raca Cachorro 2: " << cachorro2.raca << endl;
    



    return 0;
}