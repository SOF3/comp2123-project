#include <cstdlib>

#define SAMPLE_INTS(iterations, min, max, as, i) \
	auto i = iterations; \
	for(int as = rand() % (max - min) + min; i > 0; i--, as = rand() % (max - min) + min)
