#include "3-calc.h"

/**
 * get_op_func - description
 * @s: description
 *
 * Return: description
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
	while (i < 5)
	{
		if (s[0] != NULL &&
			ops[i].op[0] == s[0] && s[1] == NULL)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
