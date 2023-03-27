#ifndef GAME_HPP
#define GAME_HPP

#include "player.hpp"
#include "card.hpp"
#include <vector>
using namespace std;
namespace ariel
{

    class Game
    {
    private:
        Player _player1, _player2;

    public:
        Game(Player player1, Player player2);
        //~Game();

        void playTurn();
        void printLastTurn();
        void playAll();
        string printWiner();
        string printLog();
        string printStats();
        void dealCards();
        void shuffleDeck();
       
       
    };
}
#endif