#include <string>
#include <sstream>
#include "calculator.h"

int add(string numbers){
	stringstream ss (numbers); int current, ans = 0;
	while (ss >> current)
		ans += current;
	return ans;
}