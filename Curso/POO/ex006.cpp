#include <iostream>
using namespace std;

class Animal{
    private:
        string terreno;
    public:
        string getTerreno(){
            return terreno;
        }
        void setTerreno(string terreno){
            this->terreno = terreno;
        }
    protected:
        void souAnimal(){
            cout << "Sou um animal" << endl;
        }
};

class Mamifero: public Animal{
    private:
        int messegestacaoMes;
    
    public:
        Mamifero(){
            souAnimal();
        }

        int getMessegestacao(){
            return messegestacaoMes;
        }
        void setMessegestacao(int messegestacaoMes){
            this->messegestacaoMes = messegestacaoMes;
        }
    protected:
        void souMamifero(){
            cout << "Sou um mamifero" << endl;
        }
};

class Cachorro: public Mamifero{
    private:
        string raca;
    
    public:
        Cachorro(){
            souMamifero();
            cout << "Eu sei latir, AU AU AU" << endl;
        }

        string getRaca(){
            return raca;
        }
        void setRaca(string raca){
            this->raca = raca;
        }
};

int main(){
    Animal an1;
    Mamifero mam1;
    Cachorro cacho1;

    an1.setTerreno("Terrestre");
    mam1.setTerreno("Aquatico");
    cacho1.setTerreno("Terrestre");

    cout << "Terreno Animal: " << an1.getTerreno() << endl;
    cout << "Terreno Mamifero: " << mam1.getTerreno() << endl;
    cout << "Terreno Cachorro: " << mam1.getTerreno() << endl;

    mam1.setMessegestacao(9);
    cacho1.setMessegestacao(2);
    cout << "Messegestação Mamifero: " << mam1.getMessegestacao() << endl;
    cout << "Messegestação Cachorro: " << cacho1.getMessegestacao() << endl;

    cacho1.setRaca("Pitbull");
    cout << "Raça do cachorro: " << cacho1.getRaca() << endl;

    return 0;
}