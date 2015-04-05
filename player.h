#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
using namespace std;


class Player{
public:
	Player(string name);
	int attack();
	int getHP();
	void setHP(int health);
	string getName();

private:
	string _name;
	int _health;
	//vector<Item*> inventory;
	vector<string> attacks;
};

#endif