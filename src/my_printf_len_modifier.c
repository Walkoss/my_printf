#include "my_printf.h"

int	modifier_ll_signed(va_list *ap, t_arg *arg)
{
  long long int	result;

  result = va_arg(*ap, long long int);
  return (print_signed_number(result, arg));
}

int	modifier_l_signed(va_list *ap, t_arg *arg)
{
  long int	result;

  result = va_arg(*ap, long int);
  return (print_signed_number((long long int)result, arg));
}

int	modifier_hh_signed(va_list *ap, t_arg *arg)
{
  int		result;

  result = (signed char)va_arg(*ap, int);
  return (print_signed_number((long long int)result, arg));
}

int	modifier_h_signed(va_list *ap, t_arg *arg)
{
  short		result;

  result = (signed short)va_arg(*ap, int);
  return (print_signed_number((long long int)result, arg));
}
