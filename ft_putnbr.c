/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:44:57 by adohou            #+#    #+#             */
/*   Updated: 2022/06/17 16:44:58 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr, int len)
{
	char	*base;
	long	nb;

	base = "0123456789";
	nb = nbr;
	if (nb < 0)
	{
		len += ft_putchar('-', len);
		nb *= -1;
	}
	while (nb >= 10)
	{
		ft_putnbr(nb / 10, len);
		nb %= 10;
	}
	len += ft_putchar(base[nb], len);
	return (len);
}
