/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:39:18 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/20 18:39:19 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/* #include <stdio.h>
int	main(void)
{
	char	source[13] = "Hello Earth!";
	char	destination[5] = "hey";
	char	*result;

	result = ft_strncpy(destination, source, 4);
	printf("%s \n", result);
}
*/
