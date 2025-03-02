/**
 * @file Race.hpp
 * @brief Header file for the Race Class
 * @author Jack. S
 *
 * Represents a room in a game environment that can kill the player
 */

#ifndef RACE_HPP
#define RACE_HPP
#include <string>
#include <vector>

#include "Environment.hpp"

/**
 * @class Race
 * @brief A room that makes you do puzzles
 *  and can kill you.
 *
 * The class inherits from Environment and sets
 * the puzzle.
 */
class Race : public Environment {
 public:
  /**
   * @brief Constructor for the Race
   * @param roomName .. name of the room
   * @param pzl the current puzzle
   */
  Race(const std::string& roomName);

  /**
   *@brief Action to preform to enter room.
   */
  void enter() const override;

  /**
   * @brief Display what items are in the room
   */
  void exit() const override;

  /**
   * Displays the room description and what you see around you.
   */
  void Look_around() const override;

  /**
   * @brief Checks if conditions are met
   * @return s true if there is a puzzle set AND puzzle lose is false
   * Meaning checkiscorrect is false
   */
  bool playerDied() const;

  /**
   * @brief Player ran over turbo causing them to die
   */
  bool snailTrap() const;

   /**
   * @brief Outputs game winning text
   */
  void winGame();
};

#endif
