#include "my_printf.h"

int	format_p(va_list *ap, t_arg *arg)
{
  void	*result;

  result = va_arg(*ap, void *);
  if (result == NULL)
    {
      my_putstr("(nil)");
      return (5);
    }
  my_putstr("0x");
  my_putnbr_base_unsigned((int)result, "0123456789abcdef");
  return (2);
}
