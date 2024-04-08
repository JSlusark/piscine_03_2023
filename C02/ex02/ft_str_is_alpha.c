/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:39:30 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/20 18:39:32 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
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

    // TEST CASES
    return_type = ft_str_is_alpha("01234"); //0 not alpha and not empty
    printf("01234 : %i", return_type);
    printf("\n");

    return_type = ft_str_is_alpha("AHAHAHAHAHA"); //1 is alpha
    printf("AHAHAHAHAHA: %i", return_type);
    printf("\n");

    return_type = ft_str_is_alpha("1----/.;'"); //0 not alpha and not empty
    printf("1----/.;' : %i", return_type);
    printf("\n");

    return_type = ft_str_is_alpha(""); //1 is empty
    printf("empty: %i", return_type);
    printf("\n");

    return_type = ft_str_is_alpha(" "); //0 not alpha and not empty
    printf("space: %i", return_type);
    printf("\n");

    return_type = ft_str_is_alpha("A1234ABCD"); //0 contains intergers
    printf("A1234ABCD: %i", return_type);
    printf("\n");
} */
