#include "recursion.h"
#include <iostream>

int recursion(int m, int n)
{
	if (m == n)
		return m;
	return m * recursion(m + 1, n);
}

int recAdd(int m , int n)
{
	if (m == n)
		return m;
	return m + recAdd(m + 1, n);
}
