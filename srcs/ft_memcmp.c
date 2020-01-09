/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 16:44:24 by alpeliss          #+#    #+#             */
/*   Updated: 2020/01/09 14:49:05 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ab(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sa;
	unsigned char	*sb;
	size_t			i;

	sa = (unsigned char *)s1;
	sb = (unsigned char *)s2;
	if ((!sa && !sb) || n <= 0)
		return (0);
	else if (!sa)
		return (-sb[0]);
	else if (!sb)
		return (sa[0]);
	i = 0;
	while (i < n - 1)
	{
		if (sa[i] != sb[i])
			return (ab(sa[i]) - ab(sb[i]));
		i++;
	}
	return (ab(sa[i]) - ab(sb[i]));
}
