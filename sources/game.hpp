#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include "player.hpp"

/**
 * Header file of class "Game"
 */


namespace ariel{

class Game {


public:
    Player p1;
    Player p2;


    //constructors
    Game(Player p1, Player p2);  // "outline" constructor


    //Functions of the game
    void playTurn();
    void printLastTurn();
    void playAll();
    void printWiner();
    void printLog();
    void printStats();
    string toString();


};
}

#endif