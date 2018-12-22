#include <iostream>
#include <cstdlib>

#define __MACRO_STR(x) #x
#define MACRO_STR(x) __MACRO_STR(x)

extern void TEST_FN();

int main() {
	srand(0);
	std::cout << "Executing test " << MACRO_STR(TEST_FN) << std::endl;
	try {
		TEST_FN();
		return 0;
	} catch(std::string err) {
		std::cerr << "Failed test for " << MACRO_STR(TEST_FN) << ": " << err << std::endl;
		return 1;
	}
}
