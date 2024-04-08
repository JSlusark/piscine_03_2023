/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 21:33:17 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/13 21:33:19 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

/* #include <stdio.h>
int 	main(void)
{
	char	string[] = "1234567891011121314";
	char string_len;
	string_len = ft_strlen(string);
	printf("Length of the string is: %d\n", string_len);
	return (0);
} */
