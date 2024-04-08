/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:39:42 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/20 18:39:46 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
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
    // TEST CASES: if string is numeric or empty it is 1
    return_type = ft_str_is_numeric("01234"); //1 digits
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_numeric("AHAHAHAHAHA"); //0 not digits
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_numeric("1----/.;'"); //0 not digits
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_numeric(""); //1 empty
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_numeric("1234ABCD"); //0 contains alpha
    printf("%i", return_type);
    printf("\n");
} */
