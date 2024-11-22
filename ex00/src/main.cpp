#include "../include/Zombie.hpp"

int main() {
	Zombie* zombie = newZombie("Foo");

	zombie->announce();

	randomChump("Bar");

	// must call delete to avoid memory leak and call destructor
	delete zombie;

	return 0;
}
