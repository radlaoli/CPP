#include <iostream>
#include <string>
using namespace std;

class Estudante{
    public: 
        long int matricula;
        string nome;
        int idade;
        float turma;
    
    void informações(){
        cout << "O aluno "<<nome << " tem matrícula: " << matricula << ", idade: " << idade << " e turma:" << turma << endl; 
    }
};

int main(){
    Estudante n1;
    n1.nome = "Radla";
    n1.matricula = 20253003351;
    n1.idade = 19;
    n1.turma = 2025.1f;
    n1.informações();
    return 0;
}
