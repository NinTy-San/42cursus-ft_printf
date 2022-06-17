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

int	ft_putnbr(int nbr, char *base, int size)
{
	long	nb;
	int		len;
	nb = nbr;
	len = 0;
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb *= -1;
	}
	while (nb >= size)
	{
		ft_putnbr(nb / size, base, size);
		nb %= size;
	}
	len += ft_putchar(base[nb]);
	return (len);
}
