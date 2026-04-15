#include <iostream>
#include <string.h>
using namespace std;

class Retangulo{
    public:
        float largura, altura;

        float calcularArea(){
            return this->largura * this->altura;
        };
}; 

int main(){

    Retangulo ret;
    ret.largura = 8.5;
    ret.altura = 10.2;

   cout << ret.calcularArea();

    return 0;
}