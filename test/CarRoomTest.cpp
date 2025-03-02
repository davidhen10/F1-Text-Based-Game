/**
 * @file CarRoomTest.cpp
 * @brief Tests the methods in Car room.
 * @author Jack. S
 */
#include "CarRoom.hpp"
#include "gtest/gtest.h"

class CarRoomTest : public ::testing::Test{
 protected:
     CarRoom carRoom{"CarRoom", "Key"};
};

TEST_F(CarRoomTest, EnterCarRoom) {
    testing::internal::CaptureStdout();
    carRoom.enter();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("You enter.. CarRoom") != std::string::npos);
}

TEST_F(CarRoomTest, ExtCarRoomWhenLocked) {
    testing::internal::CaptureStdout();
    carRoom.exit();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("You can't leave yet.") != std::string::npos);
}

TEST_F(CarRoomTest, ExitCarRoomWhenUNLCOKED) {
    carRoom.unlockCar("Key");
    testing::internal::CaptureStdout();
    carRoom.exit();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Time to Race!") != std::string::npos);
}

TEST_F(CarRoomTest, LookAroundCarRoom) {
    testing::internal::CaptureStdout();
    carRoom.Look_around();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("You look aroundCarRoom") != std::string::npos);
}

TEST_F(CarRoomTest, UnlockCar) {
    EXPECT_TRUE(carRoom.unlockCar("Key"));
    EXPECT_FALSE(carRoom.unlockCar("WrongItem"));
}

// TEST_F(CarRoomTest, StartCar) {
//     carRoom.unlockCar("Key");
//     carRoom.putOnItem("Key");
//     EXPECT_TRUE(carRoom.startCar("Key"));
// }
