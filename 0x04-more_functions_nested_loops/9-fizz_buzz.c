#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++) {
if (i % 3 == 0 && i % 5 == 0) {
print_str("FizzBuzz ");
} else if (i % 3 == 0) {
print_str("Fizz ");
} else if (i % 5 == 0) {
print_str("Buzz ");
} else {
print_int(i);
print_char(' ');
}
}

print_char('\n');

return (0);
}
