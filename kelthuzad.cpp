#include <iostream>
#include <string>
#include "kelthuzad.h"

Kelthuzad::Kelthuzad() {
	name = "Kelthuzad";
	mana = 8;
	attack = 6;
	health = 8;
}

void Kelthuzad::call() {
	std::cout << "Minions, servants, soldiers of the cold dark. Obey the call of Kel'thuzad!" << std::endl;
}

void Kelthuzad::resummon(Kelthuzad &minion1, Kelthuzad &minion2, Kelthuzad &minion3) {
	std::cout << "\nKel'thuzad resummons the following minions:\n" << std::endl;

	std::cout << minion1.name << std::endl;
	std::cout << minion1.mana << " mana" << std::endl;
	std::cout << minion1.attack << " attack, " << minion1.health << " health" << std::endl;
	minion1.call();

	std::cout << minion2.name << std::endl;
	std::cout << minion2.mana << " mana" << std::endl;
	std::cout << minion2.attack << " attack, " << minion2.health << " health" << std::endl;
	minion2.call();

	std::cout << minion3.name << std::endl;
	std::cout << minion3.mana << " mana" << std::endl;
	std::cout << minion3.attack << " attack, " << minion3.health << " health" << std::endl;
	minion3.call();
}