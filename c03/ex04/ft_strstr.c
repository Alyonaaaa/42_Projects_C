/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakopyan <aakopyan@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 20:00:18 by aakopyan          #+#    #+#             */
/*   Updated: 2021/05/06 20:00:21 by aakopyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int ii;

	i = 0;
	ii = 0;
	while (str[i] != '\0')
	{
		ii = 0;
		if (str[i] == to_find[ii])
		{
			while (str[i + ii] == to_find[ii] && str[i + ii] != '\0')
			{
				if (to_find[ii] == '\0')
					return (str + i);
				ii++;
			}
		}
		i++;
	}
	return (0);
}
