#include "Inventory.hpp"

#include <iostream>

#include "Objects.hpp"
Inventory::Inventory() { itemList = {}; }
Inventory::~Inventory() {}
void Inventory::addObject(Objects* obj) { itemList.push_back(obj); }
void Inventory::removeObject(Objects* obj) {
  for (int i = 0; i < itemList.size(); i++) {
    if (itemList[i] == obj) {
      itemList.erase(itemList.begin() + i);
      i = itemList.size();
    } else {
      std::cout << "object not found" << std::endl;
    }
  }
}

void Inventory::printInventory() {
  for (int i = 0; i < itemList.size(); i++) {
    std::cout << itemList[i]->getName() << ", ";
  }
  std::cout << "end of inventory" << std::endl;
}

// Added a method which returns the item list, so I can use it in ContainerRoom.
std::vector<Objects*> Inventory::getItemList() const { return itemList; }
bool Inventory::inInventory(Objects* obj) {
  std::string toFind = obj->getName();
  std::string check;
  for (int i = 0; i < itemList.size(); i++) {
    check = itemList[i]->getName();
    if (check == toFind) {
      return true;
    }
  }
  return false;
}

bool Inventory::multiInInventory(Objects* obj1, Objects* obj2, Objects* obj3) {
  if (this->inInventory(obj1) && this->inInventory(obj2) &&
      this->inInventory(obj3)) {
    return true;

  } else {
    return false;
  }
}
