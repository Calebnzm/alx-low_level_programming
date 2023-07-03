#include "calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* op_add - returns the sum of a and b
* @a: num 1
* @b: num 2
*
* Return: a + b
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - returns the difference of a and b
* @a: num 1
* @b: num 2
*
* Return: a - b
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - returns the product of a and b
* @a: num 1
* @b: num 2
*
* Return: a * b
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - returns the division of a and b
* @a: num 1
* @b: num 2
*
* Return: a / b
*/
int op_div(int a, int b)
{
if (b == 0)
{
	printf("Error\n");
	exit(100);
}
return (a / b);
}

/**
* op_mod - returns the modulus of a and b
* @a: num 1
* @b: num 2
*
* Return: a % b
*/
int op_mod(int a, int b)
{
if (b == 0)
{
	printf("Error\n");
	exit(100);
}
return (a % b);
}
