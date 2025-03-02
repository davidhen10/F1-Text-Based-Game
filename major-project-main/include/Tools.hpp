/**
 * @author Jonah Friesen jonah.friesen@uleth.ca
 * @date 2024-12
 */
#ifndef TOOLS_HPP
#define TOOLS_HPP
#include <string>

#include "Objects.hpp"
/**
 * @brief A concrete class for handling tools
 */
class Tools : public Objects {
 public:
  /**
   * @brief Constructor
   * @param The tools name
   */
  Tools(std::string);
  /**
   * @brief destructor
   */
  virtual ~Tools();
  /**
   * @brief Overridden use function, displays flavor text.
   */
  void use() override;
};

#endif
