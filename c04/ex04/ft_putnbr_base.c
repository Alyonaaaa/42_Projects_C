/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakopyan <aakopyan@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 20:01:01 by aakopyan          #+#    #+#             */
/*   Updated: 2021/05/06 20:01:05 by aakopyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_base(char *base);

int		ft_strlen(char *str);

void	ft_putchar(char c);

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	number;
	unsigned int	len_base;

	len_base = ft_strlen(base);
	if (check_base(base))
	{
		if (nbr < 0)
		{
			number = nbr * -1;
			ft_putchar('-');
		}
		else
			number = nbr;
		if (number < len_base)
			ft_putchar(base[number]);
		else
		{
			ft_putnbr_base(number / len_base, base);
			ft_putnbr_base(number % len_base, base);
		}
	}
}

int		check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
