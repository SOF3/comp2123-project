#ifndef SCI_NOTATION_H
#define SCI_NOTATION_H

#include <string>
#include <cmath>

class SciNotation {
	int digits;
	int exp;
public:
	SciNotation(int digits, int exp) :
		digits(digits), exp(exp) {}

	bool operator==(const SciNotation &that) const {
		return digits == that.digits && exp == that.exp;
	}

	double toDouble() {
		return digits * pow(10, exp);
	}

	int getDigits() {
		return digits;
	}

	int getExp() {
		return exp;
	}
};

std::string operator+(std::string s, SciNotation n) {
	return s + std::to_string(n.getDigits()) + "e" + std::to_string(n.getExp());
}

#endif
