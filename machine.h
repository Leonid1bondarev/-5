#pragma once
#include <iostream>
#include <string>
using namespace std;
namespace work
{
	class Machine
	{
	public:
		Machine(string name, int Capacityofcup, double Capacityofliquid);
		Machine(int Capacityofcup);
		Machine(double Capacityofliquid);
		~Machine();

		const  string getname() const;
		void setname(string name);


		const int getmachineCapacityofcup() const;
		void setmachineCapacityofcup(int Capacityofcup);

		const double getmachinecapacityofliquid() const;
		void setmachinecapacityofliquid(double Capacityofliqued);

		const double getemptycapacityofliquid() const;

		void filltotalcups(Cups* fillcup);

		Cups* content1;

		friend ostream& operator<<(ostream& output, const Machine& m);

		
	private:
		string machineName;
		int machineCapacityofcup = 100;
		double machineCapacityofliquid = 1000;
		int cupcounter;
	};
	class Cups
	{
	public:
		Cups(int size, int cost, int counter);
		Cups(int size);
		Cups(const Cups& other);
		~Cups();

		const int getsizeofcup() const;
		void setsizeofcup(int size);

		const int getcostofcup() const;
		void setcostofcup(int cost);

		Coffee* content;

		void fillCup(Coffee* addCoffee);
		void outcup(Coffee* outcoffee);


	private:
		int sizeofcup;
		int costofcup;
		int coffeecounter;
	};
	class Coffee
	{
	public:
		Coffee(string name, int size, int cost);
		Coffee(string name, int size);
		Coffee(string name);
		~Coffee();

		const string getnameofcoffee() const;
		void setnameofcoffee(string name);


		const int getvolumeofliquid() const;
		void setvolumeofliquid(int volume);

		const int getcostofcoffee() const;
		void setcostofcoffee(int cost);

		void coffeeInfo();

	private:
		string nameofcoffee;
		int volumeofliquid;
		int costofcoffee;
	};
}