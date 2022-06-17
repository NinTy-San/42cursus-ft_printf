#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_puthexa(void *str);
int	ft_putnbr(int nbr, char *base, int size);
int ft_putunbr(unsigned int nbr);

#endif
