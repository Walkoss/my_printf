#include "my_printf.h"

int	verif_arg(char *format, t_arg *arg, int *i)
{
  if (is_flag(format[*i]))
    {
      set_flag(format[*i], arg);
      return (0);
    }
  else if (my_is_digit(format[*i]) && arg->hasprecision == 0)
    {
      *i += parse_width(&format[*i], arg);
      return (1);
    }
  return (2);
}

int	arg_parse(char *format, t_arg *arg)
{
  int	i;
  int	check;

  for (i = 0; format[i] != '\0'; i++)
    {
      check = 2;
      check = verif_arg(format, arg, &i);
      if (format[i] == '.' && check == 2)
        i += parse_precision(&format[i + 1], arg); 
      else if (is_a_len_modifier(&format[i]) && check == 2)
        i += set_len_modifier(&format[i], arg);
      else if (check == 2)
	{
	  if (is_specifier(format[i]))
	    arg->type = format[i];
	  return (i);
	}
    }
  return (i);
}
