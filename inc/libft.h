/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 21:26:20 by acaes             #+#    #+#             */
/*   Updated: 2025/04/10 21:26:20 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//=============== base ===============//
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
void	ft_putchar(char c);
void	ft_putendl(char *str);
void	ft_putnbr(int n);
void	ft_putstr(char *str);
char	*ft_strchr(const char *str, int a);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *str);
size_t	ft_strlen(const char *str);
int		ft_strcmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *str, int a);

//=============== isas ===============//
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);


//=============== list ===============//


//=============== memo ===============//
void	*ft_memcpy(void *dst, const void *src, size_t n);

#endif
