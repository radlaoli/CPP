#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

int main(){
    VideoMode modoTela = VideoMode::getDesktopMode();

    Window janelinha(modoTela, "Minha Janelinha");

    while(janelinha.isOpen()){
        while (optional event = janelinha.pollEvent())  //fica verificando se aconteceu algum evento na janela
        {
            if(event->is<Event::Closed>()){ //verifica se o evento foi clicar no 'x'
                janelinha.close(); //fecha a janela
            }

            // Se o evento for o pressionamento de uma tecla
            if (const auto* keyPressed = event->getIf<Event::KeyPressed>()){
                // Aqui checamos se a tecla pressionada foi o Escape
                if (keyPressed->code == Keyboard::Key::Escape)
                {
                    janelinha.close(); //fecho a janela
                }
                
            }
        }
    }
    return 0;
}
