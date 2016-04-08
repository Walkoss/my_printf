#include "libmy.h"

long long int	my_num_len(long long int n)
{
  long long int	i;

  for (i = 0; n >= 10; i++)
    n = n / 10;
  return (i + 1);
}
