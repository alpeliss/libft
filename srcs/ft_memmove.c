/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 17:14:33 by alpeliss          #+#    #+#             */
/*   Updated: 2020/01/07 17:19:05 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			t;
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	t = len;
	if (dst > src)
	{
		while (t > 0)
		{
			dest[t - 1] = source[t - 1];
			t--;
		}
	}
	else if (src > dst)
		ft_memcpy(dst, src, len);
	return (dst);
}
