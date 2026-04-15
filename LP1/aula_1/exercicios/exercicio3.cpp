#include <iostream>
#include <string>
using namespace std;

class Banco {
    public:
        double saldo;
        void depositar(double valor){
            if (valor>0){
                this->saldo += valor;
                cout<< "Deposito realizado"<< endl;
            }else{
                cout << "Valor impossivel de depositar" << endl;
            }
        };
        void sacar(double valor){
            if( valor > 0 && (this->saldo >=  valor)){
                this->saldo -= valor;
                cout << "Saque realizado" <<endl;
            } else if (valor> this->saldo) {
                cout << "Valor indisponivel na conta para saque, verifique seu saldo" << endl;
            } else{
                cout << "Valor impossivel de sacar"<< endl;
            }
        };
        void consultarSaldo(){
            cout << "Saldo: " << this->saldo << endl;
        };
};

int main(){

    Banco meu;
    meu.depositar(-100.00);
    meu.sacar(50.00);
    meu.sacar(-10.00);

    meu.depositar(50.00);
    meu.sacar(12.35);
    meu.consultarSaldo();

    return 0;
}