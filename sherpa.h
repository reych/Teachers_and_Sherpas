#ifndef SHERPA_H
#define SHERPA_H

#include "monster.h"
#include "player.h"
#include <string>

using namespace std;

class Sherpa: public Monster{
public:
    Sherpa(string name);
    void attack(Player* p, string& result);
    void specialMove(string& result);
    string taunt();
private:
    double _accuracy;
    string _taunt;
};

#endif