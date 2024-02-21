/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:16:35 by maalamer          #+#    #+#             */
/*   Updated: 2023/07/13 18:14:27 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
	{
		return (0);
	}
	while (str1[i] == str2[i] && i < (n - 1))
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
// int main (void)
// {
//     char str1[] = "hello";
//     char str2[] = "hqllo";

//     printf("%d\n", memcmp(str1,str2,2));
//     printf("%d\n", ft_memcmp(str1,str2,2));
// }