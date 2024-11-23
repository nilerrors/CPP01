#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
	typedef void (Harl::*HarlFunc)();

public:
	Harl();

	~Harl();

	void complain(const std::string& level);

private:
	void debug();

	void info();

	void warning();

	void error();

	HarlFunc level_to_func(const std::string& level);

private:
	static const int TOTAL_FUNC = 4;
	static const HarlFunc FUNCS[TOTAL_FUNC];
	static const std::string LEVELS[TOTAL_FUNC];
};

#endif // HARL_HPP
