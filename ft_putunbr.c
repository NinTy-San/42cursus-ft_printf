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

int ft_putunbr(unsigned int nbr)
{
	char	*base;
	int		len;

	base = "0123456789";
	len = 0;
	while (nbr >= 10)
	{
		ft_putunbr(nbr / 10);
		nbr %= 10;
	}
	len += ft_putchar(base[nbr]);
	return (len);
}
