#include <iostream>

using namespace std;

class Retangulo
{
private:
    double largura, altura;

public:
    Retangulo(double altura, double largura)
    {
        setAltura(altura);
        setLargura(largura);
    }

    double getAltura()
    {
        return altura;
    }
    double getLargura()
    {
        return largura;
    }

    void setAltura(double altura)
    {
        if (altura >= 0)
        {
            this->altura = altura;
        }
        else
        {
            cout << "So pode settar alturas positivas" << endl;
        }
    }
    void setLargura(double largura)
    {
        if (largura >= 0)
        {
            this->largura = largura;
        }
        else
        {
            cout << "So pode settar larguras positivas" << endl;
        }
    }
};

int main()
{

    Retangulo retanguinho(33, 20);

    Retangulo pitaguinho(-10, -30);

    return 0;
}