#include "my_printf.h"

void	fill_arg_empty(t_arg* arg)
{
  arg->flags.plus = 0;	
  arg->flags.sharp = 0;	
  arg->width = 0;
  arg->hasprecision = 0;
  arg->precision_nbr = 0;
  arg->modifier.hh = 0;
  arg->modifier.h = 0;
  arg->modifier.ll = 0;
  arg->modifier.l = 0;
  arg->modifier.j = 0;
  arg->modifier.z = 0;
  arg->modifier.t = 0;
  arg->type = 0;
}

void	fill_comd_format(t_comd_format* comd_format)
{
  int	i;

  i = 0;
  for (i = 0; i < 123; i++)
    comd_format->f[i] = NULL;
  comd_format->f['d'] = &format_d;
  comd_format->f['c'] = &format_c;
  comd_format->f['i'] = &format_d;
  comd_format->f['s'] = &format_s;
  comd_format->f['o'] = &format_o;
  comd_format->f['u'] = &format_u;
  comd_format->f['x'] = &format_x;
  comd_format->f['X'] = &format_X;
  comd_format->f['f'] = &format_f;
  comd_format->f['F'] = &format_f;
  comd_format->f['e'] = &format_e;
  comd_format->f['E'] = &format_E;
  comd_format->f['p'] = &format_p;
  comd_format->f['n'] = &format_n;
  comd_format->f['%'] = &format_percent;
}

void	init_arg_and_comd(t_arg* arg, t_comd_format* comd_format)
{
  arg->i = 0;
  arg->len_str = 0;
  fill_arg_empty(arg);
  fill_comd_format(comd_format);
}
