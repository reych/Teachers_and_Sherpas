#ifndef PLAYER_H
#define PLAYER_H

#include "monster.h"
#include <string>
#include <vector>
using namespace std;

class Player{
public:
	Player(string name);
	void attack(Monster* m);
	int getHP();
	int setHP(int health);
	string getName();

private:
	string _name;
	int _health;
	//vector<Item*> inventory;
	vector<string> attacks;
};

#endif