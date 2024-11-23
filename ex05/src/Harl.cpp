#include "../include/Harl.hpp"
#include <iostream>

const Harl::HarlFunc Harl::FUNCS[TOTAL_FUNC] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
const std::string Harl::LEVELS[TOTAL_FUNC] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(const std::string& level) {
	HarlFunc func = level_to_func(level);
	if (!func) {
		std::cout << "Error: level not found: " << level << std::endl;
		return;
	}
	(this->*func)();
}

Harl::HarlFunc Harl::level_to_func(const std::string& level) {
	for (int i = 0; i < TOTAL_FUNC; ++i) {
		if (LEVELS[i] == level) {
			return FUNCS[i];
		}
	}
	return NULL;
}

void Harl::debug() {
	std::cout << "DEBUG: ";
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-";
	std::cout << "ketchup burger. I really do!";
	std::cout << std::endl;
}

void Harl::info() {
	std::cout << "INFO: ";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put";
	std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void Harl::warning() {
	std::cout << "WARNING: ";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for";
	std::cout << "years whereas you started working here since last month.";
	std::cout << std::endl;
}

void Harl::error() {
	std::cout << "ERROR: ";
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}
