/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:19:44 by cbagdon           #+#    #+#             */
/*   Updated: 2019/02/15 13:42:40 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		len;

	if (s2 && s1)
	{
		i = 0;
		len = 0;
		while (s1[len])
			len++;
		while (s2[i])
		{
			s1[len] = s2[i];
			len++;
			i++;
		}
		s1[len] = '\0';
	}
	return (s1);
}
