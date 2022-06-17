#include "ft_printf.h"

int	ft_putnbr_hexa(unsigned int nbr, char *base, int size)
{
	long	nb;
	int		len;
	nb = nbr;
	len = 0;

	while (nb >= size)
	{
		ft_putnbr_hexa(nb / size, base, size);
		nb %= size;
	}
	len += ft_putchar(base[nb]);
	return (len);
}
