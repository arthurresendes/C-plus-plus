#include <iostream>
using namespace std;


class Idioma{
    public:
        void saudar(){}
};

class Portugues: public Idioma{
    public:
        void saudar(){
            cout << "Ola" << endl;
        }
};

class Ingles: public Idioma{
    public:
        void saudar(){
            cout << "Hello Brother" << endl;
        }
};
class Espanhol: public Idioma{
    public:
        void saudar(){
            cout << "Hola" << endl;
        }
};

int main(){
    Idioma i1;
    Portugues p1;
    Ingles i2;
    Espanhol e1;

    i1.saudar();
    p1.saudar();
    i2.saudar();
    e1.saudar();
    return 0;
}