/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakopyan <aakopyan@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 20:00:40 by aakopyan          #+#    #+#             */
/*   Updated: 2021/05/06 20:00:43 by aakopyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int count;
	unsigned int length;
	unsigned int length2;

	length = 0;
	count = 0;
	length2 = 0;
	while (src[length] != '\0')
		length++;
	while (dest[length2] != '\0')
		length2++;
	while (src[count] != '\0')
	{
		if (count >= size)
			return (length + length2);
		dest[length2 + count] = src[count];
		count++;
	}
	if (size != 0)
		dest[count] = '\0';
	return (length + length2);
}
