/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <adohou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 19:41:10 by adohou            #+#    #+#             */
/*   Updated: 2022/06/25 19:41:13 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_hexa(void *p, int len)
{
	unsigned long	adrs;
	int				l;

	l = len;
	if (!p)
		l += ft_putstr("(nil)", len);
	else
	{
		adrs = (unsigned long) p;
		l += ft_putstr("0x", len);
		l += ft_putnbr_hexa(adrs, "0123456789abcdef", len);
	}
	return (l);
}
