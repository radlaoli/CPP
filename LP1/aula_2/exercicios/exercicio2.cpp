#include <iostream>
#include <string.h>
using namespace std;

class ContaBancaria
{
public:
    int numero;
    string titular;
    double saldo;

    ContaBancaria()
    {
        this->numero = 0;
        this->titular = "Titular nao nomeado";
        this->saldo = 0.0;
    }
    ContaBancaria(int numero, string titular)
    {
        this->numero = numero;
        this->titular = titular;
        this->saldo = 0.0;
    }
    ContaBancaria(int numero, string titular, double saldo)
    {
        this->numero = numero;
        this->titular = titular;
        this->saldo = saldo;
    }

    void consultarExtrato()
    {
        cout << "Numero: " << this->numero << endl;
        cout << "Titular: " << this->titular << endl;
        cout << "Saldo: " << this->saldo << endl;
    }
};

int main()
{

    ContaBancaria conta1;
    ContaBancaria conta2(91929495, "Zeze");
    ContaBancaria conta3(98975184, "Josefa", 1000.53);

    conta1.consultarExtrato();
    conta2.consultarExtrato();
    conta3.consultarExtrato();

    return 0;
}