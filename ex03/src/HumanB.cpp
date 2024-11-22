#include "../include/HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name) : name(name), weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(const Weapon& weapon) {
	HumanB::weapon = &weapon;
}

void HumanB::attack() const {
	if (!weapon)
		std::cout << name << " has no weapon" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
