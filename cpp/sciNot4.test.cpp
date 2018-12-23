#include <cstdlib>
#include <cmath>
#include "sciNot4.cpp"
#include "assert.h"

#define SAMPLE_INTS(iterations, min, max, as, i) \
	auto i = iterations; \
	for(int as = rand() % (max - min) + min; i > 0; i--, as = rand() % (max - min) + min)

void testSciNot() {
	SAMPLE_INTS(100, -999, 999, digits, i) {
		SAMPLE_INTS(2, -14, 14, exp, j) {
			bool roundUp = rand() & 1;
			int sign = digits > 0 ? 1 : -1;
			double input = digits + 0.1 * (rand() % 5 + (roundUp ? 5 : 0)) * sign;
			input *= pow(10, exp);
			std::cout << "Testing input = " << input << std::endl;
			digits += roundUp * sign;
			while(digits < 100) {
				digits *= 10;
				exp--;
			}
			ASSERT_EQUAL(sciNot(input), SciNotation(digits, exp))
		}
	}
}
