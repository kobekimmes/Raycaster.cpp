#include <iostream>
#include <cmath>

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "camera.h"
#include "game.h"

using namespace std;
using namespace sf;

class Game {

    sf::RenderWindow window;
    float deltaTime;

    Game();
    void run();
    void update();
};