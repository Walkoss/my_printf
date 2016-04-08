#include "my_printf.h"

int	set_len_modifier_hj(char *format, t_arg *arg)
{
  if (format[0] == 'j')
    {
      arg->modifier.j = 1;
      return (0);
    }
  else if (format[0] == 'h' && format[1])
    {
      if (format[1] == 'h')
	{
	  arg->modifier.hh = 1;
	  return (1);
	}      
      else
	{
	  arg->modifier.h = 1;
	  return (0);	
	}    
    }
  return (0);
}

int	set_len_modifier_lz(char *format, t_arg *arg)
{
  if (format[0] == 'z')
    {
      arg->modifier.z = 1;
      return (0);
    }
  else if (format[0] == 'l' && format[1])
    {
      if (format[1] == 'l')
	{
	  arg->modifier.ll = 1;
	  return (1);
	}    
      else
	{
	  arg->modifier.l = 1;
	  return (0); 
	}    
    }
  return (0);
}

int   set_len_modifier_t(char *format, t_arg *arg)
{
  if (format[0] == 't')
    {
      arg->modifier.t = 1;
      return (0);
    }
  return (0);
}


int 	set_len_modifier(char *format, t_arg *arg)
{
  int	i;

  i = 0;
  i += set_len_modifier_hj(format, arg);
  i += set_len_modifier_lz(format, arg);
  i += set_len_modifier_t(format, arg);
  return (i);
}

int	is_a_len_modifier(char *format)
{
  char	*len_modifier;

  if ((len_modifier = malloc(sizeof(len_modifier) * 5 + 1)) == NULL)
    return (0);
  len_modifier = "hljzt";
  if (my_strchr(format[0], len_modifier))
    {
      //free(len_modifier);
      return (1);
    }
  else
    {
      //free(len_modifier);
      return (0);
    }
}
