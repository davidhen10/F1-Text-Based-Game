#include "Clothing.hpp"
#include "Interactpuzzle.hpp"
#include "Inventory.hpp"
#include "gtest/gtest.h"

TEST(InteractPuzzleTest, correctObjectTest) {
  Interactpuzzle* testpuz = new Interactpuzzle();
  Clothing* shirt = new Clothing("shirt");
  Inventory* testInven = new Inventory();
  testInven->addObject(shirt);
  EXPECT_TRUE(testpuz->correctObject(testInven, shirt));
  delete testpuz;
  delete shirt;
  delete testInven;
}
