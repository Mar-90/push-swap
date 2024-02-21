/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:24:37 by maalamer          #+#    #+#             */
/*   Updated: 2023/07/13 18:16:05 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

//  int main()
//  {
//     char c, result;
//     c = 'M';
//   	result = ft_toupper(c);
//     printf("The result is %c\n", result);
//     c = 'A';
//     result = ft_toupper(c);
//     printf("The result is %c\n", result);

//     c = '+';
//   	result = ft_toupper(c);
//     printf("The result is %c\n", result);

//   	return (0);
// }