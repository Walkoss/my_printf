#include "my_printf.h"

int	my_vfprintf(char *format, va_list ap)
{
  int			i;
  t_arg			arg;
  t_comd_format		comd_format;

  init_arg_and_comd(&arg, &comd_format);
  for (arg.i = 0; format[arg.i] != '\0'; arg.i++)
    {
      if (format[arg.i] == '%' && format[arg.i + 1])
	{
	  fill_arg_empty(&arg);
	  arg.i += arg_parse(format + arg.i + 1, &arg) + 1;
	  arg.len_str += arg_put(&arg, &comd_format, &ap);
	}
      else
	{
	  my_putchar(format[arg.i]);
	  arg.len_str += 1;
	}
    }
  return (arg.len_str);
}
