/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 12:17:34 by alpeliss          #+#    #+#             */
/*   Updated: 2020/01/07 12:34:51 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	a = (char *)src;
	b = (char *)dst;
	i = 0;
	while (i < n && a[i] != (unsigned char)c)
	{
		b[i] = a[i];
		i++;
	}
	if (i == n)
		return (NULL);
	b[i] = a[i];
	return (&b[i + 1]);
}
