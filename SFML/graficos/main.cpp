#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;


/*
Limpar a tela (clear) -> Para apagar o frame anterior.
Desenhar o objeto (draw) -> Para renderizar a forma na memória.
Exibir na tela (display) -> Para mostrar tudo o que foi desenhado de uma vez só.
*/

int main(){

    //utilizando janela renderizavel para atualizar frames
    RenderWindow janela(VideoMode({800,600}), "minha janela");

    //criando retangulo com as dimensoes 200 por 100 pixels (frames por isso o .f)
    RectangleShape retango({100.f,100.f});
    retango.setFillColor(Color::Blue); //dá cor à forma
    retango.setPosition({200.f,150.f}); // Define a posição (X=200, Y=150) na tela
    

    while (janela.isOpen())
    {
        while (optional event = janela.pollEvent())
        {
            if (event->is<Event::Closed> ())
            {
                janela.close();
            }
            if (const auto* pressKey = event->getIf<Event::KeyPressed>())
            {
                if (pressKey->code == Keyboard::Key::Escape)
                {
                    janela.close();
                }
            }
        }
        janela.clear();
        janela.draw(retango);
        janela.display();

    }
    
    
    return 0;
}