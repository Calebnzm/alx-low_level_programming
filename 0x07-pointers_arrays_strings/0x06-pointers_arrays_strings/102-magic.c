#include <stdio.h>

/**
 * main - prints the value of the integer stored in the address of a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
*n = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}

