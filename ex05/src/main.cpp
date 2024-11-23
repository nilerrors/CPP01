#include "../include/Harl.hpp"
#include <iostream>

int main() {
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");

	std::cout << std::endl << std::endl;

	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");

	std::cout << std::endl << std::endl;

	harl.complain("RANDOM");
	harl.complain("random");
}
