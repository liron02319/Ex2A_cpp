#ifndef PLAYER_H
#define PLAYER_H

/**
 * Header file of class "Player"
 */

#include <iostream>
#include <string>
using namespace std;

class Player
{

private: 
    string name;


public:
    //constructors
    Player() {  name="null"; }    //default(empty) constructor
    Player(string name);  // "outline" constructor


    //Functions 
    string getName();
    void setName(string name);
    int stacksize(); 
    int cardesTaken(); 
    string toString();
 

};
#endif
