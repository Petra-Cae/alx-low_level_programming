#include "main.h"
#include <stdlib.h>

/**
*argstostr - concatenates all arguments of the program
*@ac: count of args passed
*@av: pointer to ac
*
*Return: pointer to new string or null
*/
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, size = 0;
	char *arg;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			arg[k] = av[i][j];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
		i++;
	}
	arg[k] = '\0';
	return (arg);
}
