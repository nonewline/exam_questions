#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strlen (char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

void ft_strcheck(char *s1, char *s2)
{
	int i;
	int j;
	int length;

	i = 0;
	j = 0;
	length = ft_strlen(s1);
	while (s2[i] != '\0')
	{
		if(s2[i] == s1[j] && j != length)
			j++;
		i++;
	}
	if (j == length)
	{
		ft_putstr(s1);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}

int	main (int argc, char **argv)
{
	if (argc == 3)
	{
		ft_strcheck(argv[1], argv[2]);
	}
	else
		ft_putchar('\n');
	return (0);
}

