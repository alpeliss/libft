/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 16:38:27 by alpeliss          #+#    #+#             */
/*   Updated: 2020/01/09 14:44:43 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*tmp;
	size_t	i;

	if (!s || n <= 0)
		return (0);
	i = 0;
	tmp = (char *)s;
	while (i < n)
	{
		if (tmp[i] == c)
			return (&tmp[i]);
		i++;
	}
	return (0);
}
