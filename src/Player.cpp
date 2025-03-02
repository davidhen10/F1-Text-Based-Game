#include "Player.hpp"

Player::Player() {}

Player::~Player() {}

void Player::interact() {
    // Handle the player interacting
}

void Player::interactDriverRoom() {
    std::cout << "You need to get your gloves and helmet,"
    "last you remember they were stored in the cupboard " << std::endl;
    std::cout << "What would you like to do? : " << std::endl
        << "(1) Look Around" << std::endl
        << "(2) Go to Cupboard" << std::endl
        << "(3) Sit on couch" << std::endl
        << "(4) Leave Room" << std::endl;
        std::cin >> userInput;
}

void Player::interactGarage() {
    std::cout << "You are in the Garage," << std::endl;
    std::cout << "What would you like to do? : " << std::endl
        << "(1) Look Around" << std::endl
        << "(2) Go to Safe" << std::endl
        << "(3) Talk to mechanic" << std::endl
        << "(4) Talk to Team Principle" << std::endl
        << "(5) Talk to Teammate" << std::endl
        << "(6) Go into car" << std::endl;
        std::cin >> userInput;
}


Inventory& Player::getInventory() {
    return inventory;
}
