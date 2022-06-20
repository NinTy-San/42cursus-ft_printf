#include "ft_printf.h"

int	ft_putnbr_hexa(unsigned int nbr, char *base, int size, int len)
{
	long	nb;
	nb = nbr;

	while (nb >= size)
	{
		ft_putnbr_hexa(nb / size, base, size, len);
		nb %= size;
	}
	len += ft_putchar(base[nb], len);
	return (len);
}
