/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:30:07 by artmarti          #+#    #+#             */
/*   Updated: 2023/03/07 18:30:49 by artmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if ((!s1 || !s2) && n == 0)
		return (0);
	i = 0;
	if (!*s2)
		return ((char *)s1);
	while ((s1[i] != '\0') && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && i + j < n)
		{	
			if (s2[j + 1] == '\0')
			{
				return ((char *)s1 + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
