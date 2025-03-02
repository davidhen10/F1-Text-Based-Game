#include <gtest/gtest.h>
#include "Puzzle.hpp"

class PuzzleTest : public ::testing::Test {
 protected:
    Puzzle puzzle;
};

TEST_F(PuzzleTest, puzzleConstructor) {
    EXPECT_NO_THROW(Puzzle());
}

TEST_F(PuzzleTest, playerDestructor) {
    EXPECT_NO_THROW(puzzle.~Puzzle());
}
