/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakopyan <aakopyan@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 20:18:45 by aakopyan          #+#    #+#             */
/*   Updated: 2021/04/29 19:19:56 by aakopyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y)
{
	char a;
	char b;
	char c;
	char d;

	a = '0' + x / 10;
	b = '0' + x % 10;
	c = '0' + y / 10;
	d = '0' + y % 10;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0 - 1;
	while (++x <= 97)
	{
		y = x;
		while (++y <= 99)
		{
			ft_putchar(x, y);
		}
	}
	write(1, "98 99", 5);
}
