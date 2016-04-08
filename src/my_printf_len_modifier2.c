#include "my_printf.h"

int	modifier_j_signed(va_list *ap, t_arg *arg)
{
  intmax_t	result;

  result = va_arg(*ap, intmax_t);
  return (print_signed_number((long long int)result, arg));
}

int	modifier_z_signed(va_list *ap, t_arg *arg)
{
  ssize_t	result;

  result = va_arg(*ap, ssize_t);
  return (print_signed_number((long long int)result, arg));
}

int	modifier_t_signed(va_list *ap, t_arg *arg)
{
  ptrdiff_t	result;

  result = va_arg(*ap, ptrdiff_t);
  return (print_signed_number((long long int)result, arg));
}
