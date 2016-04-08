SLIB = libmy_printf_`uname -m`-`uname -s`.a
DLIB = libmy_printf_`uname -m`-`uname -s`.so
CC = gcc
SRC = libmy/my_is_digit.c 			\
	libmy/my_putstr.c 			\
	libmy/my_power_rec.c			\
	libmy/my_strcmp.c 			\
	libmy/my_put_nbr.c 			\
	libmy/my_putchar.c 			\
	libmy/my_strlen.c 			\
	libmy/my_num_len.c 			\
	libmy/my_put_nbr_base.c 		\
	libmy/my_put_nbr_base_unsigned.c	\
	libmy/my_put_nbr_ll.c 			\
	libmy/my_strchr.c 			\
	src/my_printf_arg_parse.c 		\
	src/my_printf_arg_parse_flags.c 	\
	src/my_printf_arg_parse_l_modifier.c 	\
	src/my_printf_arg_parse_precision.c 	\
	src/my_printf_arg_parse_specifier.c 	\
	src/my_printf_arg_parse_width.c 	\
	src/my_printf_arg_put.c 		\
	src/my_printf.c 			\
	src/my_printf_format_c.c 		\
	src/my_printf_format_d.c 		\
	src/my_printf_format_f.c 		\
	src/my_printf_format_e.c 		\
	src/my_printf_format_o.c 		\
	src/my_printf_format_percent.c 		\
	src/my_printf_format_s.c 		\
	src/my_printf_format_u.c 		\
	src/my_printf_format_x2.c 		\
	src/my_printf_format_x.c 		\
	src/my_printf_format_p.c 		\
	src/my_printf_format_n.c 		\
	src/my_printf_init_arg_comd.c 		\
	src/my_printf_len_modifier2.c 		\
	src/my_printf_len_modifier.c 		\
	src/my_printf_print_signed_number.c 	\
	src/my_printf_print_float.c	 	\
	src/my_printf_print_exposant.c	 	\
	src/my_printf_vfprintf.c
OBJ = $(SRC:%.c=%.o)
FLAGS = -W -Wall -Werror -pedantic -fPIC
.PHONY: clean fclean re my_printf_dynamic my_printf_static all
all: my_printf_static my_printf_dynamic
my_printf_static: $(OBJ)
		ar rc $(SLIB) $(OBJ)
		ranlib $(SLIB)
my_printf_dynamic: $(OBJ)
		$(CC) $(FLAGS) -shared -L. $(OBJ) -o $(DLIB)
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(SLIB) 
	rm -rf $(DLIB)
re: fclean all