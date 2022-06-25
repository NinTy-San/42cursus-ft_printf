/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <adohou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 19:41:51 by adohou            #+#    #+#             */
/*   Updated: 2022/06/25 19:41:52 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa(unsigned long nb, char *base, int len)
{
	int		l;

	l = len;
	if (nb >= 16)
		l += ft_putnbr_hexa(nb / 16, base, len);
	l += ft_putchar(base[nb % 16]);
	return (l);
}
