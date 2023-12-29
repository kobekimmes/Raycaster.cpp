#include "Headers/camera.h"
#include "Headers/main.h"
#include <iostream>
#include <cmath>

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;


Camera::Camera(Game game, float x, float y) : game(game), x(x), y(y) {
    body.setRadius(RES);
}

void Camera::update(Event event) {
    this.show();
    this.input(event);

}

void Camera::show() {
    body.setFillColor(Color::Red);
    body.setPosition(x, y);

    sf::RectangleShape dir(sf::Vector2f(120.f, 50.f));
    dir.setFillColor(Color::Yellow);
    dir.setPosition(x + RES, y);
    
    game.window.draw(body);
    game.window.draw(dir);
}


void Camera::getInput() {

    float sinHAngle = sin(angleH * 3.14159265 / 180.0);
    float cosHAngle = cos(angleH * 3.14159265 / 180.0);
    
    float dx, dy = 0, 0;

    float vel = 5;

    float speedX = cosHAngle * vel * game.deltaTime;
    float speedY = sinHAngle * vel * game.deltaTime;
     
    Event event;
    while (window.pollEvent(event)) {
            
        if (event.type == Event::KeyPressed) {
            if (Keyboard::isKeyPressed(Keyboard::Key::Left)) {
                cout<<"strafe left"<<endl;
                dx += speedY;
                dy -= speedX;
            }
            if (Keyboard::isKeyPressed(Keyboard::Key::Right)) {
                cout<<"strafe right"<<endl;
                dx -= speedY;
                dy += speedX;
                
            }
            if (Keyboard::isKeyPressed(Keyboard::Key::Up)) {
                cout<<"move up"<<endl;
                dx += speedX;
                dy += speedY;
                
            }
            if (Keyboard::isKeyPressed(Keyboard::Key::Down)) {
                cout<<"move down"<<endl;
                dx -= speedX;
                dy -= speedY;
            }

            if (Keyboard::isKeyPressed(Keyboard::Key::A)) {
                cout<<"look left"<<endl;
                angleH -= sens * game.deltaTime;
            }
            if (Keyboard::isKeyPressed(Keyboard::Key::D)) {
                cout<<"look right"<<endl;
                angleH += sens * game.deltTime;
            }

            angleH %= 360;
            angleV %= 180;

            x += dx;
            y += dy;
            body.setPosition(x, y);
            
            // if (Keyboard::isKeyPressed(Keyboard::Key::W)) {
            //     cout<<"look up"<<endl;
                
            // }
            // if (Keyboard::isKeyPressed(Keyboard::Key::S)) {
            //     cout<<"look down"<<endl;
                
            // }
        }

    }


}
