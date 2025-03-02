#include "Game.hpp"

int main() {
    Game* game;
    game = new Game();
    game -> startGame();
    game -> mechanicsDriverRoom();
    game -> mechanicsGarage();
    game -> mechanicsCarRoom();
    game -> race();
    return 0;
}
