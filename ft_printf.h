#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_printf(const char *str, ...);
void	ft_putchar(int c);
void	ft_putstr(char *str);

#endif
