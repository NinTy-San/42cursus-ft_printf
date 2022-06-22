#include "ft_printf.h"

int	ft_putptr_hexa(void *p, int len)
{
	unsigned long	adrs;
	int				l;

	l = len;
	if (!p)
		l += ft_putstr("(nil)", len);
	else
	{
		adrs = (unsigned long) p;
		l += ft_putstr("0x", len);
		l += ft_putnbr_hexa(adrs,"0123456789abcdef", len);
	}
	return (l);
}
