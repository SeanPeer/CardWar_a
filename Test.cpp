#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "doctest.h"
using namespace std;

#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
using namespace ariel;

TEST_CASE("1 - Test player creation")
{
    Player p1("Sean");
    Player p2("Peer");

    CHECK(p1.getName() == "Sean");
    CHECK(p1.getName() == "Peer");
}

TEST_CASE("2 - Test game dealing cards with the right amount")
{
    Player p1("Sean");
    Player p2("Peer");

    Game game(p1, p2);

    game.dealCards();

    CHECK_EQ(p1.stacksize(), 26);
    CHECK_EQ(p2.stacksize(), 26);
}

TEST_CASE("3 - Testing stack size after 1 round  ")
{
    Player p1("Sean");
    Player p2("Peer");

    Game game(p1, p2);
    game.dealCards();

    game.playTurn();

    CHECK_NE(p1.stacksize(), 26);
    CHECK_NE(p2.stacksize(), 26);
}

TEST_CASE("4 - Testing stack size after 26 - making sure that this is not a 1 sided game")
{
    Player p1("Sean");
    Player p2("Peer");

    Game game(p1, p2);
    game.dealCards();
    for (int i = 0 ; i < 26 ; i++)
    {
        game.playTurn();
        CHECK_NE(p1.stacksize(), 26-i);
        CHECK_NE(p2.stacksize(), 26-i);
    }

 
}

