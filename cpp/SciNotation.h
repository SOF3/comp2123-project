#ifndef SCI_NOTATION_H
#define SCI_NOTATION_H

#include <string>

class SciNotation {
	int digits;
	int exp;
public:
	SciNotation(int digits, int exp) :
		digits(digits), exp(exp) {}

	bool operator==(const SciNotation &that) const {
		std::cout << (std::string("") + *this) << "==";
		std::cout << (std::string("") + that) << std::endl;
		return digits == that.digits && exp == that.exp;
	}

	friend std::string operator+(std::string s, SciNotation n);
};

std::string operator+(std::string s, SciNotation n) {
	return s + std::to_string(n.digits) + "e" + std::to_string(n.exp);
}

#endif
