/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:55:50 by adohou            #+#    #+#             */
/*   Updated: 2022/06/14 17:55:53 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str, int len)
{
	int		i;
	i = 0;
	if (str == NULL)
	{
		write(1 , "(null)", 6);
		return (6);
	}
	while (str[i])
		len += ft_putchar(str[i++]);
	return (len);
}
