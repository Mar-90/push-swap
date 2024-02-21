/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:36:58 by maalamer          #+#    #+#             */
/*   Updated: 2023/07/27 11:47:32 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

//  int main()
//  {
//  	char c, result;

//      c = '*';
//   	result = ft_isalpha(c);
//      printf("The result is %d\n", result);

//     //  c = 'g';
//   	// result = ft_isalpha(c);
//     //  printf("The result is %d\n", result);

//     //  c = '+';
//   	// result = ft_isalpha(c);
//     //  printf("The result is %d\n", result);

//   	return (0);
// }
