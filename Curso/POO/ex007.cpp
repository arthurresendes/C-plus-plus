#include <iostream>
using namespace std;

class Usuario{
    private:
        string nome;
        string email;
    
    public:
        string getNome(){
            return nome;
        }
        string getEmail(){
            return email;
        }

        void setNome(string nome){
            this->nome = nome;
        }

        void setEmail(string email){
            this->email = email;
        }
    
    protected:
        void souUser(){
            cout << "Sou um usuario" << endl;
        }
};

class Personagem: public Usuario{
    private:
        int nivel;
    
    public:
        int getNivel(){
            return nivel;
        }

        void setNivel(int nivel){
            this->nivel = nivel;
        }

        void aumentaNivel(){
            nivel++;
        }

};

int main(){
    Usuario u1;
    Personagem p1;

    u1.setNome("Jose");
    u1.setEmail("@josias");

    p1.setNome("Arthur");
    p1.setEmail("@arthur");
    p1.setNivel(9);

    cout << "Nome user: " << u1.getNome() << endl;
    cout << "Email user: " << u1.getEmail() << endl;
    cout << "Nome personagem: " << p1.getNome() << endl;
    cout << "Email personagem: " << p1.getEmail() << endl;
    cout << "Nivel personagem: " << p1.getNivel() << endl;
    p1.aumentaNivel();
    cout << "Nivel personagem incrementado: " << p1.getNivel() << endl;
}