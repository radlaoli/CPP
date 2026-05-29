#include <iostream>
#include <string>
using namespace std;

class Pessoa
{
protected:
    string nome;
    int idade;
    long long int cpf;

public:
    Pessoa(string nome, int idade, long long int cpf)
    {
        this->nome = nome;
        this->idade = idade;
        this->cpf = cpf;
        cout << "Pessoa (" << this->nome << ") construida" << endl;
    }

    ~Pessoa()
    {
        cout << "Pessoa (" << this->nome << ") destruida" << endl;
    }
};

class Estudante : public Pessoa
{
protected:
    int matricula;

public:
    Estudante(string nome, int idade, long long int cpf, int matricula) : Pessoa(nome, idade, cpf)
    {
        this->matricula = matricula;
        cout << "Estudante (" << this->nome << ") construido" << endl;
    }

    ~Estudante()
    {
        cout << "Estudante (" << this->nome << ") destruido" << endl;
    }
};

class EstudanteUniversitario : public Estudante
{
protected:
    string curso;

public:
    EstudanteUniversitario(
        string nome,
        int idade,
        long long int cpf,
        int matricula,
        string curso) : Estudante(nome, idade, cpf, matricula)
    {
        this->curso = curso;
        cout << "Estudante Universitario (" << this->nome << ") construido" << endl;
    }

    ~EstudanteUniversitario()
    {
        cout << "Estudante Universitario (" << this->nome << ") destruido" << endl;
    }
};

int main()
{

    EstudanteUniversitario rad("Radla Oliveira", 19, 13080572384, 1, "TI");

    return 0;
}