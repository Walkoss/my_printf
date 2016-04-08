#include "my_printf.h"

int	format_percent(va_list *ap, t_arg *arg)
{
  (void)ap;
  (void)arg;
  my_putchar('%');
  return (1);
}
