#include <iostream>
#include <string>
#include "kelthuzad.h"
#include "minion.h"

Minion::Minion() {
	name = " ";
	mana = 0;
	attack = 0;
	health = 0;
	saying = " ";
}

Minion::Minion(std::string nm, int cost, int atk, int hp, std::string say) {
	name = nm;
	mana = cost;
	attack = atk;
	health = hp;
	saying = say;
}

void Minion::call() {
	std::cout << saying << std::endl;
}