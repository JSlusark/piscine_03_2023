/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:40:28 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/20 18:40:29 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*modified_string;

	modified_string = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + ('a' - 'A');
		}
		str++;
	}
	return (modified_string);
}

/* #include <stdio.h>
int main(void)
{
    // TEST CASES: tarnsfor every letter to lowercase
    char *uppercased_test;

    char test_one[100] = "HELLO";
    uppercased_test = ft_strlowcase(test_one);
    printf("%s", uppercased_test);
    printf("\n");

    char test_two[100] = "THIS is A FUN exercise";
    uppercased_test = ft_strlowcase(test_two);
    printf("%s", uppercased_test);
    printf("\n");

    char test_three[100] = "OK I GUESS?";
    uppercased_test = ft_strlowcase(test_three);
    printf("%s", uppercased_test);
    printf("\n");

    char test_four[100] = "Yo, yo, YO, YO, YO, yo!";
    uppercased_test = ft_strlowcase(test_four);
    printf("%s", uppercased_test);
    printf("\n");
} */
