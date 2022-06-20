/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:49:50 by adohou            #+#    #+#             */
/*   Updated: 2022/06/17 17:49:53 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putunbr(unsigned int nbr, int len)
{
	char	*base;

	base = "0123456789";
	while (nbr >= 10)
	{
		ft_putunbr(nbr / 10, len);
		nbr %= 10;
	}
	len += ft_putchar(base[nbr], len);
	return (len);
}
