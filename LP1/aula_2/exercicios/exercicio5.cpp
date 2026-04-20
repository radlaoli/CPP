#include <iostream>
#include <string>
using namespace std;

class Matematica
{
public:
    int multiplicar(int a, int b)
    {
        return a * b;
    }
    double multiplicar(double a, double b)
    {
        return a * b;
    }
    double multiplicar(int a, double b)
    {
        return a * b;
    }
    int multiplicar(int a, int b, int c)
    {
        return a * b * c;
    }
};

int main()
{
    Matematica calc;
    cout << calc.multiplicar(5, 3) << endl;
    cout << calc.multiplicar(2.5, 3.7) << endl;
    cout << calc.multiplicar(2, 3.7) << endl;
    cout << calc.multiplicar(1, 2, 3) << endl;
    return 0;
}