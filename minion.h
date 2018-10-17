#ifndef MINION_H
#define MINION_H
#include <iostream>

class Minion : public Kelthuzad {

	std::string saying;

	public:
		Minion();
		Minion(std::string nm, int cost, int atk, int hp, std::string say);
		virtual void call();
};

#endif