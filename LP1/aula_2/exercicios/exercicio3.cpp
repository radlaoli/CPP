#include <iostream>
#include <string.h>
using namespace std;

class Conexao
{
public:
    Conexao()
    {
        cout << "Conexao ativada" << endl;
    }
    ~Conexao()
    {
        cout << "Conexao desativada" << endl;
    }
};

int main()
{
    {
        Conexao c1;
        {
            Conexao c2;
        };
        Conexao c3;
    }

    return 0;
}