#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int i, sum, diff, r;
char password[100];


srand(time(NULL));

sum = 0;
for (i = 0; i < 10; i++)
{
r = rand() % 10;
password[i] = '0' + r;
sum += r;
}
password[i++] = '0' + (2772 - sum) % 10;

diff = 0;
for (; i < 16; i++)
{
r = rand() % 62;
if (r < 26)
password[i] = 'A' + r;
else if (r < 52)
password[i] = 'a' + r - 26;
else
password[i] = '0' + r - 52;
diff += password[i];
}
password[i] = '0' + (1016 - diff) % 10;
password[i + 1] = '\0';


printf("%s", password);

return (0);
}
