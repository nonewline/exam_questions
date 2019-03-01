#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int		i;

	i = 128;
	while (i > 0)
	{
		if (octet < i)
		{
			write(1, "0", 1);
			i /= 2;
		}
		else
		{
			write(1, "1", 1);
			octet -= i;
			i /= 2;
		}
	}
}

void	rev_bits(unsigned char octet)
{
	int		i;
	int		c;
	char	arr[9];

	i = 128;
	c = 0;
	while (i > 0)
	{
		if (octet < i)
		{
			arr[c] = '0';
			i /= 2;
		}
		else
		{
			arr[c] = '1';
			octet -= i;
			i /= 2;
		}
		c++;
	}
	while (c-- >= 0)
	{
		write(1, &arr[c],1);
	}
}

int main(int ac, char **av)
{
	char test = av[2][0];
	if (ac == 3)
	{
		if (av[1][0] == '1')
			print_bits(test);
		if (av[1][0] == '2')
			rev_bits(test);
	}
	write(1, "\n", 1);
	return (0);
}
