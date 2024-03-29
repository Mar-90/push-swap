/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:13:56 by maalamer          #+#    #+#             */
/*   Updated: 2024/02/21 14:31:54 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printlist(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		printf("%d - pos\n", tmp->content);
		tmp = tmp->next;
	}
}

void	printindex(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		printf("%d - index\n", tmp->index);
		tmp = tmp->next;
	}
}

void	sort(t_list **stack_a, t_list **stack_b)
{
	int	length;

	length = ft_lstsize(*stack_a);
	if (length == 2)
		sort2numb(stack_a);
	if (length == 3)
		sort3num(stack_a);
	if (length == 4)
		sort4num(stack_a, stack_b);
	if (length == 5)
		sort5num(stack_a, stack_b);
	if (length > 5)
		sort100ne(stack_a, stack_b);
}

int	main(int ac, char	**av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	pars(&stack_a, av);
	if (sorted(&stack_a))
	{
		ft_lstclear(&stack_a, free);
		exit(1);
	}
	fill_index(&stack_a);
	sort(&stack_a, &stack_b);
	ft_lstclear(&stack_a, free);
	return (0);
}
