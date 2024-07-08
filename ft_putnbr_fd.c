/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:50:10 by artmarti          #+#    #+#             */
/*   Updated: 2023/02/14 14:56:57 by artmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		ft_putchar_fd ('-', fd);
	}
	if (nbr >= 0 && nbr < 10)
	{
		ft_putchar_fd (nbr + 48, fd);
	}
	else
	{
		ft_putnbr_fd (nbr / 10, fd);
		ft_putnbr_fd (nbr % 10, fd);
	}
}
