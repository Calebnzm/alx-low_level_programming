#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
* filename - gives the name of the file
*
* Return: the name of the file
*/
char *filename(void)
{
return (__FILE__);
}

/**
* main - prints the name of the file
*
* Return: always 0
*/
int main(void)
{
int j;
char *a;
j = 0;
a = filename();
while (a[j] != '\0')
{
_putchar(a[j]);
j++;
}
_putchar('\n');
return (0);
}
