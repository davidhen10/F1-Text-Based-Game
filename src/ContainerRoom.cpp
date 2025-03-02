#include "ContainerRoom.hpp"

ContainerRoom::ContainerRoom(const std::string& roomName)
    : Environment(roomName), items(new Inventory) {}

void ContainerRoom::enter() const {
    std::cout << "You enter " << name << ".\n";
    displayDescription();
}

void ContainerRoom::exit() const {
    std::cout << "You've exited " << name << ".\n";
}

void ContainerRoom::Look_around() const {
    std::cout << "You look around " << name << ".\n";
    displayDescription();
    auto roomItems = getItems();
    if (roomItems.empty()) {
        std::cout << "There are no items here. \n";
    } else {
        for (const auto& item : roomItems) {
            std::cout << "- " << item << "\n";
        }
    }
}

std::vector<std::string> ContainerRoom::getItems() const {
    std::vector<std::string> names;
    for (auto obj : items->getItemList()) {
        names.push_back(obj->getName());
    }
    return names;
}
