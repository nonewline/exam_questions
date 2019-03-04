#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		do_op(int n1, int n2, char op)
{
	if (op == '+')
		return (n1 + n2);
	if (op == '-')
		return (n1 - n2);
	if (op == '*')
		return (n1 * n2);
	if (op == '/')
		return (n1 / n2);
	if (op == '%')
		return (n1 % n2);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		printf("\n");
	else
	{
		printf("%d\n",do_op(atoi(av[1]), atoi(av[3]), av[2][0]));
	}
	return (0);
}