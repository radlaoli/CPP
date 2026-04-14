#include <iostream>
#include <string.h>
using namespace std;
/*
variavel global ruim para softwares grandes
Problema organizacionais
*/
typedef struct
{
    int idade;
    int vida;
} Pessoa;

void pessoa_mostrar(Pessoa esta){
    cout<< esta.idade << esta.vida << endl;
}
//hard code
void pessoa_init(Pessoa * esta){ //deixar valores pre-definidos
    esta->idade = 20;
    esta->vida = 100;
}
//factory
int main(){
    Pessoa p1;
    pessoa_init(&p1);
    pessoa_mostrar(p1);

    Pessoa p2;
    pessoa_init(&p2);
    pessoa_mostrar(p2);

    return 0;
}