##
## EPITECH PROJECT, 2025
## test
## File description:
## test
##

##
## EPITECH PROJECT, 2025
## test
## File description:
## test
##

LIBNAME 	= libmy.a

NAMEtest = unit_tests

SRC	= ./lib/my/my_compute_power_rec.c \
	  ./lib/my/my_compute_square_root.c \
	  ./lib/my/my_find_prime_sup.c \
	  ./lib/my/my_get_nbr.c \
	  ./lib/my/my_isneg.c \
      ./lib/my/my_is_prime.c \
      ./lib/my/my_putchar.c \
      ./lib/my/my_put_nbr.c \
      ./lib/my/my_putstr.c \
      ./lib/my/my_revstr.c \
      ./lib/my/my_showmem.c \
      ./lib/my/my_showstr.c \
      ./lib/my/my_sort_int_array.c \
      ./lib/my/my_strcapitalize.c \
      ./lib/my/my_strcat.c \
      ./lib/my/my_strcmp.c \
      ./lib/my/my_strcpy.c \
      ./lib/my/my_str_islower.c \
      ./lib/my/my_str_isprintable.c \
      ./lib/my/my_str_isupper.c \
      ./lib/my/my_strlen.c \
      ./lib/my/my_strlowcase.c \
      ./lib/my/my_strncat.c \
      ./lib/my/my_strncmp.c \
      ./lib/my/my_strncpy.c \
      ./lib/my/my_strstr.c \
      ./lib/my/my_strupcase.c \
	  ./lib/my/my_str_isnum.c \
      ./lib/my/my_str_isalpha.c \
      ./lib/my/my_swap.c \
	  ./my_printf/lib/my/ressource/my_printf.c \
	  ./my_printf/lib/my/flags/flag_c.c \
	  ./my_printf/lib/my/flags/flag_s.c \
	  ./my_printf/lib/my/flags/flag_i.c \
	  ./my_printf/lib/my/flags/flag_d.c \
	  ./my_printf/lib/my/flags/flag_per.c \
	  ./my_printf/lib/my/flags/flag_o.c \
	  ./my_printf/lib/my/flags/flag_x.c \
      ./my_printf/lib/my/flags/flag_f.c \
	  ./my_printf/lib/my/flags/flag_xx.c \
	  ./my_printf/lib/my/flags/flag_u.c \
	  ./my_printf/lib/my/flags/flag_p.c \
	  ./my_printf/lib/my/flags/flag_ff.c \
	  ./my_printf/lib/my/flags/flag_e.c \
	  ./my_printf/lib/my/flags/flag_n.c \
	  ./my_printf/lib/my/flags/flag_ee.c \
	  ./my_printf/lib/my/ressource/my_putchar.c \
	  ./my_printf/lib/my/ressource/my_strlen.c \
	  ./my_printf/lib/my/ressource/my_putstr.c \
	  ./my_printf/lib/my/ressource/my_put_nbr.c \
	  ./my_printf/lib/my/ressource/my_put_nbr_o.c \
	  ./my_printf/lib/my/ressource/my_isdigit.c \
	  ./my_printf/lib/my/ressource/my_power.c \
	  ./my_printf/lib/my/ressource/my_getnbr.c \
	  ./my_printf/lib/my/ressource/my_strtoint.c \
	  ./my_printf/lib/my/ressource/my_lenbase.c \
	  ./my_printf/lib/my/ressource/my_lenlong.c \
	  ./my_printf/lib/my/ressource/my_lenpointer.c \
	  ./my_printf/lib/my/ressource/my_reset.c \
	  ./my_printf/lib/my/ressource/my_change_flag.c \
	  ./my_printf/lib/my/ressource/my_countnbr.c \
	  ./my_printf/lib/my/ressource/my_whatcount.c \
	  ./my_printf/lib/my/ressource/my_put_nbr_x.c \
	  ./my_printf/lib/my/ressource/my_put_nbr_xx.c \
	  ./my_printf/lib/my/ressource/my_put_float.c \
	  ./my_printf/lib/my/ressource/my_put_nbr_u.c \
	  ./my_printf/lib/my/ressource/my_put_nbr_p.c \
	  ./my_printf/lib/my/ressource/add_zero.c \
	  ./my_printf/lib/my/ressource/dis_expo.c \
	  ./my_printf/lib/my/ressource/eedis_expoee.c \
	  ./my_printf/lib/my/ressource/calcul.c \
	  ./my_printf/lib/my/ressource/put_expo.c \
	  ./my_printf/lib/my/ressource/eexe_put.c \
	  ./option/option_a.c \
	  ./option/without_function.c \
	  ./option/only_path.c \
	  ./option/option_d.c \
	  ./option/option_l.c \
	  ./ressource/copy_path.c \
	  ./my_printf/lib/my/ressource/my_ispadding.c

OBJ	= $(SRC:.c=.o)

CFLAGS = -g3

all:	$(LIBNAME)

$(LIBNAME):    $(OBJ)
	@ar rc libmy.a $(OBJ)
	@rm $(OBJ)
	epiclang my_ls.c -o my_ls -lmy -L.

vacomp:        $(OBJ)
	ar rc libmy.a $(OBJ)
	rm $(OBJ)
	epiclang my_ls.c -o my_ls -lmy -L. -g3

clean:
	rm -rf *o

fclean:	clean
	rm -rf libmy.a
	rm my_ls

re: fclean all

debug:
	valgrind --leak-check=full --log-file=valgrind.log ./my_ls