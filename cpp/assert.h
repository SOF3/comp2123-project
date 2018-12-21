#include <iostream>

#define ASSERT_EQUAL(actual, expect) \
	auto actualValue = actual; \
	auto expectValue = expect; \
	bool eq = actualValue == expectValue; \
	if (!eq) { \
		throw std::string("Expected ") + #actual + " to return " + expectValue + ", got " + actualValue; \
	}
