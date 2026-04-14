#include <iostream>
#include <string.h>
using namespace std;

class Pessoa{
    public:
        int idade;
        int vida;
        void pessoa_init(Pessoa * esta){
            esta->idade = 20;
            esta->vida = 100;
        }
        void pessoa_mostrar(Pessoa * esta){
            cout<< esta->idade << esta->vida << endl;
        }      
    };

int main(){
    Pessoa p1;
    p1.pessoa_init(&p1);
    p1.pessoa_init(&p1);

    Pessoa p2;
    p2.pessoa_init(&p2);
    p2.pessoa_mostrar(&p2);

    return 0;
}