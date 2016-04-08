#include "my_printf.h"

int	format_e(va_list *ap, t_arg *arg)
{
  return (print_exposant(va_arg(*ap, double), arg, 1));
}

int	format_E(va_list *ap, t_arg *arg)
{
  return (print_exposant(va_arg(*ap, double), arg, 0));
}
