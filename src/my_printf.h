#ifndef __MY_PRINTF__
# define __MY_PRINTF__

/*** Standard Libraries ***/
#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>

/*** Libraries ***/
#include "../libmy/libmy.h"

/*** Define ***/
#define RETURN_FAIL -1
#define RETURN_SUCCESS 0
#define ABS(x) (x < 0) ? -x : x

/*** Structure ***/
typedef struct	s_flags
{
  int	plus;
  int	sharp;
}		t_flags;

typedef struct	s_modifier
{
  int	hh;
  int	h;
  int	ll;
  int	l;
  int	j;
  int	z;
  int 	t;
}		t_modifier;

typedef struct	s_arg
{
  t_flags	flags;
  int		width;
  int   	hasprecision;
  int   	precision_nbr;
  t_modifier 	modifier;
  char 		type;
  int 		i;
  int 		len_str;
}	   	t_arg;

typedef struct	s_comd_format
{
  char		c;
  int 		(*f[123])(va_list*, t_arg*);
}		t_comd_format;

typedef struct  s_comd_modifier
{
  int     	modifier;
  int 		(*f)(va_list *ap, t_arg *arg);
}       	t_comd_modifier;

/*** Prototypes ***/
int	my_printf(char *format, ...);
int	my_vfprintf(char *format, va_list ap);
void	init_arg_and_comd(t_arg *arg, t_comd_format *comd_format);
void	fill_arg_empty(t_arg *arg);
int 	arg_parse(char *format, t_arg *arg);
int	is_flag(char c);
void	set_flag(char c, t_arg *arg);
int   	parse_width(char *format, t_arg *arg);
int	parse_precision(char *format, t_arg *arg);
int	is_a_len_modifier(char *format);
int 	set_len_modifier(char *format, t_arg *arg);
int 	is_specifier(char c);
int 	arg_put(t_arg *arg, t_comd_format *comd_format, va_list *ap);
int	format_d(va_list *ap, t_arg* arg);
int	format_s(va_list *ap, t_arg* arg);
int 	format_percent(va_list *ap, t_arg *arg);
int 	format_o(va_list *ap, t_arg *arg);
int 	format_u(va_list *ap, t_arg *arg);
int 	format_x(va_list *ap, t_arg *arg);
int 	format_X(va_list *ap, t_arg *arg);
int 	format_c(va_list *ap, t_arg *arg);
int   	format_f(va_list *ap, t_arg *arg);
int   	format_e(va_list *ap, t_arg *arg);
int   	format_E(va_list *ap, t_arg *arg);
int  	format_p(va_list *ap, t_arg *arg);
int   	format_n(va_list *ap, t_arg *arg);
int   	modifier_ll_signed(va_list *ap, t_arg* arg);
int   	modifier_l_signed(va_list *ap, t_arg* arg);
int   	modifier_hh_signed(va_list *ap, t_arg* arg);
int   	modifier_h_signed(va_list *ap, t_arg* arg);
int   	modifier_j_signed(va_list *ap, t_arg* arg);
int   	modifier_z_signed(va_list *ap, t_arg* arg);
int   	modifier_t_signed(va_list *ap, t_arg *arg);
int   	print_signed_number(long long int result, t_arg *arg);
int     print_float(float f, t_arg *arg);
int     print_exposant(float f, t_arg *arg, int mode);

#endif
