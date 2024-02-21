/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:30:34 by maalamer          #+#    #+#             */
/*   Updated: 2023/07/13 18:16:00 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

//  int main()
//  {
//  	char c, result;

//      c = 'M';
//  	result = ft_tolower(c);
//      printf("The result is %c\n", result);

//      c = 'A';
//  	result = ft_tolower(c);
//      printf("The result is %c\n", result);

//      c = '+';
//  	result = ft_tolower(c);
//      printf("The result is %c\n", result);

//  	return (0);
//  }