#include "my_printf.h"

int	parse_width(char *format, t_arg *arg)
{
  int	i;

  i = 0;
  if (my_is_digit(format[i]) && arg->hasprecision == 0)
    {
      if (format[i])
	{
	  while (my_is_digit(format[i]))
	    {
	      arg->width = arg->width * 10 + (format[i] - '0');
	      i++;
	    }
	}
      else if (!format[i])
	i = 1;
      return (i - 1);
    }
  return (0);
}
