#include "monster.h"

using namespace std;

Monster::Monster(string name){
	_name = name;
	_health = 50;
}

string Monster::getName(){
	return _name;
}

int Monster::getHP(){
	return _health;
}

void Monster::setHP(int health){
	_health = health;
}