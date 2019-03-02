#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putstring(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
int main(int argc, char **argv)
{
	int y;

	y = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return(0);
	}
	while (argv[1][y] != '\0')
	{
		if (argv[1][y] >= 'A' && argv[1][y] <= 'Z')
		{
			argv[1][y] += 32;
			y++;
		}
		else if (argv[1][y] >= 'a' && argv[1][y] <='z')
		{
			argv[1][y] -= 32;		
			y++;
		}
		else
		{	
			y++;
		}
	}
	ft_putstring(argv[1]);
	ft_putchar('\n');
	return(0);
}