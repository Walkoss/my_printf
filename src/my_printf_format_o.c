#include "my_printf.h"

void	check_flags_o(t_arg *arg, unsigned int result)
{
  if (arg->flags.sharp)
    if (result != 0)
      my_putchar('0');
}

int	format_o(va_list *ap, t_arg *arg)
{
  unsigned int	result;

  result = va_arg(*ap, unsigned int);
  check_flags_o(arg, result);
  my_putnbr_base_unsigned(result, "01234567");
  return (my_num_len(result));
}
