/**
 * @author David Henein <david.henein@uleth.ca>
 * @date Fall 2024
 */

#include "Inputpuzzle.hpp"

#include <iostream>
#include <string>
#include <algorithm>

Inputpuzzle::Inputpuzzle() {}

Inputpuzzle::~Inputpuzzle() {}

bool Inputpuzzle::displayPuzzle() {return true;}

void Inputpuzzle::userInput() {
  std::cout << "Enter your answer: ";
  std::cin >> this->input;
}

bool Inputpuzzle::checkIfCorrect(const std::string& input) {
    std::string currentInput = input;
    while (attemptsAllowed > 0) {
        if (currentInput == correctAnswer) {
            std::cout << "Correct!" << std::endl;
            return true;
        }

        attemptsAllowed--;
        if (attemptsAllowed > 0) {
            std::cout << "Incorrect! You have " <<
             attemptsAllowed << " attempts left." << std::endl;
            userInput();
            currentInput = this->input;
        }
    }

    std::cout << "You have failed to solve the puzzle!" << std::endl;
    //Lose();
    //return false;
    return false;
}

bool MultipleChoicePuzzle::displayPuzzle() {
  std::cout << "Time for a pit stop! Choose the right team to pit with or else "
               "you will lose the race!"
            << std::endl;
  std::cout << "1. Red Bull Racing" << std::endl;
  std::cout << "2. Ferrari" << std::endl;
  std::cout << "3. Dinaco" << std::endl;
  std::cout << "4. Rust-eze" << std::endl;
  correctAnswer = "4";
  userInput();
  return checkIfCorrect(input);
}

bool EquationPuzzle::displayPuzzle() {
  std::cout << "What is 5 x 20?" << std::endl;
  correctAnswer = "100";
  userInput();
  return checkIfCorrect(input);
}

bool RiddlePuzzle::displayPuzzle() {
  std::cout << "What has keys but can't open locks?" << std::endl;
  std::cout << "Hint: A musical instrument" << std::endl;
  correctAnswer = "piano";
  userInput();
  std::transform(input.begin(), input.end(), input.begin(), ::tolower);
  return checkIfCorrect(input);
}

bool PasswordPuzzle::displayPuzzleNew() {
  std::cout << "What is the password to unlock the safe?" << std::endl;
  correctAnswer = "1234";
  userInput();
  attemptsAllowed = 3;
  return checkIfCorrect(input);
}
