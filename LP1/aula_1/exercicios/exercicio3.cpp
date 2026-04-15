#include <iostream>
#include <string>
using namespace std;

class Banco {
    public:
        double saldo;
        void depositar(double valor){
            if (valor<=0){
                return;
            }
            this->saldo += valor;
        };
        void sacar(double valor){
            if( valor <= 0 && (this->saldo <  valor)){
                return;
            }
            this->saldo -= valor;
        };
        void consultarSaldo(){
            cout << "Saldo: " << this->saldo << endl;
        };
};

int main(){

    Banco meu;
    meu.depositar(100.00);
    meu.sacar(50.00);

    meu.consultarSaldo();

    return 0;
}