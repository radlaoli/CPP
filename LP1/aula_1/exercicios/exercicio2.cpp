#include <iostream>
#include <string.h>
using namespace std;

class Livro{
    public:
        string titulo, autor;
        int paginas;

        void exibirLivro(){
            cout << "Titulo: " << this->titulo << " | Autor: "<< this->autor << " | Paginas: "<< this->paginas << endl;
        }
};

int main(){

    Livro livro1, livro2, livro3;

    livro1.titulo = "Codigo Limpo";
    livro1.autor = "Robert C. Martin" ;
    livro1.paginas = 425;

    livro2.titulo = "O Pequeno Principe";
    livro2.autor = "Antoine de Saint-Exupery" ;
    livro2.paginas = 96;

    livro3.titulo = "O Hobbit";
    livro3.autor = "J.R.R. Tolkien" ;
    livro3.paginas = 310;

    livro1.exibirLivro();
    livro2.exibirLivro();
    livro3.exibirLivro();

    return 0;
}