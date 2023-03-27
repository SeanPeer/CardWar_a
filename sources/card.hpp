#ifndef CARD_HPP
#define CARD_HPP

#include <string>
using namespace std;
namespace ariel
{

    // enum class Type
    // {
    //     Hearts,
    //     Diamonds,
    //     Clubs,
    //     Spades
    // };

    // enum class Value
    // {
    //     TWO = 2,
    //     THREE,
    //     FOUR,
    //     FIVE,
    //     SIX,
    //     SEVEN,
    //     EIGHT,
    //     NINE,
    //     TEN,
    //     JACK,
    //     QUEEN,
    //     KING,
    //     ACE

    // };

    class Card
    {
    public:
        Card(int val, string typ);
        //~Card();

        int getValue();
        std::string getName();
        string getType() const;

    private:
        int value;
        string type;
    };
}

#endif