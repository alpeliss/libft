/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 10:01:03 by alpeliss          #+#    #+#             */
/*   Updated: 2020/01/06 10:03:26 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	tmp = 0;
	if (!s)
		return (tmp);
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			tmp = &s[i];
		i++;
	}
	if (!c)
		tmp = &s[i];
	return (tmp);
}
