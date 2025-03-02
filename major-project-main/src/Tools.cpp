#include "Tools.hpp"

Tools::Tools(std::string name) { objectName = name; }

Tools::~Tools() {}

void Tools::use() {
  std::cout << "You twirl the " << this->getName() << " around in your hand"
            << std::endl;
}
