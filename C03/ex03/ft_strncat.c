/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:53:41 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/24 19:36:44 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dlen;
	unsigned int	j;

	dlen = 0;
	j = 0;
	while (dest[dlen] != '\0')
	{
		dlen++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[dlen + j] = src[j];
		j++;
	}
	dest[dlen + j] = '\0';
	return (dest);
}
/* #include <stdio.h>
#include <string.h>
int	main(void)
{
char	source[100] = "are l'esercizio";
char	destination[100]= "Spero di pass";

printf("%s\n",ft_strncat(destination, source, 5));
// printf("%s\n", strncat(destination, source, 5));
} */
