#include "doctest.h"
#include <stdexcept>
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
#include <cassert>

using namespace ariel;
using namespace std;



TEST_CASE ("###Check fuction of prints work well###"){
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1,p2);
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.printLastTurn());
    CHECK_NOTHROW(game.printWiner());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());
}


TEST_CASE("###Cards For Each Player At start of Game###") {

    Player p1("Alice");
    Player p2("Bob");
    Game game(p1,p2); 


    CHECK(p1.stacksize() == 26); //in the start of the game each player have 26 cards
    CHECK(p2.stacksize() == 26);

    CHECK(p1.cardesTaken() == 0); //in the start of the game each player didnt won a card
    CHECK(p2.cardesTaken() == 0);

    CHECK(p1.stacksize() + p2.stacksize() + p1.cardesTaken() + p2.cardesTaken() == 52 );

}


TEST_CASE("###Start The Game###"){
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1,p2);

    int count=5;
    for (int i = 0; i < count; i++) {
        game.playTurn();

    }

    CHECK(p1.stacksize() <= 21); //prints the amount of cards left. should be 21 but can be less if a draw was played
    CHECK(p2.stacksize() <= 21); //prints the amount of cards left. should be 21 but can be less if a draw was played


    
}



TEST_CASE("###The Game Is OVER###") {
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1,p2);
    
    game.playAll();
    CHECK(p1.cardesTaken() + p2.cardesTaken() == 52);
    CHECK(p1.stacksize() == 0);
    CHECK(p2.stacksize() == 0);

    CHECK_NOTHROW(game.printLastTurn());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());
    CHECK_NOTHROW(game.printWiner());
    CHECK(p1.stacksize() + p2.stacksize() + p1.cardesTaken() + p2.cardesTaken() == 52 );



}




TEST_CASE ("###Not Same Person###"){
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1,p2);
    CHECK_THROWS(Game(p1,p1)); 
    CHECK_THROWS(Game(p2,p2)); 
}



