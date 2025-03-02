/**
 * @author Jonah Friesen jonah.friesen@uleth.ca
 * @date 2024-12
 */
#ifndef CLOTHING_HPP
#define CLOTHING_HPP
#include <string>

#include "Objects.hpp"
/**
 * @brief A concrete class for handling clothing
 */
class Clothing : public Objects {
 public:
  /**
   * @brief Constructor
   */
  Clothing(std::string);
  /**
   * @brief Destructor
   */
  virtual ~Clothing();
  /**
   * @brief puts on and takes off the clothing item
   */
  void use() override;
  /**
   * @brief checks if an item is being worn
   */
  bool isWearingItem();

 private:
  /**
   * @brief bool for if the item is being worn or not
   */
  bool isWorn;
};

#endif
