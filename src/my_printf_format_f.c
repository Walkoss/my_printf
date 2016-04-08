#include "my_printf.h"

int	format_f(va_list *ap, t_arg *arg)
{
  return (print_float(va_arg(*ap, double), arg));
}
