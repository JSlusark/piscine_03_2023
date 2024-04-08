/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:40:40 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/20 18:40:41 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		return (i);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	size = i;
	return (size);
}
/* #include <stdio.h>
int	main(void)
{
	char	destination[50];
	char	*source;
	unsigned int	result;

	source = "Hello";
	result = ft_strlcpy(destination, source, sizeof(destination));
	printf("lenght of string: %i\n", result);
	printf("copied to dest: %s\n", destination);
} */
