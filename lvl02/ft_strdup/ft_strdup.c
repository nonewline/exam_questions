/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 08:03:32 by mimeyer           #+#    #+#             */
/*   Updated: 2019/02/21 12:13:56 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

char	*ft_strcpy(char *dest, char *src)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	len++;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	if (src == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		i++;
	}
	str = (char *)malloc(i + 1);
	if (!str)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_strcpy(str, src);
	return (str);
}
