#include "isPrimeNumber.h"
#include <iostream>


bool isPrimeNumber(int number)
{
	
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
			return false;
	}
	return true;
}
