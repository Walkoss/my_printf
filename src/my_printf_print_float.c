#include "my_printf.h"

int	print_partie_flottante(t_arg *arg, float f)
{
  int 		i;
  int		partie_entiere;
  int		result;
  double	partie_flottante;
  int 		precision;

  precision = 6;
  result = 0;
  if (arg->precision_nbr > 0 && arg->hasprecision)
    precision = arg->precision_nbr;
  for (i = 0; i < precision; i++)
    {
      partie_entiere = (int)(f * 10);
      partie_flottante = f * 10 - (double)partie_entiere;
      f = partie_flottante;
      my_put_nbr(partie_entiere);
      my_num_len(result);
    }
  return (result);
}

int	print_float(float f, t_arg *arg)
{
  int 		partie_entiere;
  float 	partie_flottante;
  int 		result;

  result = 0;
  if (f < 0)
    {
      my_putchar('-');
      result++;
      f *= (-1);
    }
  partie_entiere = (int)f;
  partie_flottante = f - (float)partie_entiere;
  my_put_nbr(partie_entiere);
  my_putchar('.');
  result += my_num_len(partie_entiere) + 1;
  result += print_partie_flottante(arg, partie_flottante);
  return (result);
}
