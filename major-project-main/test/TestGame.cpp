#include "Game.hpp"
#include "gtest/gtest.h"

class GameTest : public ::testing::Test {
 protected:
  Game game;
};

TEST_F(GameTest, gameConstructor) { EXPECT_NO_THROW(Game()); }

TEST_F(GameTest, gameDestructor) { EXPECT_NO_THROW(game.~Game()); }

TEST_F(GameTest, startGame) {
  testing::internal::CaptureStdout();
  game.startGame();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_TRUE(output.find("Welcome to F1 Adventure!") != std::string::npos);
}

TEST_F(GameTest, describeGame) {
  testing::internal::CaptureStdout();
  game.describeGame();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_TRUE(output.find("You are a young and upcoming racer ") !=
              std::string::npos);
}
