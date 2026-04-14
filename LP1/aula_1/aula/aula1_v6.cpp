#include <iostream>
#include <string.h>
using namespace std;

#define TAM 1000000000
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
    Pessoa *galera = new Pessoa[TAM];
    for (int i = 0; i < TAM; i++)
    {
        galera[i].init();
    }
    //o main não precisa de free, mas é uma boa prática
    int num;

    cout << "Aperte 0 para encerrar: "<< endl;
    cin >> num;

    delete(galera);

    return 0;
}