/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <adohou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:49:50 by adohou            #+#    #+#             */
/*   Updated: 2022/06/25 19:41:40 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nbr, int len)
{
	char	*base;

	base = "0123456789";
	while (nbr >= 10)
	{
		len += ft_putunbr(nbr / 10, len);
		nbr %= 10;
	}
	len += ft_putchar(base[nbr]);
	return (len);
}
