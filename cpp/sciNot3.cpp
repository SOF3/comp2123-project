#include <cmath>
#include "SciNotation.h"

SciNotation sciNot(double number) {
	int sign = number >= 0 ? 1 : -1;
	number *= sign;
	int exp = (int) floor(log10(number)) - 2;
	int digits = (int) round(number * pow(10.0, -exp));
	return SciNotation{digits * sign, exp};
}

