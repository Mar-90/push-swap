/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:15:42 by maalamer          #+#    #+#             */
/*   Updated: 2024/02/21 14:30:56 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_2d(char **x)
{
	int	j;

	j = 0;
	while (x[j] != NULL)
	{
		free(x[j]);
		j++;
	}
	free(x);
}

void	exit_any(t_list **stack_a, char *s, char **x)
{
	free_2d(x);
	ft_lstclear(stack_a, free);
	error_exit(s);
}

void	error_exit(char *arg_str)
{
	free(arg_str);
	write(2, "Error\n", 6);
	exit(1);
}
