/**
 * @file RaceTest.cpp
 * @brief Tests the methods in Race
 * @author Jack. S
 */
#include <gtest/gtest.h>
#include "Race.hpp"

class RaceTest : public ::testing::Test {
 protected:
     Race race{"Test Track"};
};

TEST_F(RaceTest, EnterRace) {
    testing::internal::CaptureStdout();
    race.enter();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("You enter Test Track.") != std::string::npos);
}

TEST_F(RaceTest, ExitRace) {
    testing::internal::CaptureStdout();
    race.exit();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("You've exited Test Track.") != std::string::npos);
}

TEST_F(RaceTest, LookAroundRace) {
    testing::internal::CaptureStdout();
    race.Look_around();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("You look around Test Track") != std::string::npos);
}

TEST_F(RaceTest, PlayerNotDied) {
    EXPECT_FALSE(race.playerDied());
}

TEST_F(RaceTest, WinGame) {
    testing::internal::CaptureStdout();
    race.winGame();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("You won the race!! Congratulations")
     != std::string::npos);
    EXPECT_TRUE(output.find("Thank you for playing!") != std::string::npos);
}
