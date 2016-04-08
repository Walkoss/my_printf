#include "my_printf.h"

int	display_exposant(int count, float f, t_arg *arg, int mode)
{
  int i;

  if (f < 1)
    for (;f < 1;count++)
      f *= 10;
  i = print_float(f, arg);
  mode ? my_putchar('e') : my_putchar('E');
  (count < 0) ? my_putchar('-') : my_putchar('+');
  count = count < 0 ? count * (-1) : count;
  i += 2;
  if (count >= 10)
    {
      my_put_nbr(count);
      i += my_num_len(count);
    }
  else
    {
      my_putchar('0');
      my_put_nbr(count);
      i += 1 + my_num_len(count);
    }
}

int	print_exposant(float f, t_arg *arg, int mode)
{
  int	count;

  count = 0;
  if (f < 0)
    {
      my_putchar('-');
      f = f * (-1);
    }
  if (f >= 10)
    for (count = 0; f >= 10; count++)
      f = f / 10;
  else if (f < 1)
    for (count = 0; f < 1; count--)
      f = f * 10;
  return (display_exposant(count, f, arg, mode));
}
