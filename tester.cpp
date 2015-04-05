#include "item.h"
#include "rock.h"
#include <string>
#include <iostream>
using namespace std;

int main(){
	string des = "Rocks are greeeaaat";
	Rock* r = new Rock(des);
	string name = "Bob";
	string result;
	Player* p = new Player(name);
	r->activate(p, result);
	cout<<result;
	return 0;
}