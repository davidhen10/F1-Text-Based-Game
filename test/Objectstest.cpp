#include "Clothing.hpp"
#include "Inventory.hpp"
#include "Tools.hpp"
#include "gtest/gtest.h"

TEST(testClothing, pickUpClothing) {
  Clothing* shirt = new Clothing("shirt");
  Inventory* exampleInventory1 = new Inventory();
  Inventory* exampleInventory2 = new Inventory();
  exampleInventory1->addObject(shirt);
  shirt->pickUp(exampleInventory1, exampleInventory2);
  EXPECT_TRUE(exampleInventory2->inInventory(shirt));
  delete shirt;
  delete exampleInventory1;
  delete exampleInventory2;
}
TEST(testClothing, putDownClothing) {
  Clothing* shirt = new Clothing("shirt");
  Inventory* exampleInventory1 = new Inventory();
  Inventory* exampleInventory2 = new Inventory();
  exampleInventory1->addObject(shirt);
  shirt->pickUp(exampleInventory1, exampleInventory2);
  shirt->putDown(exampleInventory2);
  EXPECT_FALSE(exampleInventory2->inInventory(shirt));
  delete shirt;
  delete exampleInventory1;
  delete exampleInventory2;
}

TEST(testInventory, printTest) {
  testing::internal::CaptureStdout();
  Clothing* shirt = new Clothing("shirt");
  Inventory* exampleInventory1 = new Inventory();
  exampleInventory1->addObject(shirt);
  exampleInventory1->printInventory();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "shirt, end of inventory\n");
  delete shirt;
  delete exampleInventory1;
}

TEST(testInventory, removeTest) {
  testing::internal::CaptureStdout();
  Clothing* shirt = new Clothing("shirt");
  Inventory* exampleInventory1 = new Inventory();
  exampleInventory1->addObject(shirt);
  exampleInventory1->removeObject(shirt);
  exampleInventory1->printInventory();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "end of inventory\n");
  delete shirt;
  delete exampleInventory1;
}

TEST(testTools, pickUpTool) {
  Tools* tool = new Tools("tool");
  Inventory* exampleInventory1 = new Inventory();
  Inventory* exampleInventory2 = new Inventory();
  exampleInventory1->addObject(tool);
  tool->pickUp(exampleInventory1, exampleInventory2);
  EXPECT_TRUE(exampleInventory2->inInventory(tool));
  delete tool;
  delete exampleInventory1;
  delete exampleInventory2;
}

TEST(testTools, putDownTool) {
  Tools* tool = new Tools("tool");
  Inventory* exampleInventory1 = new Inventory();
  Inventory* exampleInventory2 = new Inventory();
  exampleInventory1->addObject(tool);
  tool->pickUp(exampleInventory1, exampleInventory2);
  tool->putDown(exampleInventory2);
  EXPECT_FALSE(exampleInventory2->inInventory(tool));
  delete tool;
  delete exampleInventory1;
  delete exampleInventory2;
}
