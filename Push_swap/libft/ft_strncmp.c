/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:36:19 by maalamer          #+#    #+#             */
/*   Updated: 2023/07/13 18:15:28 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i] && i < (n
			- 1))
		i++;
	return (str1[i] - str2[i]);
}

// int main()
// {
// char str1[] = "hello";
// char str2[] = "hello";
// printf("FT: %d\n", ft_strncmp("test\200", "test\0", 6));
// printf("OG: %d\n", strncmp("test\200", "test\0", 6));
// }