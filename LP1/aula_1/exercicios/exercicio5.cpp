#include <iostream>
#include <string>
using namespace std;

class Produto
{
public:
    string nome;
    float preco;
    int quantidade;

    void exibirInfo()
    {
        cout << "Nome do produto: " << this->nome;
        cout << " Preco: " << this->preco;
        cout << " Quantidade: " << this->quantidade << endl;
    }
};

int main()
{

    Produto prod[5];
    int expensiveId = 0;
    float valorEstoque = 0;
    /*
        for (int i = 0; i < 5; i++)
        {
            cin >> prod[i].nome;
            cin >> prod[i].preco;
            cin >> prod[i].quantidade;
        }  */

    prod[0] = {"Monitor", 1200.0, 10};
    prod[1] = {"Teclado", 250.0, 20};
    prod[2] = {"Mouse", 150.0, 15};
    prod[3] = {"Headset", 400.0, 8};
    prod[4] = {"Mousepad", 80.0, 30};

    for (int i = 0; i < 5; i++)
    {
        valorEstoque += prod[i].preco;
    }

    for (int i = 1; i < 5; i++)
    {
        if (prod[i].preco > prod[expensiveId].preco)
        {
            expensiveId = i;
        }
    }
    cout << "Valor total do estoque: " << valorEstoque << endl;
    cout << "Produto mais caro: " << prod[expensiveId].nome << " | Valor " << prod[expensiveId].preco << endl;

    return 0;
}