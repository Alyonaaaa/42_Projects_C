/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakopyan <aakopyan@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 19:29:28 by aakopyan          #+#    #+#             */
/*   Updated: 2021/04/29 12:26:09 by aakopyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	positive(int nb);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 12);
		return ;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	if (nb < 0)
	{
		nb = (-1) * nb;
		write(1, "-", 1);
	}
	if (nb > 0)
	{
		positive(nb);
	}
}

void	positive(int nb)
{
	long	l;
	int		n;
	char	c;

	l = 1;
	while (nb / l != 0)
	{
		l = l * 10;
	}
	l = l / 10;
	while (l >= 1)
	{
		n = (nb / l) % 10;
		c = '0' + n;
		write(1, &c, 1);
		l = l / 10;
	}
}
