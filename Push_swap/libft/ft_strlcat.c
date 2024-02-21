/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:29:08 by maalamer          #+#    #+#             */
/*   Updated: 2023/07/19 18:34:07 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if ((!dst || !src) && !dstsize)
		return (0);
	while (dst[i] && i < dstsize)
	{
		i++;
	}
	while (src[x] && (i + x + 1) < dstsize)
	{
		dst[i + x] = src[x];
		x++;
	}
	if (i < dstsize)
		dst[i + x] = '\0';
	return (i + ft_strlen(src));
}

/*int main()
{
	char	s[];
	char	d[];

    s[] = "as";
    d[] = "dddd";
    printf("d: %zu\n", ft_strlcat(d,s, 5));
}
*/