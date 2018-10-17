#include <iostream>
#include <memory>
#include "kelthuzad.h"
#include "minion.h"

int main() {
	std::cout << "A few of your minions died this turn.\nGood thing you have the best card in the entire video game in your hand...\n" << std::endl;

	Kelthuzad kelthuzad;

	std::unique_ptr<Minion> apprentice(new Minion("Kobold Apprentice", 3, 2, 1, "I cast arcane missiles.\n"));
	std::unique_ptr<Kelthuzad> boisterous(new Minion("Boisterous Bard", 3, 3, 2, "Shiny, shiny, lovely loot!\n"));//This is defined as a Kelthuzad object, but the pointer points to a new Minion object. So it calls the minion call() function!
	std::unique_ptr<Minion> reno(new Minion("Reno Jackson", 6, 4, 6, "We're gonna be rich!\n"));

	kelthuzad.call();	
	kelthuzad.resummon(*apprentice, *boisterous, *reno);

	return 0;
}