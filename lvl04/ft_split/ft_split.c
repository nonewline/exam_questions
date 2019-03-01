#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int ft_countwords(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
    if (str[0] == '\0')
        return (0);
	while (str[i] == ' ' || str[i] == '\n' || str[i] =='\t')
		i++;
	while(str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			if (str[i+1] >= 33 && str[i+1] <= 126)
				count++;
		}
		i++;
	}
    count++;
	return (count);
}

char **ft_split(char *str)
{
  char **arr;
  char *str_to_push;
  int i;
  int j;
  int arr_count;

  if (str[0] == '\0')
    return (0);
  while (str[i] == ' ' || str[i] == '\n' || str[i] =='\t')
    i++;

  i = 0;
  j = 0;
  arr_count = 0;
  arr = (char**)malloc(sizeof(**arr) * ft_countwords(str));
  if (!arr)
    return NULL;
  while (str[i] != '\0') 
  {
      j = 0;
      while (str[i] >= 33 && str[i] <= 126)
      {
          str_to_push[j] = (int)malloc(sizeof(char));
          str_to_push[j] = str[j];
          i++;
          j++;
      }
      arr[i] = (char*)malloc(sizeof(arr[i]) * ft_strlen(str_to_push));
      arr[i] = str_to_push;
      i++;
  } 
    

  return (arr);
}





int main(int ac, char **av)
{
  char **arr;
  int i = 0;

  if (ac == 2)
  {
    arr = ft_split(av[i]);
    printf("%d\n",ft_countwords(av[1]));

  }
  return 0;
}
