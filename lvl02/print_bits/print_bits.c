#include <unistd.h>
#include <stdio.h>

void print_bits(unsigned char octet)
{
  int i = 7;
  char bits[9];

  while (i >= 0)
  {
             bits[i] = (octet % 2) + '0';
             octet = octet / 2;
             i--;
  }
  bits[8] = '\0';
  ft_putstr(bits);
}

int main(int ac, char **av)
{
	char test = av[2][0];
	if (ac == 2)
	{
		print_bits(test);
	}
	write(1, "\n", 1);
	return (0);
}
