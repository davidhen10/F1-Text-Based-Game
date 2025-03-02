/**
 * @author Jonah Friesen jonah.friesen@uleth.ca
 * @date 2024-12
 */
#ifndef OBJECTS_HPP
#define OBJECTS_HPP
#include <iostream>
#include <string>
class Inventory;
/**
 * @brief an abstract class for the objects
 */
class Objects {
 public:
  /**
   * @brief Constructor
   */
  Objects();
  /**
   * @brief destructor
   */
  virtual ~Objects();
  /**
   * @brief Pure virtual function for use
   */
  virtual void use() = 0;
  /**
   * @brief pickup function for getting items from a room
   * @param Inventory* the rooms inventory, object taken from this one
   * @param Inventory* the players inventory, added to this one
   */
  void pickUp(Inventory*, Inventory*);
  /**
   * @brief putdown function, once an object is put down it can't be picked up
   * again without using addObject from Inventory
   * @param Inventory the inventory the object is to be taken from
   */
  void putDown(Inventory* Inventory);
  /**
   * @brief Getter function for the objects name
   */
  std::string getName() const;

 protected:
  /**
   * @brief The objects name
   */
  std::string objectName;
};
#endif
