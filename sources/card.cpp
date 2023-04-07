/**
 * Implementation file of class "Card"
 */

#include <iostream>
#include "card.hpp"

using namespace std;


// "outline" constructor implementation:
Card :: Card (int number, string color, string shape){
    this ->number = number;
    this ->color = color;
    this ->shape = shape;
}