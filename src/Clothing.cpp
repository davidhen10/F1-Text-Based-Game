#include "Clothing.hpp"

Clothing::Clothing(std::string name) { objectName = name; }

Clothing::~Clothing() {}

void Clothing::use() {
  if (this->isWorn) {
    std::cout << "You take off the " << this->objectName << std::endl;
    this->isWorn = false;
  } else {
    std::cout << "You put on the " << this->objectName << std::endl;
    this->isWorn = true;
  }
}

bool Clothing::isWearingItem() { return this->isWorn; }
