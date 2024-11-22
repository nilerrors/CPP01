#include "../include/Zombie.hpp"
#include <iostream>

Zombie::Zombie() {
	std::cout << "constructor called" << std::endl;
}

Zombie::~Zombie() {
	std::cout << name << ": deconstructor called" << std::endl;
}

void Zombie::setName(const std::string& name) {
	std::cout << name << ": setting name" << std::endl;
	Zombie::name = name;
}

void Zombie::announce() const {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
