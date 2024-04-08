/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:53:45 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/24 15:17:33 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*curr_str;
	char	*curr_find;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		curr_str = str;
		curr_find = to_find;
		while (*curr_str == *curr_find && *curr_find != '\0')
		{
			curr_str++;
			curr_find++;
		}
		if (*curr_find == '\0')
			return (str);
		str++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
char	needle[100] = "Jeff";
char	haystack[100] = "Hello, Jess was here!";
char	*my_func = ft_strstr(haystack, needle);
printf("My function returns: %s \n", my_func);
char	*real_func = strstr(haystack, needle);
printf("Actual function returns: %s \n", real_func);
} */
