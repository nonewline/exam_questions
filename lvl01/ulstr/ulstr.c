#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putstring(char *c)
{
	int y;
	
	y=0;
	while (c[y] != '\0')
	{
		ft_putchar(c[y]);
		y++;
	}
}
int main(int argc, char **argv)
{
	int x;
	int y;

	x = 1;
	y = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return(0);
	}
	while (argv[x][y] != '\0')
	{
		if (argv[x][y] >= 'A' && argv[x][y] <= 'Z')
		{
			argv[x][y] += 32;
			y++;
		}
		else if (argv[x][y] >= 'a' && argv[x][y] <='z')
		{
			argv[x][y] -= 32;		
			y++;
		}
		else
		{	
			y++;
		}
	}
	ft_putstring(argv[x]);
	ft_putchar('\n');
	return(0);
}
