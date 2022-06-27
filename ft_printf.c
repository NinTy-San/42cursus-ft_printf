/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <adohou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:03:57 by adohou            #+#    #+#             */
/*   Updated: 2022/06/27 15:33:23 by adohou           ###   ########.fr       */
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
		l += ft_putnbr(va_arg(arg, int), len);
	if (flag == 'i')
		l = ft_putnbr(va_arg(arg, int), len);
	if (flag == 'u')
		l = ft_putunbr(va_arg(arg, unsigned int), len);
	if (flag == 'x')
		l = ft_putnbr_hexa(va_arg(arg, unsigned int), "0123456789abcdef", len);
	if (flag == 'X')
		l = ft_putnbr_hexa(va_arg(arg, unsigned int), "0123456789ABCDEF", len);
	if (flag == '%')
		l = ft_putchar('%');
	return (l);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		while (str[i] && str[i] != '%')
			len += ft_putchar(str[i++]);
		if (str[i] == '%')
		{
			len += format_case(str[i + 1], args, 0);
			i += 2;
		}
	}
	va_end(args);
	return (len);
}

/* int main()
{

	char	str[] = "it was all a dream";
	int		ft_len;
	int		len;

	printf("ft_printf ->\n");
	ft_len = ft_printf("c = %c\ns = %s\np = %p\nd= %d\ni = %i\nu = %u\nx = %x\nX = %X\n%% = %%\n", 'A', str, str, INT_MIN, INT_MAX, INT_MAX, -1993, -1993);
	printf("printf ->\n");
	len = printf("c = %c\ns = %s\np = %p\nd= %d\ni = %i\nu = %u\nx = %x\nX = %X\n%% = %%\n", 'A', str, str, INT_MIN, INT_MAX, INT_MAX, -1993, -1993);

	printf("len ft_printf = %i\n", ft_len);
	printf("len printf = %i\n", len);
    return 0;
} */
