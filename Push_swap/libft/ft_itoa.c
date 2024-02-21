/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:11:41 by maalamer          #+#    #+#             */
/*   Updated: 2023/07/19 12:06:40 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_count(int nu)
{
	int	count;

	count = 0;
	if (nu <= 0)
		count++;
	while (nu)
	{
		count++;
		nu = nu / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	long	num;

	i = ft_count(n);
	num = n;
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	str[i--] = '\0';
	while (num)
	{
		str[i] = num % 10 + 48;
		i--;
		num = num / 10;
	}
	return (str);
}

// int main(void)
// {
// 	char *a = ft_itoa(-2147483647);
// 	printf("%s\n", a);
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(-244));
// }