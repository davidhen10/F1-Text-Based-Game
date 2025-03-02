/**
 * @author Jonah Friesen jonah.friesen@uleth.ca
 * @date 2024-10
 */

#ifndef INTERACTPUZZLE_HPP
#define INTERACTPUZZLE_HPP
#include "Inventory.hpp"
#include "Objects.hpp"
/**
 * @brief A class for the interact puzzles
 */

class Interactpuzzle {
 public:
  /**
   * @brief constructor for interactpuzzle
   */

  Interactpuzzle();
  /**
   * @brief Checks if a specific is in an inventory
   */

  bool correctObject(Inventory*, Objects*);

  /**
   * @brief destructor
   */

  virtual ~Interactpuzzle();
};
/**
 * @brief concrete class for the key puzzle
 */

class keyPuzzle : public Interactpuzzle {
 public:
  keyPuzzle() {}
  bool keyCheck(Inventory*, Objects*);
  ~keyPuzzle() {}
};
#endif
