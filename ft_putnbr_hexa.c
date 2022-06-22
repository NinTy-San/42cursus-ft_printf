#include "ft_printf.h"

int	ft_putnbr_hexa(unsigned long nb, char *base, int len)
{
	int		l;

	l = len;
	if (nb >= 16)
		l += ft_putnbr_hexa(nb / 16, base, len);
	l += ft_putchar(base[nb % 16]);
	return (l);
}
