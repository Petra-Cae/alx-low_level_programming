#include "3-calc.h"

/**
* get_op_func - selects the correct function to
*perform the user's operation
* @s: operator passed as argument to the program
*
* Return: pointer to func corresponding to
*the operator given as a parameter
*/
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (!(*(s + 1)) && *ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
