#include "player.hpp"
#include "card.hpp"
#include "game.hpp"
#include <vector>

using namespace std;
using namespace ariel;

Game::Game(Player player1, Player player2) : _player1(player1), _player2(player2)
{

};

void Game::playTurn(){}
void Game::printLastTurn(){}
void Game::playAll(){}
void Game::dealCards(){}
void Game::shuffleDeck(){}
string Game::printWiner() { return ""; }
string Game::printLog() { return ""; }
string Game::printStats() { return ""; }
