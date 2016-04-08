#include "my_printf.h"

void	check_flags_x(t_arg *arg, unsigned int result)
{
  if (arg->flags.sharp)
    if (result != 0)
      my_putstr("0x");
}

int	format_x(va_list *ap, t_arg *arg)
{
  unsigned int	result;

  result = va_arg(*ap, unsigned int);
  check_flags_x(arg, result);
  my_putnbr_base_unsigned(result, "0123456789abcdef");
  return (my_num_len(result));
}
