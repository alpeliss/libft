/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 17:11:02 by alpeliss          #+#    #+#             */
/*   Updated: 2020/01/08 17:22:00 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	mini_putnbr(int nb, int fd)
{
	char	c;

	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	c = nb + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb > -10 && nb < 10)
		mini_putnbr(nb, fd);
	else if (nb > 0)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		if (nb == -2147483648)
			write(fd, "-2147483648", 11);
		else
		{
			write(fd, "-", 1);
			ft_putnbr_fd(-nb, fd);
		}
	}
}
