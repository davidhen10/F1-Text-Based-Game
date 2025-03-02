/**
 * @author Mackenzie Meyers [mackenzie.meyers@uleth.ca]
 * @date 2024-10
 */
#ifndef NPC_HPP
#define NPC_HPP
#include <string>
#include <fstream>
#include <iostream>

/**
* @class Npc NPC.hpp "NPC.hpp"
* @brief This class handles the NPC talking and coversations
*/

class Npc {
 public:
/**
* @brief Default constructor
*/
    Npc();
/**
* @brief Variable used to store user input
*/
    char userInput;
/**
* @brief Default Destructor, virtual for inheritance
*/
    virtual ~Npc();
/**
* @brief function talk that opens a text file
* @param Name the name of the text file
*/
    virtual void talk(std::string Name);
/**
* @brief saves name of the NPC
* @param Name the name of the NPC
*/
    std::string getName(std::string Name);
/**
* @brief uses talk() to create a conversation while using user input
*/
    virtual void conversation();

 private:
/**
* @brief Variable used to store Npc name
*/
    std::string name;
};

/**
* @class Teammate NPC.hpp "NPC.hpp"
* @brief This class handles the Teammate coversations
*/
class Teammate : public Npc {
 public:
/**
* @brief overriden function from base class Npc
*/
  void conversation();
};

/**
* @class Mechanic NPC.hpp "NPC.hpp"
* @brief This class handles the Mechanic coversations
*/
class Mechanic : public Npc {
 public:
/**
* @brief overriden function from base class Npc
*/
  void conversation();
};

/**
* @class TeamPrinciple NPC.hpp "NPC.hpp"
* @brief This class handles the Team Principle coversations
*/
class TeamPrinciple : public Npc {
 public:
/**
* @brief overriden function from base class Npc
*/
  void conversation();
};

#endif
