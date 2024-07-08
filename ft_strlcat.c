/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:29:02 by artmarti          #+#    #+#             */
/*   Updated: 2023/03/07 18:55:02 by artmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srcsize;
	size_t	dstsize;
	size_t	i;

	if ((!dst || !src) && size == 0)
		return (0);
	srcsize = ft_strlen(src);
	dstsize = ft_strlen(dst);
	i = 0;
	if (size <= 0)
		return (srcsize);
	while (src[i] != '\0' && dstsize + i < size - 1)
	{
		dst[dstsize + i] = src[i];
		i++;
	}
	if (dstsize < size)
		dst[dstsize + i] = '\0';
	if (dstsize + i >= size)
		return (size + srcsize);
	return (dstsize + srcsize);
}
