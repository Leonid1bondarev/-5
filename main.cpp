#include <iostream>
#include <string>
#include "machine.h"
using namespace std;
using namespace work;
int main()
{
	Coffee* americano = new Coffee("americano");
	Coffee* cappuccino = new Coffee("cappuccino");
	Cups* cup = new Cups(100);//���������� ����, ������� ���������� � �������
	cup->fillCup(americano);
	cup->outcup(americano);
	Machine* machine = new Machine(5000.5);//���������� ����, ������� ���������� � ����������
	machine->filltotalcups(cup);
	cout << machine->getemptycapacityofliquid() << endl;	
}