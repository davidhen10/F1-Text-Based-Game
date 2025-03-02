/**
 * @author Mackenzie Meyers [mackenzie.meyers@uleth.ca], David Henein <david.henein@uleth.ca>
 * @date 2024-12
 */
#ifndef GAME_HPP
#define GAME_HPP
#include "CarRoom.hpp"
#include "Clothing.hpp"
#include "ContainerRoom.hpp"
#include "Environment.hpp"
#include "Inventory.hpp"
#include "Objects.hpp"
#include "Player.hpp"
#include "Tools.hpp"
#include "Interactpuzzle.hpp"
#include "Inputpuzzle.hpp"
#include "NPC.hpp"
#include "Race.hpp"

/**
* @class Game Game.hpp "Game.hpp"
* @brief This class handels the game functionality
*/
class Game {
 protected:
  Player player;

 public:
/**
* @brief This function starts the game
*/
  void startGame();
/**
* @brief This function handels the switching of enviroments
*/
  void changeEnvironment(Environment* newEnvironment);
/**
* @brief This function outputs tesxt to descibe the game
*/
  void describeGame() const;
/**
* @brief This function handels the player interacting with the game
*/
  void playerInteract();
/**
* @brief default constructor
*/
  Game();
/**
* @brief default destructor
*/
  virtual ~Game();
/**
* @brief This function handels the functionality of the driver room
*/
  void mechanicsDriverRoom();
/**
* @brief This function handels the functionality of the garage
*/
  void mechanicsGarage();
/**
* @brief This function handels the functionality of the car
*/
  void mechanicsCarRoom();
/**
* @brief This function handels the functionality of the race
*/
  void race();
};

#endif
