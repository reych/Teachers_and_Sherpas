#include "item.h"
#include "monster.h"
#include "player.h"
#include <string>
using namespace std;

class Rock : Item{
	Rock(string& description) : Item()
	{ _name = "rock"; 
		_description = description;}
	void activate(Player* p, string& result){
		result = "Nothing happens!!!";
		//some effect
	}
	/*void activate(Monster* m, string& result){
		m -> setHP(m->getHP()-5);
		result = "The monster got hit by a rock";
	}
*/
};