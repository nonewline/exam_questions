/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 09:44:02 by mimeyer           #+#    #+#             */
/*   Updated: 2019/02/19 15:45:39 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int count;
	int s1_total;
	int s2_total;

	count = -1;
	s1_total = 0;
	s2_total = 0;
	while (s1[++count] != '\0')
	{
		if (s1[count] != s2[count])
		{
			s1_total = s1[count];
			s2_total = s2[count];
			break ;
		}
	}
	return (s1_total - s2_total);
}
