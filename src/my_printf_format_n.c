#include "my_printf.h"

int	format_n(va_list *ap, t_arg *arg)
{
  int	result;
  char	*str;

  str = va_arg(*ap, char *);
  if (str == NULL)
    {
      my_put_nbr(0);		
      return (1);
    }
  result = my_strlen(str);
  my_put_nbr(result);
  return (result);
}
