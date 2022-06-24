/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <adohou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:01:06 by adohou            #+#    #+#             */
/*   Updated: 2022/06/24 18:02:14 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str, int len);
int	ft_putptr_hexa(void *str, int len);
int	ft_putnbr(int nbr, int len);
int	ft_putunbr(unsigned int nbr, int len);
int	ft_putnbr_hexa(unsigned long nbr, char *base, int len);
#endif
