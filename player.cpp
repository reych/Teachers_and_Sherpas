#include "player.h"
#include "monster.h"

#include <string>
using namespace std;

Player::Player(string name){
	_name = name;

}

int Player::attack(){
	int attackVal=0;//implement attack
	return attackVal;
}

int Player::getHP(){
	return _health;
}
void Player::setHP(int health){
	_health = health;
}
string Player::getName(){
	return _name;
}
