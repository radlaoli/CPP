#include <iostream>
#include <string>

using namespace std;

class Produto
{
private:
    string nome;
    double preco;
    int estoque;

public:
    Produto(string nome, double preco, int estoqueInicial)
    {
        this->nome = nome;

        if (preco > 0)
        {
            this->preco = preco;
        }
        else
        {
            this->preco = 0.0;
        }

        if (estoqueInicial >= 0)
        {
            this->estoque = estoqueInicial;
        }
        else
        {
            this->estoque = 0;
        }
    }

    void addEstoque(int unidade)
    {
        if (unidade > 0)
        {
            this->estoque += unidade;
        }
        else
        {
            cout << "Nao pode adicionar ao estoque valores nulos ou negativos" << endl;
        }
    }

    void rmEstoque(int unidade)
    {
        if (this->estoque - unidade >= 0)
        {
            this->estoque -= unidade;
        }
        else
        {
            cout << "Erro: Quantidade indisponivel em estoque para remocao." << endl;
        }
    }
    void altPreco(double preco)
    {
        if (preco > 0)
        {
            this->preco = preco;
        }
        else
        {
            cout << "O preco deve ser maior que zero" << endl;
        }
    }
    void exibirInfo()
    {
        cout << "Nome: " << this->nome << endl;
        cout << "Preco: " << this->preco << endl;
        cout << "Estoque: " << this->estoque << endl;

        cout << "---------------------------------" << endl;
    }
};

int main()
{

    Produto bola_futebol("Bola de futebol", 20.00, 50);

    bola_futebol.addEstoque(10);
    bola_futebol.addEstoque(-10);

    bola_futebol.rmEstoque(100);
    bola_futebol.rmEstoque(10);

    bola_futebol.altPreco(-10.00);
    bola_futebol.altPreco(15.00);

    bola_futebol.exibirInfo();

    return 0;
}