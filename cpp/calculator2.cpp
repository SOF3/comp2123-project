#include "Calculator.h"

int Calculator::eval(int a, int b, char operation){
	if (operation == '+') return a + b;
	if (operation == '-') return a - b;
	if (operation == '*') return a * b;
	if (operation == '/') return a / b;
}