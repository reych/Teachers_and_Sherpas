#ifndef TA_H
#define TA_H

#include "monster.h"
#include "player.h"
#include <string>

using namespace std;

class TA : public Monster{
public:
    TA(string name);
    void attack(Player* p, string& result);
    void specialMove(string& result);
    string taunt();
private:
    double _accuracy;
    string _taunt;
};

#endif