#include <iostream>
#include <string.h>
using namespace std;

class Retangulo
{
public:
    double largura, altura;

    Retangulo(double larg, double alt)
    {
        this->largura = larg;
        this->altura = alt;
        cout << "triangulo " << larg << "x" << alt << " criado" << endl;
    }
    void retanguloArea()
    {
        double area = this->largura * this->altura;
        cout << "Area: " << area << endl;
    }
};

int main()
{
    Retangulo ret1(2, 3);
    Retangulo ret2(5, 5);
    Retangulo ret3(2, 6);

    ret1.retanguloArea();
    ret2.retanguloArea();
    ret3.retanguloArea();

    return 0;
}