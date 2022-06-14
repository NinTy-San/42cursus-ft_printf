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


void	format_case(char flag, va_list arg)
{
	if (flag == 'c')
		ft_putchar(va_arg(arg, int));
	if (flag == 's')
		ft_putstr(va_arg(arg, char *));
	// if (flag == 'p')
	// if (flag == 'd')
	// if (flag == 'i')
	// if (flag == 'u')
	// if (flag == 'x')
	// if (flag == 'X')
	// if (flag == '%')
}

int ft_printf(const char *str, ...)
{
	int		i;
	// int		j;
	// char	*format_str;
    va_list args;

    va_start(args, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			format_case(str[i + 1], args);
			i += 2;
		}
		write (1, &str[i], 1);
		i++;
	}
	// ft_printf("%s",  );

    va_end(args);
    return (1);
}


int main()
{
	ft_printf("it was all %c dream\n%s \n", 'a', "and if you don't know now you know");
    return 0;
}
