#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Circulo{
    public:
        double raio;

        double calcularArea(){
            double area = M_PI * (this->raio * this->raio);
            return area;
        }

        double calcularCircunferencia(){
            double circunferencia = this->raio * M_PI * 2;
            return circunferencia;
        }

        bool ehMaiorQue(Circulo * outro){
            if(this->raio > outro->raio){
                return true;
            }else{
                return false;
            }
        }

        void exibirInfo() {
        cout << "--- Informacoes do Circulo ---" << endl;
        cout << "Raio: " << this->raio << endl;
        cout << "Area: " << this->calcularArea() << endl;
        cout << "Circunferencia: " << this->calcularCircunferencia() << endl;
        cout << "----------------------------" << endl;
    }
};

int main() {
    Circulo c1;
    c1.raio = 5.0;

    Circulo c2;
    c2.raio = 3.5;

    c1.exibirInfo();
    c2.exibirInfo();

    if (c1.ehMaiorQue(&c2)) {
        cout << "O Circulo 1 e maior que o Circulo 2." << endl;
    } else {
        cout << "O Circulo 1 NAO e maior que o Circulo 2." << endl;
    }

    return 0;
}