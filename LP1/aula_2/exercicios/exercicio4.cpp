#include <iostream>
#include <string>

using namespace std;

class Funcionario
{
private:
    static int contador;
    string nome;
    double salario;

public:
    Funcionario(string nome, double salario)
    {
        contador++;
        this->nome = nome;
        this->salario = salario;
    }

    ~Funcionario()
    {
        contador--;
    }

    void infoFuncionario()
    {
        cout << "Nome: " << this->nome << " | Salario: " << this->salario << endl;
    }

    static void totalFuncionarios()
    {
        cout << "O total de funcionarios e: " << contador << endl;
    }
};

int Funcionario::contador = 0;

int main()
{
    Funcionario maria("Maria", 2000.00);
    maria.infoFuncionario();
    Funcionario::totalFuncionarios();

    {
        Funcionario pedro("Pedro", 1900.00);
        pedro.infoFuncionario();
        Funcionario::totalFuncionarios();
    }

    Funcionario::totalFuncionarios();

    return 0;
}