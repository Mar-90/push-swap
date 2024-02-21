/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:29:16 by maalamer          #+#    #+#             */
/*   Updated: 2023/08/09 20:46:09 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ss;

	i = 0;
	ss = ft_strlen(src);
	if (dstsize == 0)
		return (ss);
	if (ft_strlen(src) == 0)
	{
		dst[0] = '\0';
		return (ft_strlen(src));
	}
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ss);
}

// int main()
// {
//     char d[] = {"marwa"};
//     char s[] = {""};
// 	char src[] = "coucou";
// 	char dest[10]; memset(dest, 'A', 10);
// 	ft_strlcpy(dest, src, 0);
// 	ft_strlcpy(dest, src, 1);
// 	size_t i = ft_strlcpy(dest, src, 2);
// 	if (i == strlen(src))
// 		printf("hi0\n");
// 	if ( dest[0] == 'c')
// 		printf("hi1\n");
// 	if (dest[1] == 0)
// 		printf("hi2\n");
// 	if (dest[2] == 'A')
// 		printf("hi3\n");
// 	// if (!strcmp(src, dest))
// 	// 	printf("hi4\n");
// 	// if ()
//     // printf("d: %zu \n",ft_strlcpy(d,s,3));
// 	// printf("%s\n",d);
// 	// int x;
// 	// x = strlcpy(d,s,3);
// 	// printf("Right answer %s\n",s);
//     // return (0);
// }