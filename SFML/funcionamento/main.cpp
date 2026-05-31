#include <SFML/Graphics.hpp>

int main() {
    // No SFML 3, passamos o sf::VideoMode direto de outra forma, e usamos sf::Vector2f
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML no GCC 15!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition({300.f, 200.f}); // SFML 3 usa chaves {} para vetores

    while (window.isOpen()) {
        // No SFML 3, o gerenciamento de eventos mudou para o padrão abaixo:
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}