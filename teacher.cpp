#include "teacher.h"
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>

using namespace std;

Teacher::Teacher(string name):Monster(name){
	_type = "teacher";
	_health = 100;
	_accuracy = .8;
	_attackPower = 4;
}

void Teacher::attack(Player* p, string& result){
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
				result = _name + " updates the assignment page! You haven't finished the previous project yet!";
			}
			else if(moveType == 1){
				p->setHP(p->getHP() - damageDealt);
				result = _name + " furiously throws F's at you";
			}
			else{
				p->setHP(p->getHP() - damageDealt);
				result = _name + " smiles knowingly and presents you the midterm";
			}
		}
	}
}

void Teacher::specialMove(string& result){
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

string Teacher::taunt(){
	return _taunt;
}


