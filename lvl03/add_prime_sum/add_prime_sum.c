#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	ft_atoi(char *str)
{
	int number;
	int i;
	int negative;

	i = 0;
	number = 0;
	negative = 1;
	while (str[i] <= ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			number = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number  * 10 + (str[i] - 48);
		i++;
	}
	return (number);
}

void	ft_putnumber(int nb)
{
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb > 9)
		ft_putnumber(nb / 10);
	ft_putchar(nb % 10 + 48);
}

int		ft_is_prime(int num)
{
	int i;

	if (num == 0 || num == 1)
		return (0);
	i = 2;
	while (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int 	main(int argc, char **argv)
{
	int num;
	int total;

	total = 0;
	if (argc != 2)
	{
		ft_putnumber(0);
		ft_putchar('\n');
	}
	else
	{
		if (ft_atoi(argv[1]) < 0)
		{
			ft_putnumber(0);
			ft_putchar('\n');
			return (0);
		}
		num = ft_atoi(argv[1]);
		while (num > 0)
		{
			if (ft_is_prime(num) == 1)
				total += num;
			num--;
		}
		ft_putnumber(total);
		ft_putchar('\n');
	}
	return (0);
}
