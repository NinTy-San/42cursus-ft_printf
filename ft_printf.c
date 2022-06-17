/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:03:57 by adohou            #+#    #+#             */
/*   Updated: 2022/06/13 20:04:08 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>


int	format_case(char flag, va_list arg)
{
	int		len;

	len = 0;
	if (flag == 'c')
		len += ft_putchar(va_arg(arg, int));
	if (flag == 's')
		len += ft_putstr(va_arg(arg, char *));
	if (flag == 'p')
		len += ft_puthexa(va_arg(arg, char *));
	if (flag == 'd')
		len += ft_putnbr(va_arg(arg, int), "0123456789", 10);
	if (flag == 'i')
		len += ft_putnbr(va_arg(arg, int), "0123456789", 10);
	if (flag == 'u')
		len += ft_putunbr(va_arg(arg, unsigned int));
	if (flag == 'x')
		len += ft_putnbr(va_arg(arg, int), "0123456789abcdef", 16);
	if (flag == 'X')
		len += ft_putnbr(va_arg(arg, int), "0123456789ABCDEF", 16);
	// if (flag == '%')
	return (len);
}

int ft_printf(const char *str, ...)
{
	int		i;
	int		len;

    va_list args;

    va_start(args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += format_case(str[i++], args);
		}
		write (1, &str[i], 1);
		i++;
	}
    va_end(args);
    return (len);
}


int main()
{
	// char	lettre = 'a';
	// char	str[] = "and if you don't know now you know";
	// ft_printf("it was all %c dream\n%s \n", lettre, str);
	ft_printf("ft_printf = %X\n", 6445);
	printf("printf = %X\n", 6445);
    return 0;
}
