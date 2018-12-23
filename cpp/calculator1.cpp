#include <string>
#include <sstream>
#include "Calculator.h"
using namespace std;

int Calculator::add(string numbers){
	stringstream ss (numbers); int current, ans = 0;
	while (ss >> current)
		ans += current;
	return ans;
}