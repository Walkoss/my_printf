#include "my_printf.h"

int	get_size(t_arg *arg, char *str)
{
  int	size;

  if (arg->precision_nbr > 0)
    size = arg->width - arg->precision_nbr;
  else
    size = arg->width - my_strlen(str);
  return (size);
}

int	print_width(t_arg *arg, char *str, int size)
{
  int	i;

  if (arg->width > my_strlen(str))
    for (i = 0; i < size; i++)
      my_putchar(' ');
}

int	format_s(va_list *ap, t_arg *arg)
{
  char	*str;
  int	i;
  int	size;

  str = va_arg(*ap, char*);
  if (str == NULL)
    {
      my_putstr("(null)");
      return (6);
    }
  size = get_size(arg, str);
  print_width(arg, str, size);
  if (arg->hasprecision && arg->precision_nbr > 0)
    for (i = 0; i < arg->precision_nbr; i++)
      my_putchar(str[i]);
  else
    my_putstr(str);
  return (my_strlen(str));
}
