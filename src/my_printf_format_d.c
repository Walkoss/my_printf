#include "my_printf.h"

int	get_result_with_modifier(va_list *ap, t_arg *arg)
{
  int	new_result;
  int	i;

  t_comd_modifier	comd_modifier[8] = {
    {arg->modifier.ll, modifier_ll_signed},
    {arg->modifier.l, modifier_l_signed},
    {arg->modifier.hh, modifier_hh_signed},
    {arg->modifier.h, modifier_h_signed},
    {arg->modifier.j, modifier_j_signed},
    {arg->modifier.z, modifier_z_signed},
    {arg->modifier.t, modifier_t_signed},
    {-1, NULL}
  };
  new_result = 0;
  for (i = 0; comd_modifier[i].modifier != -1; i++)
    {
      if (comd_modifier[i].modifier)
	new_result = comd_modifier[i].f(ap, arg);
    }
  if (!new_result)
    return (print_signed_number(va_arg(*ap, int), arg));
  return (new_result);
}

int	format_d(va_list *ap, t_arg *arg)
{
  int	i;

  i = 0;
  i = get_result_with_modifier(ap, arg);
  return (i);
}
