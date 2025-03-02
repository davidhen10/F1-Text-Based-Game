#include <gtest/gtest.h>

#include "Player.hpp"


class PlayerTest : public ::testing::Test {
 protected:
    Player player;
};

TEST_F(PlayerTest, playerConstructor) {
    EXPECT_NO_THROW(Player());
}

TEST_F(PlayerTest, playerDestructor) {
    EXPECT_NO_THROW(player.~Player());
}





