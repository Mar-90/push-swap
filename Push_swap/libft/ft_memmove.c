/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:28:58 by maalamer          #+#    #+#             */
/*   Updated: 2023/07/24 16:01:38 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ds;
	char	*sr;

	ds = (char *)dst;
	sr = (char *)src;
	if (sr == ds)
		return (dst);
	if (sr < ds)
	{
		while (len--)
		{
			*(ds + len) = *(sr + len);
		}
		return (dst);
	}
	else
	{
		while (len--)
		{
			*ds++ = *sr++;
		}
	}
	return (dst);
}

// int main()
// {
//     char s[] = "mansdf";
//     char d[] = "cer";

//     printf("n: %s",ft_memmove(d, s,4));
// }