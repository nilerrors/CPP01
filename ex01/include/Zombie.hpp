#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
public:
	Zombie();

	~Zombie();

	void setName(const std::string& name);

	void announce() const;

private:
	std::string name;
};

Zombie* zombieHorde(int N, const std::string& name);

#endif // ZOMBIE_HPP
