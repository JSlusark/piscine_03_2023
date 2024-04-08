/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:40:14 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/20 18:40:15 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
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
    // TEST CASES: if string is printable or empty return is 1
    int return_type;
    return_type = ft_str_is_printable("0"); //1 is printable
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_printable("\t"); // 0 not printable
    printf("\t");
    printf("%i", return_type);
    printf("\n");


    return_type = ft_str_is_printable("\n"); //0 not printable
    printf("\n");
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_printable("hello"); //1 is printable
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_printable(""); //1 is printable as empty
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_printable("1234ABCD"); //1 is printable
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_printable("hara hara"); //1 is printable
    printf("%i", return_type);
    printf("\n");

    return_type = ft_str_is_printable(" "); //1 space is considered printable
    printf("%i", return_type);
    printf("\n");
} */
