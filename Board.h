
#ifndef __BOARD_H__
#define __BOARD_H__

#include "Player.h"
//#include "Card.h"
//#include "Ability.h"
#include <iostream>
#include <vector>
#include <string>
#include <exception>
#include <memory>
using namespace std;

class Minion;
class Ritual;
class Card;

class Board {
    public:
        int owner = 1;
        vector<shared_ptr<Minion>> minionSlots;
        vector<string> grave;
        shared_ptr<Ritual> myRitual;


        Board();
        Board(int owner);
        //resurrect the top minion in graveyard
        shared_ptr<Card> resurrect();
        //place a minion on the board
        void placeMinion(shared_ptr<Card> m);
        //place a ritual on the board
        void placeRitual(shared_ptr<Card> r);
        //place a died minion in the grave
        void placeGrave(shared_ptr<Card> m);
};

#endif