/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:33:32 by artmarti          #+#    #+#             */
/*   Updated: 2023/03/08 16:25:43 by artmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	count;

	if (!s)
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

/*char	*ft_strdupi_modif(char const *s, int i, char c)
{
	char	*dest;
	int		k;

	k = 0;
	while (s[i + k] != c)
		k++;
	dest = ft_substr(s, i, k); 
	return (dest);
}*/

int	ft_actualword(char const *s, char c, int a)
{
	size_t	i;

	i = a;
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

int	ft_nextword(char const *s, char c, int a)
{
	size_t	i;

	i = a;
	while (s[i] && s[i] != c)
		i++;
	return (++i);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	size_t	count;
	size_t	j;
	size_t	actualw;
	size_t	nextw;

	j = 0;
	if (!s)
		return (NULL);
	count = ft_wordcount(s, c);
	actualw = 0;
	nextw = 0;
	final = (char **)malloc(sizeof(char *) * (count + 1));
	if (!final)
		return (NULL);
	while (j < count)
	{
		actualw = ft_actualword(s, c, nextw);
		nextw = ft_nextword(s, c, actualw);
		final[j] = malloc(sizeof(char) * (nextw - actualw));
		ft_strlcpy(final[j], s + actualw, (nextw - actualw));
		j++;
	}
	final[j] = 0;
	return (final);
}
