/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:16:08 by maalamer          #+#    #+#             */
/*   Updated: 2023/07/23 12:30:48 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	g;
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	g = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == g)
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}

// int main ()
// {
//    printf("%p", ft_memchr("Hello!", 100, 18));
// }