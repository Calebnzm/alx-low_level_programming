#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_all -  prints its parameters
* @format: format of the string in the list
*
* Return: nothing
*/
void print_all(const char * const format, ...)
{
char *string;
char x, c;
float f;
int i, t, shouldPrintComma;
va_list args;
i = 0;
va_start(args, format);
while (format[i] != '\0' && format != NULL)
{
x = format[i];
switch (x)
{
case 'c':
c = va_arg(args, int);
printf("%c", c);
break;
case 'i':
t = va_arg(args, int);
printf("%d", t);
break;
case 'f':
f = va_arg(args, double);
printf("%f", f);
break;
case 's':
string = va_arg(args, char *);
if (string == NULL)
	printf("(nil)");
printf("%s", string);
break;
default:
break;
}
shouldPrintComma = (x == 'c' || x == 'f' || x == 'i' || x == 's');
if (format[i + 1] != '\0' && shouldPrintComma)
	printf(", ");
i++;
}
va_end(args);
printf("\n");
}
