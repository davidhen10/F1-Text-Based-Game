
#include "Interactpuzzle.hpp"

Interactpuzzle::Interactpuzzle() {}

Interactpuzzle::~Interactpuzzle() {}

bool Interactpuzzle::correctObject(Inventory* inven, Objects* obj) {
  if (inven->inInventory(obj)) {
    return true;
  } else {
    return false;
  }
}

bool keyPuzzle::keyCheck(Inventory* inven, Objects* obj) {
  std::cout << "You walk up to the cabinet and try the door, you realize "
               "its locked"
            << std::endl;
  if (correctObject(inven, obj)) {
    std::cout << "You take the key you picked up earier and unlock the "
                 "cabinet, you retrieve your gloves and helmet"
              << std::endl;
    return true;
  } else {
    std::cout << "you don't have the key" << std::endl;
    return false;
  }
}
