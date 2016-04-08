#include "libmy.h"

void	my_putnbr_base_unsigned(unsigned int nbr, char *base)
{
  unsigned int	length;

  length = my_strlen(base);
  if (nbr == 0)
    my_put_nbr(0);
  if (nbr > 0)
    {
      if (nbr != 0)
	{
	  my_putnbr_base(nbr / length, base);
	  my_putchar(base[nbr % length]);
	}
    }
}
