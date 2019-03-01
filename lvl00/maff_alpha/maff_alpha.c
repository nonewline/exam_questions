#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_up(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char	ft_low(char c)
{
	if (c >= 'A' && c <='Z')
		c += 32;
	return (c);
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac > 1)
	{
		while (av[1][i])
		{
			if (i % 2 == 0)
				ft_putchar(ft_low(av[1][i]));
			else
				ft_putchar(ft_up(av[1][i]));
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
