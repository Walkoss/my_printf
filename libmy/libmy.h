#ifndef __LIBMY__
#define __LIBMY__

void		my_put_nbr(int nb);
void		my_putchar(char c);
void		my_putstr(char *str);
int		my_strcmp(char *s1, char *s2);
int		my_strlen(char *str);
int 		my_strchr(char c, char *str);
int 		my_is_digit(char c);
void		my_putnbr_base(int nbr, char *base);
void		my_putnbr_base_unsigned(unsigned int nbr, char *base);
long long int	 my_num_len(long long int n);
void		my_put_nbr_ll(long long int nb);
int		my_power_rec(int nb, int power);

#endif
