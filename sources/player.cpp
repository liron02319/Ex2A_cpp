/**
 * Implementation file of class "Player"
 */
#include "player.hpp"
#include <iostream>
#include <string>

using namespace std;

// "outline" constructor implementation:
Player :: Player(string name){
    this ->name = name;
}

int Player :: stacksize(){
    return 26;
}

int Player :: cardesTaken(){
    return 0;
}


