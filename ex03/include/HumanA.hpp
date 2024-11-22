#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <string>
#include "./Weapon.hpp"

class HumanA {
public:
	HumanA(const std::string& name, const Weapon& weapon);

	~HumanA();

	void attack() const;

private:
	std::string name;
	const Weapon& weapon;
};

#endif // HUMAN_A_HPP
