#include <unistd.h>
#include "libmy.h"

void	bornenegatif_ll(long long int nb)
{
  if (nb == -9223372036854775807)
    {
      write(1, "9223372036854775807", my_strlen("9223372036854775807"));
    }
}

void	my_put_nbr_ll(long long int nb)
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
	  my_put_nbr_ll(nb / 10);
	  my_put_nbr_ll(nb % 10);
	}
      bornenegatif_ll(nb);
    }
  else if ((nb >= 0) && (nb < 10))
    {
      my_putchar(nb + 48);
    }
  else
    {
      my_put_nbr_ll(nb / 10);
      my_put_nbr_ll(nb % 10);
    }
}
