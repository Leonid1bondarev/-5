#include <iostream>
#include <string>
#include "machine.h"
using namespace std;
namespace work
{
	Machine::Machine(string name, int Capacityofcup, double Capacityofliquid)
	{
		machineName = name;
		machineCapacityofcup = Capacityofcup;
		machineCapacityofliquid = Capacityofliquid;
	}

	Machine::Machine(int Capacityofcup)
	{
		machineCapacityofcup = Capacityofcup;
	}

	Machine::Machine(double Capacityofliquid)
	{
		machineCapacityofliquid = Capacityofliquid;
	}

	const string Machine::getname() const
	{
		return machineName;
	}

	void Machine::setname(string name)
	{
		machineName = name;
	}

	const int Machine::getmachineCapacityofcup() const
	{
		return machineCapacityofcup;
	}

	void Machine::setmachineCapacityofcup(int Capacityofcup)
	{
		if (Capacityofcup > 0)
			machineCapacityofcup = Capacityofcup;
		else
			cout << "Нет нет нет, такое значение задать нельзя";
	}

	const double Machine::getmachinecapacityofliquid() const
	{
		return machineCapacityofliquid;
	}

	void Machine::setmachinecapacityofliquid(double Capacityofliquid)
	{
		if (Capacityofliquid > 0)
			machineCapacityofliquid = Capacityofliquid;
		else
			cout << "Нет нет нет, такое значение задать нельзя";
	}
	const double Machine::getemptycapacityofliquid() const
	{
		return (machineCapacityofliquid-(machineCapacityofliquid- cupcounter));
	}
	void Machine::filltotalcups(Cups* fillcup)
	{
		if (cupcounter >= machineCapacityofcup)
		{
			cout << "Кружка переполнена" << endl;
		}
		else
		{
			content1 = fillcup;
			++cupcounter;
		}
	}
	ostream& operator<<(ostream& output, const Machine& m)
	{
		output << "Осталось стаканов " << m.machineCapacityofcup << endl
			<< "Осталось жидкости для кофе " << m.machineCapacityofliquid << endl;
		return output;
	}


	
	Cups::Cups(int size, int cost, int counter)
	{
		sizeofcup = size;
		costofcup = cost;
		coffeecounter = counter;
	}

	Cups::Cups(int size)
	{
		sizeofcup = size;
	}

	Cups::Cups(const Cups& other)
	{
		this->sizeofcup = other.sizeofcup;
		this->costofcup = other.costofcup;
		this->coffeecounter = other.coffeecounter;
	}

	const int Cups::getsizeofcup() const
	{
		return sizeofcup;
	}

	void Cups::setsizeofcup(int size)
	{
		sizeofcup = size;
	}

	const int Cups::getcostofcup() const
	{
		return costofcup;
	}

	void Cups::setcostofcup(int cost)
	{
		costofcup = cost;
	}

	void Cups::fillCup(Coffee* addCoffee)
	{
        if (coffeecounter >= sizeofcup)
		{
			cout << "Кружка переполнена" << endl;
		}
		else
		{
			content = addCoffee;
			++coffeecounter;
		}
	}

	void Cups::outcup(Coffee* outcoffee)
	{
		if (coffeecounter <= 0)
		{
			cout << "Кружка кружка пуста" << endl;
		}
		else
		{
			--coffeecounter;
		}
	}

	Coffee::Coffee(string name, int size, int cost)
	{
		nameofcoffee = name;
		volumeofliquid = size;
		costofcoffee = cost;
	}

	Coffee::Coffee(string name, int size)
	{
		nameofcoffee = name;
		volumeofliquid = size;
	}

	Coffee::Coffee(string name)
	{
		nameofcoffee = name;
	}

	const string Coffee::getnameofcoffee() const
	{
		return nameofcoffee;
	}

	void Coffee::setnameofcoffee(string name)
	{
		nameofcoffee = name;
	}

	const int Coffee::getvolumeofliquid() const
	{
		return volumeofliquid;
	}

	void Coffee::setvolumeofliquid(int volume)
	{
		volumeofliquid = volume;
	}

	const int Coffee::getcostofcoffee() const
	{
		return costofcoffee;
	}

	void Coffee::setcostofcoffee(int cost)
	{
		costofcoffee = cost;
	}

	void Coffee::coffeeInfo()
	{
		cout << "Наименование: " << nameofcoffee << endl;
		cout << "Рекомендуемая порция: " << volumeofliquid << endl;
		cout << "Цена: " << costofcoffee << endl;
	}

}