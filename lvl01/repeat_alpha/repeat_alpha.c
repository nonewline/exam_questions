#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
int main(int argc, char **argv)
{
	int i;
	int c;

	i = 0;
	c = 0;
	if (argc != 2 || argc > 2 || argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			c = argv[1][i] - 64;
		if (argv[1][i]>= 'a' && argv[1][i] <= 'z')
			c = argv[1][i] - 96;
		while (c != 0)
		{
			ft_putchar(argv[1][i]);
			c--;
		}
		i++;
	}
	ft_putchar('\n');
}
