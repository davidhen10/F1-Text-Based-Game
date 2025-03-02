#include "CarRoom.hpp"

CarRoom::CarRoom(const std::string& roomName, const std::string& itemNeeded)
    : Environment(roomName), requiredItem(itemNeeded),
     carIsLocked(true), itemsUsed(false) {}

void CarRoom::enter() const {
    std::cout << "You enter.. " << name << ".\n";
}

void CarRoom::exit() const {
    if (carIsLocked) {
        std::cout << "You can't leave yet.\n";
    }
    std::cout << "Time to Race! " << ".\n";
}

void CarRoom::Look_around() const {
    std::cout << "You look around" << name << ":\n";
    displayDescription();
}

bool CarRoom::unlockCar(const std::string& item) {
    if (item == requiredItem) {
        carIsLocked = false;
        itemsUsed = true;
        return true;
    }
    return false;
}

bool CarRoom::startCar(const std::string& item) {
    if (!carIsLocked && itemsUsed) {
        return true;
    }
    return false;
}
