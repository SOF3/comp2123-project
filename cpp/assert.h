#include <iostream>

#define ASSERT_EQUAL(actual, expect) {\
	auto actualValue = actual; \
	auto expectValue = expect; \
	bool eq = actualValue == expectValue; \
	if (eq) { \
		std::cout << std::string("Successful: ") + #actual + " = " + actualValue << std::endl; \
	} else { \
		throw std::string("Expected ") + #actual + " to return " + expectValue + ", got " + actualValue; \
	} \
}
