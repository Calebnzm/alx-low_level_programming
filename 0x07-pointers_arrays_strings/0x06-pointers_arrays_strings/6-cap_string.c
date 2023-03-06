#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: the string to modify
 *
 * Return: a pointer to the modified string
 */
char *cap_string(char *str)
{
int i = 0;
int new_word = 1; /* flag to track the start of a new word */

while (str[i] != '\0')
{
if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] -= ('a' - 'A'); /* capitalize the first letter of the word */
new_word = 0;
}
else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
new_word = 1; /* mark the end of a word */
}
else
{
new_word = 0; /* mark the middle of a word */
}
i++;
}

return (str);
}
