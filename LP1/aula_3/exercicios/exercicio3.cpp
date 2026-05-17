#include <iostream>
#include <string>

using namespace std;

class Veiculo
{
protected:
    string marca;
    int ano;

public:
    Veiculo(string marca, int ano)
    {
        setMarca(marca);
        setAno(ano);
    }

    void setMarca(string marca)
    {
        if (!marca.empty() && marca != " ")
        {
            this->marca = marca;
        }
        else
        {
            cout << "Digite a marca corretamente" << endl;
        }
    }
    void setAno(int ano)
    {
        if (ano >= 0)
        {
            this->ano = ano;
        }
        else
        {
            cout << "Digite o ano corretamente" << endl;
        }
    }
    void exibirInfo()
    {
        cout << "Marca: " << this->marca << endl;
        cout << "Ano: " << this->ano << endl;
    }
};

class Carro : public Veiculo
{
private:
    int portas;

public:
    Carro(string marca, int ano, int portas) : Veiculo(marca, ano)
    {
        setPortas(portas);
    }
    void setPortas(int numPortas)
    {
        if (numPortas >= 2)
        {
            this->portas = numPortas;
        }
        else
        {
            cout << "Esse numero de portas nao e permitido" << endl;
        }
    }
    void exibirInfo()
    {
        Veiculo::exibirInfo();
        cout << "Portas: " << this->portas << endl;
    }
};

int main()
{

    Carro meuCarro("Civic", 2024, 4);
    meuCarro.exibirInfo();

    Carro carroErrado(" ", -120, 1);

    return 0;
}