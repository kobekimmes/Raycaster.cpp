#ifndef CAMERA_H
#define CAMERA_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "game.h"

using namespace std;
using namespace sf;

class Camera {

public:
    Game game;
    float x;
    float y;
    float angleV = 90;
    float angleH = 90;
    float sens = 0.5;
    CircleShape body;
    sf::RectangleShape dir;

    Camera(Game game, float x, float y);
    void update();
    void show();
    void getInput();
};

#endif