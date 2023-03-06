#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: the first number to add
 * @n2: the second number to add
 * @r: the buffer to store the result
 * @size_r: the buffer size
 *
 * Return: a pointer to the result, or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum = 0;
int i = 0, j = 0;

while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;

if (len1 > size_r || len2 > size_r)
return (0);

r[size_r - 1] = '\0';
for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
if (sum > 9)
carry = 1;
else
carry = 0;
r[size_r - len1 - 1 + i + j + 1] = (sum % 10) + '0';
}
if (carry == 1)
{
if (size_r == len1 + len2 + 1)
return (0);
r[size_r - len1 - len2 - 1] = '1';
return (r + size_r - len1 - len2 - 1);
}
return (r + size_r - len1 - len2);
}
