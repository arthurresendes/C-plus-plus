#include <iostream>
using namespace std;
#include <ios>
#include <limits>

class Calculadora{
    public:
        void calc(){
            cout << "Calculadora" << endl;
        }


        int soma(int x , int y){
            return x + y;
        }
        int subtracao(int x , int y){
            return x - y;
        }
        int multiplica(int x , int y){
            return x * y;
        }
        int divisao(int x , int y){
            return x / y;
        }
};



int main(){
    Calculadora calculadora01;
    calculadora01.calc();
    cout << calculadora01.soma(5,10) << endl;
    cout << calculadora01.subtracao(5,10) << endl;
    cout << calculadora01.multiplica(5,10) << endl;
    cout << calculadora01.divisao(5,10) << endl;

    return 0;
}