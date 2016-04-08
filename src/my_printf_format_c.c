#include "my_printf.h"

int	format_c(va_list *ap, t_arg *arg)
{
  int	i;

  if (arg->width > 0)
    for (i = 0; i < arg->width - 1; i++)
      my_putchar(' ');
  my_putchar(va_arg(*ap, int));
  return (1);
}
