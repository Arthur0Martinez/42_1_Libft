/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 07:43:55 by artmarti          #+#    #+#             */
/*   Updated: 2023/03/08 16:30:31 by artmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[j]) && j > i)
		j--;
	if (j == 0)
		j = ft_strlen(s1) - 1;
	len = j - i + 1;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s1 + i, len);
	dest[len] = '\0';
	return (dest);
}
