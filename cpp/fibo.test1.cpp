#include "assert.h"
#include "assert_int.h"
#include "fibo.h"

void testFibo() {
	ASSERT_EQUAL(fibo(2), 1)
	ASSERT_EQUAL(fibo(3), 2)
}
