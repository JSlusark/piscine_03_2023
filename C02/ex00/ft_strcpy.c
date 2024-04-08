/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:39:05 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/20 18:43:20 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char	destination[50];
	char	*source;
	char	*result;

	source = "Hello world";

	result = ft_strcpy(destination, source);
	printf("Copied string: %s\n", result);
} */
