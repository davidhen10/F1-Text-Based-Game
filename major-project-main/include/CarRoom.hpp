/**
 * @file CarRoom.hpp
 * @brief Header file for the CarRoom class
 */
#ifndef CARROOM_HPP
#define CARROOM_HPP
#include <string>
#include <vector>
#include <map>
#include "Environment.hpp"

/**
 * @class CarRoom
 * @brief Represents a room that is a car/
 * with a car that requires the player to use a item(s).
 */

class CarRoom : public Environment {
 protected:
 /**
  * @brief The item required to unlock or interact with the car
  */
    std::string requiredItem;

    /**
     * @brief Indicates whether the car is currently locked
     */
    bool carIsLocked = true;

    /**
     * @brief Indicates if items have been used in this room.
     */
    bool itemsUsed;

 public:
   /**
    * @brief Constructor for CarRoom
    * @param roomName The name of the Room
    * @param itemNeeded the item required to interact with the car.
    */
    CarRoom(const std::string& roomName,
    const std::string& itemNeeded);

    /**
     * @brief Action to preform to enter room
     */
    void enter() const override;

    /**
     * @brief Action to preform to exit room
     */
    void exit() const override;

    /**
     * @brief Displays what can be seen in the room.
     */
    void Look_around() const override;

    /**
     * @brief Attempts to unluck the car with given item
     * @param item the item used to unlock the car
     * @return True if the car was successfully unlocked, False
     * if that's no the case
     */
    bool unlockCar(const std::string& item);

    /**
     * @brief Attempts to start the car with the given item
     * @param item the item used  to start the car
     * @return True if the car started false if it didn't start.
     */
    bool startCar(const std::string& item);
};

#endif
