#include <iostream>
#include <string>
using namespace std;

class ContaBancaria
{
public:
    int numero;
    string titular;
    double saldo;

    void depositar(double valor)
    {
        saldo = saldo + valor;
    }
    void sacar(double valor)
    {
        if (valor <= saldo)
        {
            saldo = saldo - valor;
        }
        else
        {
            cout << "Saldo insuficiente!" << endl;
        }
    }

    void consultarSaldo()
    {
        cout << "Saldo: R$ " << saldo << endl;
    }

    void exibirExtrato()
    {
        cout << "--- DADOS DA CONTA ---" << endl;
        cout << "Numero: " << numero << endl;
        cout << "Titular: " << titular << endl;
        cout << "Saldo Atual: R$ " << saldo << endl;
        cout << "----------------------" << endl;
    }
};

int main()
{
    ContaBancaria conta1;
    conta1.numero = 101;
    conta1.titular = "Alice";
    conta1.saldo = 500.0;

    ContaBancaria conta2;
    conta2.numero = 202;
    conta2.titular = "Bob";
    conta2.saldo = 1000.0;

    conta1.depositar(200.0);
    conta1.sacar(50.0);
    conta1.depositar(100.0);

    conta2.sacar(150.0);
    conta2.depositar(500.0);
    conta2.sacar(200.0);

    conta1.exibirExtrato();
    conta2.exibirExtrato();

    return 0;
}