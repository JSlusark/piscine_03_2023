/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:39:54 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/20 18:39:55 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/* #include <stdio.h>
int main(void)
{
    int return_type;
    // TEST CASES: if string is lowercase or empty is 1
    return_type = ft_str_is_lowercase("012s3ABC4"); // 0 as its digits
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_lowercase("ahahah"); // 1 as all lower
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_lowercase("1----/.;'"); // 0 as no letters
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_lowercase(""); //1 as empty
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_lowercase("abcdABCD");// 0 as it's not lower
    printf("%i", return_type);
    printf("\n");
} */
