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
} Pessoa;

void pessoa_mostrar(Pessoa esta){
    cout<< esta.idade << endl;
}

int main(){
    Pessoa p1;
    pessoa_mostrar(p1);

    return 0;
}