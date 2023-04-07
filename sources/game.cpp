#include <iostream>
#include "game.hpp"
#include "player.hpp"

using namespace ariel;


// "outline" constructor implementation:

Game :: Game (Player p1, Player p2){
    this -> p1 = p1;
    this -> p2 = p2;
}

/*
###playTurn Function
play 1 turn
*/
void Game :: playTurn(){

}

/*
###printLastTurn Function
// print the last turn stats. For example:
// Alice played Queen of Hearts Bob played 5 of Spades. Alice wins.
// Alice played 6 of Hearts Bob played 6 of Spades. Draw. Alice played 10 of Clubs Bob played 10 of Diamonds. draw. Alice played Jack of Clubs Bob played King of Diamonds. Bob wins.
*/
void Game :: printLastTurn(){

}
/*
###playAll Function
//playes the game untill the end
*/
void Game :: playAll(){

}
/*
###printWiner Function
// prints the name of the winning player
*/
void Game :: printWiner(){

}
/*
###printLog Function
// prints all the turns played one line per turn (same format as game.printLastTurn())
*/
void Game :: printLog(){

}

/*
###printStats Function
// for each player prints basic statistics: win rate, cards won, <other stats you want to print>. Also print the draw rate and amount of draws that happand. (draw within a draw counts as 2 draws. )*/
void Game :: printStats(){

}