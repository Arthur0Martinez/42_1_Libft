/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:04:33 by artmarti          #+#    #+#             */
/*   Updated: 2023/03/07 18:33:51 by artmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countchar(long n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*dest;
	size_t	len;
	long	m;

	m = n;
	len = countchar(m);
	if (m == 0)
		return (ft_strdup("0"));
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	if (m < 0)
	{
		dest[0] = '-';
		m = -m;
	}
	dest[len] = '\0';
	len--;
	while (m > 0)
	{
		dest[len] = m % 10 + 48;
		m = m / 10;
		len--;
	}
	return (dest);
}
