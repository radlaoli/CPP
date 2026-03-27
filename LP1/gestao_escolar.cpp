#include <iostream>
#include <string>

using namespace std;
#define MAX_ALUNOS 50;

class Data {
    public:
    int dia;
    int mes;
    int ano;

    void imprimirData(){
        cout << dia << "/" << mes << "/" << ano << endl;
    }
};

class Aluno{
    public:
    int matricula;
    string nome;
    Data nascimento;

    void imprimirAluno(){
        cout << "Matricula: " << matricula << " | Nome: " << nome << " | Nasc: ";
        nascimento.imprimirData(); 
    }
};
