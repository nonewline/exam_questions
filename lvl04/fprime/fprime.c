#include <stdio.h>
#include <stdlib.h>

int		is_prime_number(int num)
{
	int i;

	if (num == 0 || num == 1)
		return (0);
	i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	prime_fact(int num)
{
	int i;
	int hist;
	int orig;

	i = 0;
	hist = 1;
	orig = num;
	if (is_prime_number(num) == 1 || num == 1 || num == 0)
	{
		printf("%d", num);
		return ;
	}
	while (hist != orig)
	{
		if (is_prime_number(i) == 0)
		{
			i++;
			continue ;
		}
		if (num % i == 0)
			{
				printf("%d", i);
				hist = hist * i;
				num = num / i;
				if (hist != orig)
					printf("*");
			}
		else
			i++;
	}
	
}
int		main(int ac, char **av)
{
	if (ac != 2)
		printf("\n");
	else
	{
		prime_fact(atoi(av[1]));
		printf("\n");
	}
	return (0);
}