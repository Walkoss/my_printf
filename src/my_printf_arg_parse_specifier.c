#include "my_printf.h"

int	is_specifier(char c)
{
  char	*specifier;

  if ((specifier = malloc(sizeof(specifier) * 15 + 1)) == NULL)
    return (0);
  specifier = "%scdiouxXfFeEpn";
  if (my_strchr(c, specifier))
    {
      //free(specifier);
      return (1);
    }
  else
    {
      //free(specifier);
      return (0);
    }
}
