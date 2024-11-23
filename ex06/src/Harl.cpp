#include "../include/Harl.hpp"
#include <iostream>

const Harl::HarlFunc Harl::FUNCS[TOTAL_FUNC] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
const std::string LEVELS[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(const std::string& level) {
	char func = level_to_func(level);
	switch (func) {
	case 'D':
		debug();
		info();
		warning();
		error();
		break;
	case 'I':
		info();
		warning();
		error();
		break;
	case 'W':
		warning();
		error();
		break;
	case 'E':
		error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}

char Harl::level_to_func(const std::string& level) {
	for (int i = 0; i < TOTAL_FUNC; ++i) {
		if (LEVELS[i] == level) {
			return level[0];
		}
	}
	return '\0';
}

void Harl::debug() {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-";
	std::cout << "ketchup burger. I really do!";
	std::cout << std::endl << std::endl;
}

void Harl::info() {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put";
	std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl << std::endl;
}

void Harl::warning() {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for";
	std::cout << "years whereas you started working here since last month.";
	std::cout << std::endl << std::endl;
}

void Harl::error() {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl << std::endl;
}
