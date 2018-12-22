#include <cmath>
#include "sciNot4.cpp"
#include "assert.h"
#include "sample.h"

void testSciNot() {
	SAMPLE_INTS(100, -999, 999, digits, i) {
		SAMPLE_INTS(2, -14, 14, exp, j) { // limit to +-14 because of float precision
			bool roundUp = rand() & 1;
			int sign = digits > 0 ? 1 : -1;
			double input = digits + 0.1 * (rand() % 5 + (roundUp ? 5 : 0)) * sign;
			input *= pow(10, exp);
			std::cout << "Testing input = " << input << std::endl;
			ASSERT_EQUAL(sciNot(input), SciNotation(digits + roundUp * sign, exp))
		}
	}
}
