#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
			ft_putchar(64 + i);
		else
			ft_putchar(96 + i);
		i++;
        j--;
	}
	ft_putchar('\n');
	return (0);
}