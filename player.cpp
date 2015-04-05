#include "player.h"
#include "monster.h"

#include <string>
using namespace std;

Player::Player(string name){
	_name = name;

}

void Player::attack(Monster* m){
	//attack power, rand
}

int Player::getHP(){
	return _health;
}
int Player::setHP(int health){
	_health = health;
}
string Player::getName(){
	return _name;
}
