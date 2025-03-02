/**
 * @file ContainerRoomTest.cpp
 * @brief Tests the methods in ContainerRoom.
 * @author Jack. S
 */
#include "ContainerRoom.hpp"
#include "gtest/gtest.h"

class ContainerRoomTest : public ::testing::Test {
 protected:
     ContainerRoom room{"TestRoom"};
};

TEST_F(ContainerRoomTest, EnterRoom) {
    testing::internal::CaptureStdout();
    room.enter();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("You enter TestRoom.") != std::string::npos);
}

TEST_F(ContainerRoomTest, ExitRoom) {
    testing::internal::CaptureStdout();
    room.exit();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("You've exited TestRoom.") != std::string::npos);
}

TEST_F(ContainerRoomTest, LookAroundAndSeeNothing) {
    testing::internal::CaptureStdout();
    room.Look_around();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("There are no items here. ") != std::string::npos);
}
