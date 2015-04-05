#ifndef ITEM_H
#define ITEM_H

#include "player.h"
#include "monster.h"
#include <string>
#include <fstream>
using namespace std;

struct Item{
	Item() {
	}
	virtual void activate(Player* p, string& result)=0;
	//virtual void activate(Monster* m, string& result)=0;

	void dump(ostream& ofile) const{
    	ofile<<_name<<'\n'<<_description;
  	}
	string _name;
	string _description;

};
#endif
