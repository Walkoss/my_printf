#include <unistd.h>
#include "libmy.h"

void	bornenegatif(int nb)
{
  if (nb == -2147483647 - 1)
    {
      write(1, "2147483648", 10);
    }
}

void	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
      if ((nb >= 0) && (nb < 10))
	{
	  my_putchar(nb + 48);
	}
      else if (nb >= 10)
	{
	  my_put_nbr(nb / 10);
	  my_put_nbr(nb % 10);
	}
      bornenegatif(nb);
    }
  else if ((nb >= 0) && (nb < 10))
    {
      my_putchar(nb + 48);
    }
  else
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
}
