#ifndef BIGINTEGER_H
#define BIGINTEGER_H
#include <string>
using namespace std;

class BigInteger {
	long long val;
	public:
		BigInteger(int a){
			val = a;
		}
		BigInteger operator+(BigInteger rhs){
			return val + rhs.val;
		}
		BigInteger operator-(BigInteger rhs){
			return val - rhs.val;
		}
		BigInteger operator*(BigInteger rhs){
			return val * rhs.val;
		}
		BigInteger operator/(BigInteger rhs){
			return val / rhs.val;
		}
		bool operator>(BigInteger rhs){
			// implementation omitted
		}
		int value(){
			return (int) val;
		}
};

#endif
