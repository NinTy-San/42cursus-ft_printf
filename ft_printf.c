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

int	format_case(char flag, va_list arg, int len)
{
	int		l;
	l = len;
	if (flag == 'c')
		l = ft_putchar(va_arg(arg, int));
	if (flag == 's')
		l = ft_putstr(va_arg(arg, char *), len);
	if (flag == 'p')
		l = ft_putptr_hexa(va_arg(arg, char *), len);
	if (flag == 'd')
		l = ft_putnbr(va_arg(arg, int), len);
	if (flag == 'i')
		l = ft_putnbr(va_arg(arg, int), len);
	if (flag == 'u')
		l = ft_putunbr(va_arg(arg, unsigned int), len);
	if (flag == 'x')
		l = ft_putnbr_hexa(va_arg(arg, unsigned int), "0123456789abcdef", len);
	if (flag == 'X')
		l = ft_putnbr_hexa(va_arg(arg, unsigned int), "0123456789ABCDEF", len);
	if (flag == '%')
		l = ft_putchar(flag);
	return (l);
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
			i += 2;
			len += format_case(str[i - 1], args, 0);
		}
		if (str[i] && str[i] != '%')
		{
			len += ft_putchar(str[i]);
			i++;
		}
	}
    va_end(args);
    return (len);
}


/* int main()
{
	// char	lettre = 'a';
	// char	str[] = "and if you don't know now you know";
	// ft_printf("it was all %c dream\n%s \n", lettre, str);
	int	ft_len;
	int len;
	ft_len = ft_printf("test1 = %X", -1314);
	printf("\n");
	len = printf("test2 = %X", -1314);

	printf("\nft_printf = %i", ft_len);
	printf("\nprintf = %i", len);
	printf("\n");
    return 0;
} */
