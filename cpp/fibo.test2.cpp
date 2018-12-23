#include <string>
#include "assert.h"
#include "assert_int.h"
#include "fibo2.h"

void testFibo() {
	bool ok = false;
	try {
		fibo(-1);
	} catch(std::string error) {
		ok = true;
	}
	if(!ok) {
		std::cerr << "fibo(-1) does not throw an exception!" << std::endl;
	}
	ASSERT_EQUAL(fibo(2), 1)
	ASSERT_EQUAL(fibo(3), 2)
	ASSERT_EQUAL(fibo(5), 5)
}
