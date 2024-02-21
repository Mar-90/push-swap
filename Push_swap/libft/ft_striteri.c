/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:59:09 by maalamer          #+#    #+#             */
/*   Updated: 2023/07/24 18:59:02 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = -1;
	if (!s || !f)
		return ;
	while (s[++i])
		f(i, &s[i]);
}

// int	main(int ac, char **av)
// {
// 	int i;

// 	i = 1;
// 	if (ac == 1)
// 	{
// 		return (1);
// 	}
// 	else
// 	{
// 		while (i < ac)
// 		{
// 			ft_striter(av[i], my_putstr);
// 			i++;
// 		}
// 	}
// 	return (0);
// }