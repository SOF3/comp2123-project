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

	bool operator==(const SciNotation &that) const;

	double toDouble() const;

	int getDigits() const;

	int getExp() const;
};

std::string operator+(const std::string &s, const SciNotation &n);

#endif
