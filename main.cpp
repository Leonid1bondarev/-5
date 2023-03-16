#include <iostream>
#include <string>
#include "machine.h"
using namespace std;
using namespace work;
int main()
{
	Coffee* americano = new Coffee("americano");
	Coffee* cappuccino = new Coffee("cappuccino");
	Cups* cup = new Cups(100);//количество кофе, которое помещается в стакане
	cup->fillCup(americano);
	cup->outcup(americano);
	Machine* machine = new Machine(5000.5);//количество кофе, которое помещается в кофемашине
	machine->filltotalcups(cup);
	cout << machine->getemptycapacityofliquid() << endl;	
}