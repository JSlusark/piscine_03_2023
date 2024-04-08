/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:16:06 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/24 16:44:04 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[100] = "abcds";
	char	str2[100] = "abcds";
	int	returned_n = ft_strcmp(str1, str2);
	printf("returns: %i \n", returned_n);

	int function_return = strcmp(str1, str2);
	printf("returns: %i \n", function_return);
} */
