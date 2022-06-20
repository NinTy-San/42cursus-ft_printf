#include "ft_printf.h"

int	ft_get_hexa(unsigned long adrs, int len)
{
	char	*basehexa;

	basehexa = "0123456789abcdef";
	if (adrs > 15)
		ft_get_hexa(adrs / 16, len);
	len += ft_putchar (basehexa[adrs % 16], len);
	return (len);
}

int	ft_putptr_hexa(void *p, int len)
{
	unsigned long	adrs;

	if (!p)
		len += ft_putstr("(nil)", len);
	else
	{
		adrs = (unsigned long) p;
		len += ft_putstr("0x", len);
		len += ft_get_hexa(adrs, len);
	}
	return (len);
}
