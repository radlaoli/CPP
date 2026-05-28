#include <iostream>
#include <cmath>
using namespace std;

class Forma
{
public:
    ~Forma() {}

    virtual double calcularArea()
    {
        return 0.0;
    }
};

class Circulo : public Forma
{
private:
    double raio;

public:
    Circulo(double r)
    {
        this->raio = r;
    }

    double calcularArea() override
    {
        return M_PI * pow(raio, 2);
    }
};

class Quadrado : public Forma
{
private:
    double lado;

public:
    Quadrado(double l)
    {
        this->lado = l;
    }

    double calcularArea() override
    {
        return pow(lado, 2);
    }
};

int main()
{
    Forma f1;
    cout << f1.calcularArea() << endl;
    Quadrado q1(2);
    cout << q1.calcularArea() << endl;
    Circulo c1(2);
    cout << c1.calcularArea() << endl;
    return 0;
}