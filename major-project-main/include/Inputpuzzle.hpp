/**
 * @file InputPuzzle.hpp
 * @brief Header file for the Inputpuzzle class
 * @author David Henein <david.henein@uleth.ca>
 * @date Fall 2024
 */

#ifndef INPUTPUZZLE_HPP
#define INPUTPUZZLE_HPP
#include <string>
#include "Puzzle.hpp"

/**
 * @class Inputpuzzle
 * @brief Represents the different puzzles that the player 
 * needs to solve in the game
 */

class Inputpuzzle : public Puzzle {
 public:
 /**
  * @brief Constructor for Inputpuzzle
  */
    Inputpuzzle();

    /**
     * @brief Destructor for Inputpuzzle
     */
    virtual ~Inputpuzzle();

    /**
     * @brief Display the puzzle to the player
     */
    virtual bool displayPuzzle();

    /**
     * @brief Takes the input of the players answer
     */
    void userInput();

    /**
     * @brief Checks if the users input is the correct answer
     * @param input the players input
     * @return True if the players answer was correct, false otherwise
     */
    bool checkIfCorrect(const std::string& input);

    /**
     * @brief Keeps track of the attempts remaining for the player to answer puzzle
     */
    int attemptsAllowed = 3;

 protected:
    /**
     * @brief The player's input
     */
    std::string input;

    /**
     * @brief Indicates the correct answer of each puzzle
     */
    std::string correctAnswer;
};

/**
 * @class MultipleChoicePuzzle
 * @brief Represents the multiple choice puzzle
 */
class MultipleChoicePuzzle : public Inputpuzzle {
 public:
    bool displayPuzzle() override;
};

/**
 * @class EquationPuzzle
 * @brief Represents the equation puzzle
 */
class EquationPuzzle : public Inputpuzzle {
 public:
    bool displayPuzzle() override;
};

/**
 * @class RiddlePuzzle
 * @brief Represents the riddle puzzle
 */
class RiddlePuzzle : public Inputpuzzle {
 public:
    bool displayPuzzle() override;
};

/**
 * @class PasswordPuzzle
 * @brief Represents the password puzzle to to open the safe
 */
class PasswordPuzzle : public Inputpuzzle {
 public:
    bool displayPuzzleNew();
};

#endif
