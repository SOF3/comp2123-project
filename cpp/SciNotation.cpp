#include <string>
#include <cmath>
#include "SciNotation.h"

bool SciNotation::operator==(const SciNotation &that) const {
	return digits == that.digits && exp == that.exp;
}

double SciNotation::toDouble() const {
	return digits * pow(10, exp);
}

int SciNotation::getDigits() const {
	return digits;
}

int SciNotation::getExp() const {
	return exp;
}

std::string operator+(const std::string &s, const SciNotation &n) {
	return s + std::to_string(n.getDigits()) + "e" + std::to_string(n.getExp());
}
