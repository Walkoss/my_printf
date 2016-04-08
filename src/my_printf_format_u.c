#include "my_printf.h"

int	format_u(va_list *ap, t_arg *arg)
{
  unsigned int	result;

  result = va_arg(*ap, unsigned int);
  (void)arg;
  my_putnbr_base_unsigned(result, "0123456789");
  return (my_num_len(result));
}
