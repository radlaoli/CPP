#include <iostream>
#include <string>
using namespace std;

class Instrumento
{
protected:
    string nome, tipo;

public:
    Instrumento(string nome, string tipo) : nome(nome), tipo(tipo)
    {
        cout << "Instrumento " << nome << " criado" << endl;
    }

    virtual void tocar()
    {
        cout << "tocando" << endl;
    }
};

class Violao : public Instrumento
{
public:
    Violao(string nome, string tipo) : Instrumento(nome, tipo)
    {
        cout << "Violao criado" << endl;
    }

    void tocar() override
    {
        cout << "tocando cordas" << endl;
    }
};

class Teclado : public Instrumento
{
public:
    Teclado(string nome, string tipo) : Instrumento(nome, tipo)
    {
        cout << "Teclado criado" << endl;
    }

    void tocar() override
    {
        cout << "tocando teclas" << endl;
    }
};

class Bateria : public Instrumento
{
public:
    Bateria(string nome, string tipo) : Instrumento(nome, tipo)
    {
        cout << "Bateria criada" << endl;
    }

    void tocar() override
    {
        cout << "tocando nos pratos";
    }
};

void usarInstrumento(Instrumento *instrumento)
{
    instrumento->tocar();
}

int main()
{
    Violao vivi("Violao Top", "Corda");
    Teclado yamaha("Teclado 5 oitavas", "teclas");
    Bateria tutum("Bateria do Batuque", "Percussao");
    Instrumento *loja[3];
    loja[0] = &vivi;
    loja[1] = &yamaha;
    loja[2] = &tutum;

    usarInstrumento(&tutum);
    cout << endl;

    for (size_t i = 0; i < 3; i++)
    {
        loja[i]->tocar();
    }

    return 0;
}