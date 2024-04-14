/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:35:13 by joseoliv          #+#    #+#             */
/*   Updated: 2024/04/14 19:35:14 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr_fd("2147483648", 1);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar_fd(nb % 10 + 48, 1);
}
/*
int	main(void)
{
	int	nb;

	nb = -42;
	ft_putnbr(nb);
	return (0);
}*/