/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:52:13 by maalamer          #+#    #+#             */
/*   Updated: 2023/07/27 11:47:18 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		lastindex;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	str = (char *)s1;
	if (str == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	lastindex = ft_strlen(s1);
	while (lastindex && ft_strrchr(set, s1[lastindex]))
		lastindex--;
	str = ft_substr((char *)s1, 0, lastindex + 1);
	return (str);
}
// int	main(void)
// {
// 	char str [] = "Hello \t  Please\n Trim me !\t\t\t\n ";
// 	char set [] = "Hello \t  Please\n Trim me cc!ccc";
// 	printf("%s\n", ft_strtrim(str, set));
// 	return (0);
// }