#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putptr_hexa(void *str);
int	ft_putnbr(int nbr);
int ft_putunbr(unsigned int nbr);
int	ft_putnbr_hexa(unsigned int nbr, char *base, int size);

#endif
