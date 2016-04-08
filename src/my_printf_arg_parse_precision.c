#include "my_printf.h"

int	parse_precision(char *format, t_arg *arg)
{
  int	i;

  i = 0;
  arg->hasprecision = 1;
  if (format[i])
    {
      while (my_is_digit(format[i]))
	{
	  arg->precision_nbr = arg->precision_nbr * 10 + (format[i] - '0');
	  i++;
	}
    }
  else if (!format[i])
    i = 1;
  return (i);
}
