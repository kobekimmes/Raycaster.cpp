#include <iostream>
#include <cmath>

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Headers/camera.h"
#include "Headers/game.h"

using namespace std;
using namespace sf;

#define WIDTH 400
#define HEIGHT 400
#define RES 20
#define ROWS (HEIGHT / RES)
#define COLS (WIDTH / RES)


int main() {

    Game myGame();
    myGame.run();

    return 0;
}

Game myGame();
myGame.run();