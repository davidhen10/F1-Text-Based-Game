/**
 * @file Environment.hpp
 * @brief Defines the Abstract Environment
 * @author Jack. S
 */

#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <cstring>
#include "Inventory.hpp"
#include "Objects.hpp"

/**
 * @class Environment
 * @brief Defines the pure virtual methods and handles opening/closing
 * text files.
 * 
 * Responsible for displayDescription, readPuzzleClue, displayHelp,
 *  and openTextFile. 
 */

class Environment {
 protected:
  std::string name;

 public:
  /**
   * @brief Constructs a new environment and initializes name.
   */
  Environment(const std::string& name);

  /**
   * @brief Enivronment Descrutor
   */
  virtual ~Environment() = default;

  /**
   * @brief Pure virtual method that the concrete classes implement.
   */
  virtual void enter() const = 0;

  /**
   * @brief Pure virtual method that the conrete classes implement.
   */
  virtual void exit() const = 0;

  /**
   * @brief Pure virtual method that the concrete classes implement.
   */
  virtual void Look_around() const = 0;

  /**
   * @brief Calls opentextfile with a specific file path corresponding
   *  to the rooms description.
   */
  void displayDescription() const;

  /**
   * @brief Calls opentextfile with a specific file path corresponding
   *  to the puzzles description(s).
   */
  void readPuzzleClue(std::string title) const;

  /**
   * @brief Calls opentextfile and displays the help.txt file
   *  to guide the player.
   */
  void displayHelp() const;

 protected:
  virtual void openTextFile(const std::string& filepath) const;
  /**
   * @brief Opens the passed in text file.
   */
};

#endif
