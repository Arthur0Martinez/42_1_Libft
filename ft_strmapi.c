/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:15:14 by artmarti          #+#    #+#             */
/*   Updated: 2023/03/07 18:34:22 by artmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*dest;
	size_t		j;
	size_t		i;

	i = 0;
	j = ft_strlen(s);
	dest = ft_calloc((j + 1), sizeof(char));
	if (!dest)
		return (NULL);
	while (i < j)
	{
		dest[i] = (*f)(i, s[i]);
		i++;
	}
	return (dest);
}
