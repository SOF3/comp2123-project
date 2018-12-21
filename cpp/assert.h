#include <iostream>

#define ASSERT_EQUAL(actual, expect) \
	if (actual != expect) { \
		throw std::string("Expected ") + #actual + " to return " + expect + ", got " + actual; \
	}
