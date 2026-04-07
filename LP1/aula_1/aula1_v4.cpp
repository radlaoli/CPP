#include <iostream>
#include <string.h>
using namespace std;

#define TAM 100000

class Pessoa{
    public:
        int idade;
        int vida;
        void init(){
            this->idade = 20; //ate mesmo só idade
            this->vida = 100; //ate mesmo só vida
        }
        void mostrar(){
            cout<< this->idade << this->vida << endl;
        }      
    };

int main(){
    Pessoa galera[TAM];
    for (int i = 0; i < TAM; i++)
    {
        galera[i].init();
    }
    

    return 0;
}