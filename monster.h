#ifndef MONSTER_H
#define MONSTER_H

#include "player.h"
#include <string>
using namespace std;


class Monster
{
public:
	Monster(string name);
	virtual void attack(Player* p, string& result);
	virtual void specialMove(string& result);
	virtual string taunt();

	string getName();
	int getHP();
	void setHP(int health);

protected:
	int _health;
	int _attackPower;
	string _name;
	string _type;
};

#endif 


