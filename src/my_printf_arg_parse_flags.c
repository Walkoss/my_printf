#include "my_printf.h"

void	set_flag(char c, t_arg *arg)
{
  if (c == '+')
    arg->flags.plus = 1;
  else if (c == '#')
    arg->flags.sharp = 1;
}

int	is_flag(char c)
{
  char	*flags;

  if ((flags = malloc(sizeof(flags) * 2 + 1)) == NULL)
    return (0);
  flags = "#+";
  if (my_strchr(c, flags))
    {
      //free(flags);
      return (1);
    }
  else
    {
      //free(flags);
      return (0);
    }
}
