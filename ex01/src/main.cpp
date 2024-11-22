#include "../include/Zombie.hpp"

int main() {
	const int N = 10;

	Zombie* zombies = zombieHorde(N, "Foo");

	for (int i = 0; i < N; i++) {
		zombies[i].announce();
	}

	delete[] zombies;

	return 0;
}
