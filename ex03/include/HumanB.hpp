#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <string>
#include "./Weapon.hpp"

class HumanB {
public:
	HumanB(const std::string& name);

	~HumanB();

	void setWeapon(const Weapon& weapon);

	void attack() const;

private:
	std::string name;
	const Weapon* weapon;
};

#endif // HUMAN_B_HPP
