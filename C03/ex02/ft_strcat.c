/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:16:01 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/24 19:10:06 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*concat_storage;

	concat_storage = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (concat_storage);
}
/* #include <stdio.h>
#include <string.h>

int	main(void)
{
char	source[5] = "fahrt";
char	destination[3]= "Aus";

// // my function
printf("%s\n", ft_strcat(destination, source));

//real function
// printf("%s\n", strcat(destination, source));

} */
