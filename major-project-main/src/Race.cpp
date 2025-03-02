/**
 * @file Race.cpp
 * @brief Implementation of the Race Class
 * @author Jack.S
 */

#include "Race.hpp"
#include <iostream>

Race::Race(const std::string& roomName) : Environment(roomName) {}

void Race::enter() const {
    std::cout << "You enter " << name << ".\n";
    displayDescription();
}

void Race::exit() const {
    std::cout << "You've exited " << name << ".\n";
}

void Race::Look_around() const {
    std::cout << "You look around " << name << ".\n";
    displayDescription();
}

bool Race::playerDied() const {
    return false;
}

bool Race::snailTrap() const {
    char userInput;
    std::cin >> userInput;
    if (userInput == '1') {
        std::cout << "You ran over Turbo! Murderer!!!";
        std::cout << "The shock of hitting turbo made you faint. \n";
        return playerDied();
    }
    if (userInput == '2') {
        std::cout << "You are a good person" << std::endl;
        return true;
    }
    return true;
}

void Race::winGame() {
    std::cout << std::endl;
    std::cout << "You won the race!! Congratulations" << std::endl;
    std::cout << "Thank you for playing!";
}
