#ifndef KELTHUZAD_H
#define KELTHUZAD_H
#include <iostream>
#include <memory>
#include <string>

class Kelthuzad {
	protected:
		std::string name;
		int mana;
		int attack;
		int health;
		std::string saying;

	public:
		Kelthuzad();
		virtual void call();
		void resummon(Kelthuzad &minion1, Kelthuzad &minion2, Kelthuzad &minion3);
};

#endif