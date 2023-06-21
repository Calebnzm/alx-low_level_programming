#include <stdio.h>
#include <stdlib.h>

/**
* main - prints its own opcode
* @argc: argument count
* @argv: argument vector
*
* Return: always 0
*/
int main(int argc, char *argv[])
{
unsigned char *ptr;
int i;
int num_bytes;
if (argc != 2)
{
	printf("Error\n");
	return (1);
}
num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
	printf("Error\n");
	return (2);
}
ptr = (unsigned char *)&main;
for (i = 0; i < num_bytes; i++)
{
printf("%02x ", ptr[i]);
}
printf("\n");
return (0);
}
