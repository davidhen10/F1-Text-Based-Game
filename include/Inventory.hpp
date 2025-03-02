#ifndef INVENTORY_HPP
#define INVENTORY_HPP
#include <iostream>
#include <string>
#include <vector>
class Objects;
class Inventory {
 public:
  Inventory();
  virtual ~Inventory();
  void addObject(Objects*);
  void removeObject(Objects*);
  void printInventory();
  bool inInventory(Objects*);
  bool multiInInventory(Objects*, Objects*, Objects*);
  std::vector<Objects*> getItemList() const;

 private:
  std::vector<Objects*> itemList;
};

#endif
