#include "ft_printf.h"

int	ft_get_hexa(unsigned long adrs)
{
	char	*basehexa;
	int		len;

	basehexa = "0123456789abcdef";
	len = 0;
	if (adrs > 15)
		ft_get_hexa(adrs / 16);
	len += ft_putchar (basehexa[adrs % 16]);
	return (len);
}

int	ft_putptr_hexa(void *p)
{
	unsigned long	adrs;
	int len;

	len = 0;
	if (!p)
		len += ft_putstr("(nil)");
	else
	{
		adrs = (unsigned long) p;
		len += ft_putstr("0x");
		len += ft_get_hexa(adrs);
	}
	return (len);
}
