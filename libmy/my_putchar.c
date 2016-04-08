#include <unistd.h>
#include "libmy.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
