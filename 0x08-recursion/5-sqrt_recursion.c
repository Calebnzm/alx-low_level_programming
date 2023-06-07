#include "main.h"

/**
 * _sqrt_recursion - determines the square root of a number
 * _helper - helps the function to calculate the square root
 * @n: number whose square root is to be passed
 * @i: variable to help in the recursion
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
	return (-1);
}
return (_helper(n, 0));
}

int _helper(int n, int i)
{
if (i * i == n)
{
	return (i);
}
else if (i * i > n)
{
	return (-1);
}
else
{
	return (_helper(n, i + 1));
}
}
