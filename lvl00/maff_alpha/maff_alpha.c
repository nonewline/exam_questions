#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_up(int c)
{
	c += 96;
	return (c);
}

char	ft_low(int c)
{
	c += 64;
	return (c);
}

int main(void)
{
	int i;
    int j;

	i = 1;
    j = 26;
	while (j > 0)
	{
		if (i % 2 == 0)
			ft_putchar(ft_low(i));
		else
			ft_putchar(ft_up(i));
		i++;
        j--;
	}
	ft_putchar('\n');
	return (0);
}