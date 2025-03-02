#include <gtest/gtest.h>
#include "Inputpuzzle.hpp"

class InputPuzzleTest : public ::testing::Test {
 protected:
    Inputpuzzle ip;
};

TEST_F(InputPuzzleTest, constructorTest) {
    EXPECT_NO_THROW(Inputpuzzle());
}

TEST_F(InputPuzzleTest, destructorTest) {
    EXPECT_NO_THROW(ip.~Inputpuzzle());
}

TEST_F(InputPuzzleTest, displayPuzzleTest) {
    EXPECT_TRUE(ip.displayPuzzle());
}
