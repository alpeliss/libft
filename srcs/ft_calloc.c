/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 16:34:08 by alpeliss          #+#    #+#             */
/*   Updated: 2020/01/07 16:37:30 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*t;
	size_t	i;

	if (!(t = (char *)malloc(count * size * sizeof(char))))
		return (0);
	i = 0;
	while (i < count * size)
	{
		t[i] = 0;
		i++;
	}
	return ((void *)t);
}
