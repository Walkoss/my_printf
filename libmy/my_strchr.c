#include "libmy.h"

int 	my_strchr(char c, char *str)
{
  int	i;

  for (i = 0; str[i] != '\0'; i++)
    if (str[i] == c)
      return (1);
  return (0);
}
