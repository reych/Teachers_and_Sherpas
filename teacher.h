#ifndef TEACHER_H
#define TEACHER_H

#include "monster.h"
#include "player.h"
#include <string>

using namespace std;

class Teacher : public Monster{
public:
	Teacher(string name);
	void attack(Player* p, string& result);
	void specialMove(string& result);
	string taunt();
private:
	double _accuracy;
	string _taunt;
};

#endif