#include <iostream>
using namespace std;
#include <ios>
#include <limits>

class Pessoa{
    public:
        int idade;

        void grita(){
            cout << "AAAAAAAAAAAAAAAAAAA" << endl;
        }
};



int main(){
    Pessoa pessoa1;
    pessoa1.idade = 19;
    pessoa1.grita();

    return 0;
}