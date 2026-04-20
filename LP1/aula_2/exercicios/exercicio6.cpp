#include <iostream>
#include <string>
using namespace std;

class Troca
{
public:
    void trocarPorValor(int a, int b)
    {
        int salvar = a;
        a = b;
        b = salvar;
        cout << "Troca por valor feita" << endl;
    }

    void trocarPorReferencia(int &a, int &b)
    {
        int salvar = a;
        a = b;
        b = salvar;
        cout << "Troca por referencia feita" << endl;
    }
};

int main()
{
    Troca t;
    int x = 10, y = 20;

    cout << "Valores originais: x = " << x << ", y = " << y << endl;

    t.trocarPorValor(x, y);
    cout << "Apos trocarPorValor: x = " << x << ", y = " << y << endl;

    t.trocarPorReferencia(x, y);
    cout << "Apos trocarPorReferencia: x = " << x << ", y = " << y << endl;

    return 0;
}