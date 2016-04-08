#include "my_printf.h"

void	check_flags_X(t_arg *arg, unsigned int result)
{
  if (arg->flags.sharp)
    if (result != 0)
      my_putstr("0X");
}
		
int	format_X(va_list *ap, t_arg *arg)
{
  unsigned int	result;

  result = va_arg(*ap, unsigned int);
  check_flags_X(arg, result);
  my_putnbr_base_unsigned(result, "0123456789ABCDEF");
  return (my_num_len(result));
}
