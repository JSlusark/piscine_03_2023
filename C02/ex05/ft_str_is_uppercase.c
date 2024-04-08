/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:40:06 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/20 18:40:08 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
    // TEST CASES: if string is all uppercase or empty return is 1
    int return_type;
    return_type = ft_str_is_uppercase("01234"); // 0 as digits
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_uppercase("AHAHAHAHAHA"); //1 as all upper
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_uppercase("1----/.;'"); //0 as no upper
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_uppercase(""); //1 as empty
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_uppercase("1234ABCD"); //0 as not all upper
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_uppercase("hara hara"); // 0 as no upper
    printf("%i", return_type);
    printf("\n");
} */
