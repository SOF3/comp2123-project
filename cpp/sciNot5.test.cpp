#include <cmath>
#include <vector>
#include <rapidcheck.h>
#include "sciNot5.cpp"

using namespace std;
using namespace rc;

void testSciNot() {
	check("requirement 2: 3 significant figures", [](const vector<double> &vec) {
		for(double input : vec) {
			SciNotation sci = sciNot(input);
			int digits = sci.getDigits();
			RC_ASSERT(100 <= digits && digits < 999);
		}
	});
	check("requirement 3: error within bounds", [](const vector<double> &vec) {
		for(double input : vec) {
			SciNotation sci = sciNot(input);
			double error = sci.toDouble() - input;
			error /= pow(10, sci.getExp());
			RC_ASSERT(-0.5 <= error && error < 0.5);
		}
	});
}
