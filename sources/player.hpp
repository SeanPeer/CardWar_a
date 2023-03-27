#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <vector>
#include <string>
#include "card.hpp"
using namespace std;
namespace ariel
{

    class Player
    {

    public:
        Player(std::string);

        int stacksize();
        int cardesTaken();
        string getName();
        void removeCard();
        string lastCardPlayed();

    private:
        std::string _name;
    };
}
#endif