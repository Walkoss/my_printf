#include "libmy.h"

void	my_putnbr_base(int nbr, char *base)
{
  int	length;

  length = my_strlen(base);
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = -nbr;
    }
  if (nbr > 0)
    {
      if (nbr != 0)
	{
	  my_putnbr_base(nbr / length, base);
	  my_putchar(base[nbr % length]);
	}
    }
}
