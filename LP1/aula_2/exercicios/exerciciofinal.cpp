#include <iostream>
#include <string>
using namespace std;

class ContaBancaria
{
public:
    int numero;
    static int contador;
    double saldo;
    ContaBancaria()
    {
        this->saldo = 0.0;
        contador++;
    }
    ContaBancaria(int numero)
    {
        this->numero = numero;
        this->saldo = 0.0;
        contador++;
    }
    ContaBancaria(int numero, double saldo)
    {
        this->numero = numero;
        if (saldo >= 0)
        {
            this->saldo = saldo;
            contador++;
        }
        else
        {
            cout << "O saldo informado nao pode ser atribuido" << endl;
        }
    }

    static void totalContas()
    {
        cout << "Total de contas ativas: " << contador << endl;
    }

    void depositar(double valor)
    {
        if (valor > 0)
        {
            this->saldo += valor;
            cout << "Deposito de " << valor << " realizado" << endl;
        }
        else
        {
            cout << "Esse valor nao pode ser depositado, apenas valores positivos" << endl;
        }
    }
    void depositar(double valor, string msg)
    {
        if (valor > 0)
        {
            this->saldo += valor;
            cout << "Deposito  de " << valor << " realizado" << endl;
            cout << "Descricao: " << endl;
            cout << msg << endl;
        }
        else
        {
            cout << "Esse valor nao pode ser depositado, apenas valores positivos" << endl;
        }
    }
    void transferir(double valor, ContaBancaria &destino)
    {
        if (valor > 0)
        {
            this->saldo -= valor;
            destino.saldo += valor;
            cout << "Transferencia de " << valor << " para a conta de numero " << destino.numero << " realizada" << endl;
        }
        else
        {
            cout << "Esse valor nao pode ser transferido, apenas valores positivos" << endl;
        }
    }
    void contaInfo()
    {
        cout << "Numero da conta: " << this->numero << endl;
        cout << "Saldo atual da conta: " << this->saldo << endl;
    }
    ~ContaBancaria()
    {
        cout << "Conta fechada" << endl;
        contador--;
    }
};

int ContaBancaria::contador = 0;

int main()
{
    ContaBancaria conta1;
    conta1.numero = 101;

    ContaBancaria conta2(202);

    ContaBancaria conta3(303, 500.0);

    ContaBancaria::totalContas();

    conta1.depositar(150.0);
    conta2.depositar(200.0, "Deposito via PIX");

    conta3.transferir(100.0, conta1);

    conta1.contaInfo();
    conta2.contaInfo();
    conta3.contaInfo();

    ContaBancaria::totalContas();

    return 0;
}