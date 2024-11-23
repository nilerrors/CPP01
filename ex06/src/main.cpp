#include "../include/Harl.hpp"
#include <iostream>

int main(int ac, char **argv) {
	if (ac != 2) {
		std::cout << "Error: wrong input, expected: " << argv[0] << " <level>" << std::endl;
		std::cout << "\tlevel in (DEBUG, INFO, WARNING, ERROR)" << std::endl;
		return 1;
	}

	Harl harl;
	harl.complain(argv[1]);
	return 0;
}
