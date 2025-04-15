#ifndef PTF_H
# define PTF_H

# include <stdarg.h>
# include <libft.h>

# ifndef __linux__
#  define NULL_STR "(null)"
#  define NULL_PTR "(nil)"
# else
#  define NULL_STR "(null)"
#  define NULL_STR "0x0"

int	ft_print_hexlow(unsigned long n)
int	ft_print_hexup(unsigned long n)
ssize_t	ft_print_nbr(int n)
int	ft_print_ptf(void *ptr)
int	ft_print_str(char *s)
int	ft_print_unsigned(unsigned int n)
int	ft_printf(const char *format, ...)
int	ft_secure_char(char c)

#endif
