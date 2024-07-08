/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:02:43 by artmarti          #+#    #+#             */
/*   Updated: 2023/02/11 11:29:20 by artmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (size == 0)
		return (length);
	while ((src[i] != '\0') && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (length);
}
