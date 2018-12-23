#include "Calculator.h"
#include "BigInteger.h"

int Calculator::eval(int a, int b, char operation){
	BigInteger bigA(a), BigInteger bigB(b);
	BigInteger result(0);

	if (operation == '+') result = bigA + bigB;
	if (operation == '-') result = bigA + bigB;
	if (operation == '*') result = bigA + bigB;
	if (operation == '/') result = bigA + bigB;

	if (result > BigInteger((1<<31)-1))
		throw std::overflow_error("too big");
	else
		return result.value();
}