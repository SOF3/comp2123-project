#include "sciNot3.cpp"
#include "assert.h"

void testSciNot() {
	ASSERT_EQUAL(sciNot(1235), SciNotation(124, 1))
	ASSERT_EQUAL(sciNot(-1234), SciNotation(-123, 1))
}
