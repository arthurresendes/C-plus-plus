#include <iostream>
using namespace std;
#include <ios>
#include <limits>

class Calculadora{
    public:
        int num;

        void calc(){
            cout << "Calculadora" << endl;
        }


        int multiplica(int x , int y){
            return x * y;
        }
};



int main(){
    Calculadora calculadora01;
    calculadora01.num = 19;
    calculadora01.calc();
    cout << calculadora01.multiplica(5,10);

    return 0;
}