#include "Environment.hpp"

/**
 * @file Environment.cpp
 * @brief Implements the Environment.
 * @author Jack. S
 */

Environment::Environment(const std::string&name)
    : name(name) {}

void Environment::openTextFile(const std::string& filepath) const {
    std::ifstream file(filepath);
    try {
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    } catch (const std::exception& e) {
        std::cout << "Unable to open file: " << filepath << "\n";
    }
}

void Environment::displayDescription() const {
    openTextFile("Data/" + name + ".txt");
}

void Environment::readPuzzleClue(std::string title) const {
    openTextFile("Data/" + title + ".txt");
}

void Environment::displayHelp() const {
    openTextFile("Data/Help.txt");
}
