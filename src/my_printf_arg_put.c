#include "my_printf.h"

int	arg_put(t_arg *arg, t_comd_format *comd_format, va_list *ap)
{
  char	*specifier;

  if ((specifier = malloc(sizeof(specifier) * 15 + 1)) == NULL)
    return (0);
  specifier = "%scdiouxXfFeEpn";
  if (my_strchr(arg->type, specifier))
    {
      //free(specifier);
      return (comd_format->f[arg->type](ap, arg));
    }
  else
    {
      //free(specifier);
      return (RETURN_FAIL);
    }
}
