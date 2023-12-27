#include <iostream>
#include <cmath>

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

#define WIDTH 400
#define HEIGHT 400


int main() {

    RenderWindow window(VideoMode(WIDTH, HEIGHT), "Renderer");
    window.setFramerateLimit(60);

    while (window.isOpen()) {


        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }

            if (event.type == Event::KeyPressed) {
                if (Keyboard::isKeyPressed(Keyboard::Key::Left)) {
                    cout<<"left"<<endl;
                    
            
                }
                if (Keyboard::isKeyPressed(Keyboard::Key::Right)) {
                    cout<<"right"<<endl;
                    
                }
                if (Keyboard::isKeyPressed(Keyboard::Key::Up)) {
                    cout<<"up"<<endl;
                    
                }
                if (Keyboard::isKeyPressed(Keyboard::Key::Down)) {
                    cout<<"down"<<endl;
                    
                }

                if (Keyboard::isKeyPressed(Keyboard::Key::A)) {
                    cout<<"look left"<<endl;
                
                }
                if (Keyboard::isKeyPressed(Keyboard::Key::D)) {
                    cout<<"look right"<<endl;
                    
                    }
                }
                if (Keyboard::isKeyPressed(Keyboard::Key::W)) {
                    cout<<"look up"<<endl;
                    
                }
                if (Keyboard::isKeyPressed(Keyboard::Key::S)) {
                    cout<<"look down"<<endl;
                    
                }

            }

        
        // Render
        window.clear();

        window.display();
    }


    return 0;
}