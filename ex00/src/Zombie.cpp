#include "../include/Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string& name) : name(name) {
	std::cout << name << ": constructor called" << std::endl;
}

Zombie::~Zombie() {
	std::cout << name << ": deconstructor called" << std::endl;
}

void Zombie::announce() const {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
