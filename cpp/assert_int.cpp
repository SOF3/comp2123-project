#include <string>
#include "assert_int.h"

std::string operator+(std::string s, int c) {
	return s + std::to_string(c);
}
