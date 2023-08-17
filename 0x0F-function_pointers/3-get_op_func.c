#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform an operation
 * @s: points to the operation to be performed
 *
 * Return: returns a pointer to the function
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
	int i = 0;

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)
			break;
		i++;
	}

	return (ops[i].f);
}
