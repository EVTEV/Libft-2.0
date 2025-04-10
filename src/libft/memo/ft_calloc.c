/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 22:35:02 by acaes             #+#    #+#             */
/*   Updated: 2025/04/10 22:35:02 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	n;
	void	*tab;

	if (size != 0 && (nbr * size) / size != nbr)
		return (NULL);
	n = (nmemb * size);
	tab = (void *)malloc(sizeof(char) * n);
	if (!str)
		return (NULL);
	ft_bzero(str, n);
	return (str);
}
