#include <iostream>
#include <cmath>

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Headers/camera.h"
#include "Headers/game.h"

using namespace std;
using namespace sf;



Game::Game() {
    window(VideoMode(WIDTH, HEIGHT), "Renderer");
    window.setFramerateLimit(60);
    Camera myCam(300.0f, 300.0f);
    deltaTime = 
}


void Game::run() {
    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }  
        }
        update();
    }   
}


void Game::update() {

    // Render
    window.clear();
            
    myCam.update();

    window.display();

    
}

