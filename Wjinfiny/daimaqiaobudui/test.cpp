#include "UnitTest.h"
int Calculate(int num1, char ch, int num2)

{
	int result;

	switch (ch){

	case '+':

		result = num1 + num2;
		break;

	case '-':

		if (num1 < num2)

			result = -1000;

		else

			result = num1 - num2;

		break;

	case '*':

		result = num1 * num2;

		break;

	case '/':

		if (num1%num2 == 0)

			result = num1 / num2;

		else

			result = -1000;

	}

	return result;

}
