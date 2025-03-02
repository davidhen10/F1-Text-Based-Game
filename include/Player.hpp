/**
 * @file Player.hpp
 * @brief Header file for the Player class
 * @author Mackenzie Meyers [mackenzie.meyers@uleth.ca], David Henein <david.henein@uleth.ca>
 * @date Fall 2024
 */
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "CarRoom.hpp"
#include "Clothing.hpp"
#include "ContainerRoom.hpp"
#include "Environment.hpp"
#include "Inventory.hpp"
#include "Objects.hpp"
#include "Player.hpp"

/**
 * @class Player
 * @brief Handles the player's inventory and interactions with the environment
 */
class Player {
 protected:
   /**
    * @brief Represents the player's inventory
    */   
    Inventory inventory;

 public:
   /**
    * @brief Represents the user's input
    */
    char userInput;
    /**
     * @brief Interacts with the current environment
     */
    void interact();
    /**
     * @brief Gets the player's inventory
     */
    Inventory& getInventory();
    /**
     * @brief Constructs a new Player object
     */
    Player();
    /**
     * @brief Destroys the Player object
     */
    virtual ~Player();
    /**
     * @brief Interacts with the driver room
     */
    void interactDriverRoom();
    /**
     * @brief Interacts with the garage
     */
    void interactGarage();
};

#endif
