#include <iostream>

#define NAME2(x) #x
#define NAME(x) NAME2(x)

extern void TEST_FN();

int main() {
	try {
		TEST_FN();
		return 0;
	} catch(std::string err) {
		std::cerr << "Failed test for " << NAME(TEST_FN) << ": " << err << std::endl;
		return 1;
	}
}
