#include "Objects.hpp"

#include <iostream>
#include <string>

#include "Inventory.hpp"
Objects::Objects() {}

Objects::~Objects() {}

void Objects::pickUp(Inventory* formerInven, Inventory* newInven) {
  if (formerInven->inInventory(this)) {
     newInven->addObject(this);
  this->putDown(formerInven);}
}

void Objects::putDown(Inventory* Inventory) { Inventory->removeObject(this); }

std::string Objects::getName() const { return objectName; }
