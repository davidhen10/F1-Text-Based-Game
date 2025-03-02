/**
 * @file ContainerRoom.hpp
 * @brief Header file for the ContainerRoom Class
 * @author Jack. S
 * 
 * Represents a room in a game environment that can contain items
 */

#ifndef CONTAINERROOM_HPP
#define CONTAINERROOM_HPP
#include <map>
#include <string>
#include <vector>
#include "Environment.hpp"

/**
 * @class ContainerRoom
 * @brief A room that can hold items
 * 
 * The class inherits from Environment and manages
 * items within the room using a inventory.
 */

class ContainerRoom : public Environment {
 private:
   /**
    * @brief Pointer to the container holding items in the room
    */
    Inventory* items;

 public:
   /**
    * @brief Constructor for ContainerRoom
    * @param roomName well it's the name of the room
    */
    ContainerRoom(const std::string& roomName);

    /**
     * @brief Destructor for the ContainerRoom Inventory
     */
    ~ContainerRoom() {delete items; }

    /**
     * @brief Action to preform to enter a room.
     */
    void enter() const override;

    /**
     * @brief Action to preform to exit a room.
     */
    void exit() const override;

    /**
     * @brief Displays what items are in the room.
     */
    void Look_around() const override;

    /**
     * @brief Retrives a list of items in the room
     * @return Vector of item names.
     */
    std::vector<std::string> getItems() const;
};

#endif
