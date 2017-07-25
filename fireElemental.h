

#ifndef __FIREELEMENTAL_H__
#define __FIREELEMENTAL_H__

#include "Card.h"
#include <vector>
#include <string>
#include <memory>
#include "Minion.h"
using namespace std;

class FireElemental: public Minion { //concrete card

public:
    FireElemental(int p);
    void print() override;
    void useAbility(std::shared_ptr<Board> board=nullptr, std::shared_ptr<Minion> minion=nullptr);
};
#endif
