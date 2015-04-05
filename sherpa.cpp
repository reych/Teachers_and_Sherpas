#include "sherpa.h"
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>

using namespace std;

Sherpa::Sherpa(string name):Monster(name){
    //even lower stats!!
    _type = "sherpa";
    _health = 50;
    _accuracy = .50;
    _attackPower = 1;
}

void Sherpa::attack(Player* p, string& result){
    srand(time(0));
    int hitChance = rand();
    double threshold = RAND_MAX * _accuracy;
    if(hitChance <= threshold){
        int damageDealt = (rand() % _attackPower + 1) * 10;
        if(damageDealt > p->getHP()){
            result = "Player Defeated";
        }
        else{
            int moveType = rand()%3;
            if(moveType == 0){
                p->setHP(p->getHP() - damageDealt);
                result = _name + " whispers in your ear \" I got an A in this class, unlike some idiot here...\" ";
            }
            else if(moveType == 1){
                p->setHP(p->getHP() - damageDealt);
                result = _name + " grades your test wayyyy too harshly.";
            }
            else{
                p->setHP(p->getHP() - damageDealt);
                result = _name + " hits you... because come on they're your peers, at least they know how to fight in a normal and civilized manner.";
            }
        }
    }
}

void Sherpa::specialMove(string& result){
    srand(time(0));
    stringstream ss;
    ss<<_name<< " calls upon the Kernel God..."<<'\n';
    int intelligence = rand()%10 + 1;
    ss<<"| Intelligence: +"<< intelligence <<'\n';
    int increaseAttack = rand()%5 + 1;
    if(_attackPower + increaseAttack < 10){
        _attackPower += increaseAttack;
        ss<<"| Attack Power: +"<< increaseAttack <<'\n';
    }
    else{
        ss<<"| Attack Power: MAX"<<'\n';
    }
    int sexiness = rand()%1000;
    ss<<"| Sexiness: +"<< sexiness <<'\n';
    ss<<"| Fanbase: +1"<<'\n';
    
    result = ss.str();
}

string Sherpa::taunt(){
    return _taunt;
}


