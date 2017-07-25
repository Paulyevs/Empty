
#ifndef __BANISH_H__
#define __BANISH_H__

#include "Card.h"
#include <vector>
#include <string>
#include <memory>
#include "Spell.h"
using namespace std;

class Banish: public Spell { //concrete card

public:
    Banish(int p);
    void cast(shared_ptr<Board> myBoard,shared_ptr<Card> target=nullptr, shared_ptr<Board> oppBoard=nullptr) override;
};
#endif
