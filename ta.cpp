#include "ta.h"
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>

using namespace std;

TA::TA(string name):Monster(name){
    //the stats are slightly lower than those of the teacher
    _type = "ta";
    _health = 90;
    _accuracy = .65;
    _attackPower = 3;
}

void TA::attack(Player* p, string& result){
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
                result = _name + " is having a bad day and decides to unleash anger on you by grading harsher than usual.";
            }
            else if(moveType == 1){
                p->setHP(p->getHP() - damageDealt);
                result = _name + " assigns unnecessary quizzes and homework and elicits forceful participation... help! This is an abuse of power! This is tyranny!";
            }
            else{
                p->setHP(p->getHP() - damageDealt);
                result = _name + " smirks evilly, \" you know, I'm actually the one who gets the REAL power in determining your grade .\" ";
            }
        }
    }
}

void TA::specialMove(string& result){
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

string TA::taunt(){
    return _taunt;
}


