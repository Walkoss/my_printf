#include "my_printf.h"

void	check_plus(t_arg *arg, long long int result)
{
  if (arg->flags.plus)
    if (result >= 0)
      my_putchar('+');
}

void	check_precision(int size, long long int result, t_arg *arg)
{
  int	i;

  if (arg->precision_nbr > 0)
    {
      for (i = 0; i < arg->precision_nbr - my_num_len(result); ++i)
	my_putchar('0');
    }
}

void	check_width(t_arg *arg, long long int result)
{
  int	i;
  int	size;

  size = 0;
  if (!arg->hasprecision && !arg->precision_nbr < my_num_len(result))
    {
      if (arg->width > 0 && arg->flags.plus)
	size = arg->width - my_num_len(result) - 1;
      else
	size = arg->width - my_num_len(result);
      if (arg->width > 0)
	for (i = 0; i < size; i++)
	  my_putchar(' ');
    }
  else if (arg->width > 0 && arg->width > ABS(arg->precision_nbr - my_num_len(result)))
    {
      size = arg->width - arg->precision_nbr;
      if (arg->width > 0)
	for (i = 0; i < size; i++)
	  my_putchar(' ');
      check_precision(size, result, arg);
    }
  check_plus(arg, result);
}

int	print_signed_number(long long int result, t_arg *arg)
{
  check_width(arg, result);
  my_put_nbr_ll(result);
  return (my_num_len(result));
}
