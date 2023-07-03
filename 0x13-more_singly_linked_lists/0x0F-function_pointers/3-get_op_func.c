#include "calc.h"
#include <stdlib.h>

#define IS_OPERATOR_MATCH(op, s) (*(op) == *(s) && *((s) + 1) == '\0')

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as an argument to the program
 *
 * Return: pointer to the function that corresponds to the operator,
 *         or NULL if the operator is not found
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (ops[i].op)
{
if (IS_OPERATOR_MATCH(ops[i].op, s))
	return (ops[i].f);
i++;
}
return (NULL);
}
