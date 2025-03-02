/**
 * @author Mackenzie Meyers [mackenzie.meyers@uleth.ca]
 * @date 2024-10
 */
#include "NPC.hpp"

Npc::Npc() {}

Npc::~Npc() {}

std::string Npc::getName(std::string Name) {
    name = Name;
    return name;
}

void Npc::talk(std::string Name) {
    std::ifstream file(Name);
    std::string line;
    try {
        while (getline(file, line))
            std::cout << line << std::endl;
        file.close();
    }
    catch(std::exception& e) {
        throw std::invalid_argument("Invalid Input");
    }
}

void Npc::conversation() {}

void Teammate::conversation() {
    talk("Data/TeammateTalk1.txt");
    std::cout << "What do you want to say: " << std::endl
    << "(1) WHAT DID YOU CHANGE THE PASSWORD TO" << std::endl
    << "(2) What did you change the password to?" << std::endl;
    std::cin >> userInput;
    if (userInput == '1') {
        talk("Data/TeammateTalkYell.txt");
    } else if (userInput == '2') {
        talk("Data/TeammateTalkNice.txt");
    } else {
      throw std::invalid_argument("Invalid Input");
    }
}

void Mechanic::conversation() {
    talk("Data/mechanicTalk.txt");
}

void TeamPrinciple::conversation() {
    talk("Data/TeamPrincipleTalk1.txt");
    std::cout << "What do you want to say: " << std::endl
    << "(1) YES" << std::endl
    << "(2) no" << std::endl;
    std::cin >> userInput;
    if (userInput == '1') {
        talk("Data/TeamPrincipleTalk2.txt");
    } else if (userInput == '2') {
        talk("Data/TeamPrincipleTalk3.txt");
    } else {
      throw std::invalid_argument("Invalid Input");
    }
}
