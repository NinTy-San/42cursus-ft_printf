/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 02:33:48 by adohou            #+#    #+#             */
/*   Updated: 2022/06/15 02:33:51 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_hexa(unsigned char c)
{
	char	*basehexa;

	basehexa = "0123456789abcdef";
	write (1, "\\", 1);
	write (1, &basehexa[c / 16], 1);
	write (1, &basehexa[c % 16], 1);
	return (3);
}

int	ft_hexa(void *str)
{
	int		i;
	int len;
	len = 0;
	i = 0;
	while (str[i])
		len += ft_get_hexa(str[i]);
	return (len);
}
