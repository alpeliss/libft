/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 12:17:34 by alpeliss          #+#    #+#             */
/*   Updated: 2020/01/09 14:44:03 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	if (!dst || !src)
		return (0);
	a = (unsigned char *)src;
	b = (unsigned char *)dst;
	i = 0;
	while (i < n && (unsigned char)a[i] != (unsigned char)c)
	{
		b[i] = a[i];
		i++;
	}
	if (i == n)
		return (NULL);
	b[i] = a[i];
	return (&b[i + 1]);
}
