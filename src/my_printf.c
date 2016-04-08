#include "my_printf.h"

int	my_printf(char *format, ...)
{
  va_list	ap;
  int		result;

  va_start(ap, format);
  result = my_vfprintf(format, ap);
  va_end(ap);
  return (result);
}
