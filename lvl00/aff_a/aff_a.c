#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int main(int argc, char **argv)
{
	int x;
	int y;

	x=1;
	y=0;
	if (argc != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
		return(0);
	}
	while (argv[x][y] != '\0')
	{
		if(argv[x][y] == 'a')
		{
			ft_putchar('a');
			ft_putchar('\n');
			return(0);
		}
		y++;
	}
	ft_putchar('\n');
	return(0);
}
