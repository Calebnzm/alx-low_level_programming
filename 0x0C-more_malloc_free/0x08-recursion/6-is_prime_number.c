#include "main.h"

/**
* is_prime_number - determines whether a number is prime or not
* @n: number to determine if it is prime or not
*
* Return:  1 if n i prime and 0 if not
*/
int is_prime_number(int n)
{
return (is_prime_number_helper(n, 3));
}

/**
* is_prime_number_helper - helps the previous function
* @n: number to determine if it is prime or not
* @i: variable to help also
*
* Return:  1 if n i prime and 0 if not
*/
int is_prime_number_helper(int n, int i)
{
if (n < 2)
{
	return (0);
}
else if (n == 2)
{
	return (1);
}
else if (n % 2 == 0)
{
	return (0);
}
else if (i * i > n)
{
	return (1);
}
else if (n % i == 0)
{
	return (0);
}
else
{
	return (is_prime_number_helper(n, i + 2));
}
}
