/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:06:27 by maalamer          #+#    #+#             */
/*   Updated: 2023/07/19 12:06:47 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(int ac, char **av)
// {
// 	int i;
// 	int n;

// 	if (ac == 1)
// 		return (1);
// 	else
// 	{
// 		i = 1;
// 		while (i < ac)
// 		{
// 			 n = 0;
// 			while (av[i][n] != '\0')
// 			{
// 				ft_putchar_fd(av[i][n], 1);
// 				n++;
// 			}
// 			i++;
// 		}
// 	}
// 	return (0);
// }