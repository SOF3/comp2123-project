#include <string>
#include "fibo2.h"

int fibo(int times) {
	int a = 1, b = 1;
	if(times <= 0) throw std::string("input out of bounds"); // error value
	if(times <= 2) return 1; // init condition
	int i = 3;
	while(true) {
		int tmp = a + b;
		a = b;
		b = tmp;
		if(i == times) break;
		i++;
	}
	return b;
}
