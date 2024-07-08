/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:59:02 by artmarti          #+#    #+#             */
/*   Updated: 2023/03/07 18:32:13 by artmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*dest;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb * size > 4294967295)
		return (0);
	dest = malloc(size * nmemb);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < (size * nmemb))
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
