#ifndef CARD_H
#define CARD_H

/**
 * Header file of class "Card"
 */

#include <iostream>
using namespace std;

class Card 
{
    
private: 
    int number; //declaration of variables
    std::string color;
    string shape;
    
public:
    //constructors
    Card(){number=0;color="null";shape="null";}; //default(empty) constructor
    Card(int number, string color, string shape); // "outline" constructor

    //Functions 
    void setNumber(int number);
    void setColor(string color);
    void setShape(string shape);
    int getNumber();
    string getColor();
    string getShape();
    string toString();
        

};

#endif