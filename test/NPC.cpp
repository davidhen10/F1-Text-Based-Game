/**
 * @author Mackenzie Meyers [mackenzie.meyers@uleth.ca]
 * @date 2024-10
 */
#include <gtest/gtest.h>
#include "NPC.hpp"

TEST(TestNPC, setGetNameTest) {
    Npc npc;
    EXPECT_EQ(npc.getName("Test"), "Test");
}

TEST(TestNPC, talkTEST) {
    Npc npc;
    std::string name = "Data/test.txt";
    EXPECT_NO_THROW(npc.talk(name));
}

TEST(TestNPC, conversationTEST) {
    Npc npc;
    EXPECT_NO_THROW(npc.conversation());
}

TEST(TestMechanic, conversationTEST) {
    Mechanic npc;
    npc.conversation();
    EXPECT_NO_THROW(npc.talk("Data/mechanicTalk.txt"));
}
