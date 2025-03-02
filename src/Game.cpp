/**
 * @author Mackenzie Meyers [mackenzie.meyers@uleth.ca], David Henein <david.henein@uleth.ca>
 * @date 2024-12
 */
#include "Game.hpp"

#include <iostream>

Game::Game() {}

Game::~Game() {}

void Game::startGame() {
  std::cout << "====== Welcome to F1 Adventure! ======" << std::endl;
  describeGame();
}

void Game::describeGame() const {
  std::cout << "You are a young and upcoming racer hoping to win your first "
               "race today for your team Rust-eze! Make the right choices and "
               "you may have a chance! You are starting the day in your"
               "Driver Room."
            << std::endl;
}

void Game::playerInteract() { player.interact(); }

void Game::mechanicsDriverRoom() {
  std::string name = "Driver_Room";
  ContainerRoom* DriverRoom = new ContainerRoom(name);
  Inventory* playerInventory = new Inventory;
  Inventory* roomInventory = new Inventory;
  keyPuzzle* puzzle = new keyPuzzle();
  Tools* key = new Tools("Key");
  Clothing* helmet = new Clothing("helmet");
  Clothing* gloves = new Clothing("gloves");
  Player* player = new Player();
  roomInventory->addObject(key);
  roomInventory->addObject(gloves);
  roomInventory->addObject(helmet);
  while (true) {
    player->interactDriverRoom();
    if (player->userInput == '1') {
      DriverRoom->Look_around();

    } else if (player->userInput == '2') {
      if (puzzle->keyCheck(playerInventory, key)) {
        gloves->pickUp(roomInventory, playerInventory);
        helmet->pickUp(roomInventory, playerInventory);
      }

    } else if (player->userInput == '3') {
      std::cout << "You sit on the couch ";
      if (roomInventory->inInventory(key)) {
        std::cout << " and find a key!" << std::endl;
        key->pickUp(roomInventory, playerInventory);
      } else {
        std::cout << std::endl;
      }

    } else if (player->userInput == '4') {
      if (playerInventory->multiInInventory(gloves, helmet, key)) {
        DriverRoom->exit();
        break;
        } else {
            std::cout << "You need your gloves and helmet" << std::endl;
        }
    } else {
      throw std::invalid_argument("Invalid Input");
    }
  }
}

void Game::mechanicsGarage() {
  std::string name = "Garage";
  ContainerRoom* Garage = new ContainerRoom(name);
  Inventory* playerInventory = new Inventory;
  Inventory* roomInventory = new Inventory;
  PasswordPuzzle* safe = new PasswordPuzzle();
  Tools* steeringWheel = new Tools("steeringWheel");
  Player* player = new Player();
  roomInventory->addObject(steeringWheel);
  Mechanic* mechanic = new Mechanic();
  TeamPrinciple* teamPrinciple = new TeamPrinciple();
  Teammate* teammate = new Teammate();
  while (true) {
    player->interactGarage();
    if (player->userInput == '1') {
      Garage->Look_around();

    } else if (player->userInput == '2') {
      if (safe -> displayPuzzleNew()) {
        std::cout << "You got the steering wheel" << std::endl;
        steeringWheel->pickUp(roomInventory, playerInventory);
      }

    } else if (player->userInput == '3') {
        mechanic -> conversation();

    } else if (player->userInput == '4') {
        teamPrinciple -> conversation();

    } else if (player->userInput == '5') {
        teammate -> conversation();

    } else if (player->userInput == '6') {
      if (playerInventory->inInventory(steeringWheel)) {
        Garage->exit();
        break;
        } else {
            std::cout << "You need your steering wheel" << std::endl;
        }
    } else {
      throw std::invalid_argument("Invalid Input");
    }
  }
}

void Game::mechanicsCarRoom() {
    std::string name = "Car_Room";
    std::string steeringWheel = "steeringWheel";
    CarRoom* car = new CarRoom(name, steeringWheel);
    char userInput;
    car -> enter();
    car -> Look_around();
    while (true) {
        std::cout << "Unlock the car, press 1" << std::endl;
        std::cin >> userInput;
        if (userInput == '1') {
            car -> unlockCar(steeringWheel);
            std::cout << "You have unlocked the car" << std::endl;
            break;
        } else {
            std::cout << "Please Unlock car" << std::endl;
        }
    }
    while (true) {
        std::cout << "Start the car, press 1" << std::endl;
        std::cin >> userInput;
        if (userInput == '1') {
            car -> startCar(steeringWheel);
            std::cout << "Vroom Vroom" << std::endl;
            break;
        } else {
            std::cout << "Please start car" << std::endl;
        }
    }
    car -> exit();
}

void Game::race() {
    std::string name = "RaceDescription";
    Race* race = new Race(name);
    EquationPuzzle* ep = new EquationPuzzle();
    RiddlePuzzle* rp = new RiddlePuzzle();
    MultipleChoicePuzzle* mp = new MultipleChoicePuzzle();
    while (true) {
      race -> readPuzzleClue("PuzzleRaceStart");
      if (ep -> displayPuzzle() == false) {
        std::cout << "Game over!\n";
        break;
      }
      race -> readPuzzleClue("PuzzlePass");
      if (rp -> displayPuzzle() == false) {
        std::cout << "Game over!\n";
        break;
      }
      if (mp -> displayPuzzle() == false) {
        std::cout << "Game over!\n";
        break;
      }
      race -> readPuzzleClue("PuzzleRunOverTurbo");
      if (race -> snailTrap() == false) {
        std::cout << "Game over!\n";
        break;
      }
      race -> winGame();
      break;
    }
}
