/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:40:22 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/20 18:40:24 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*modified_string;

	modified_string = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (modified_string);
}

/* #include <stdio.h>
int main(void)
{
    // TEST CASES: transforms every letter to uppercase
    char *uppercased_test;

    char test_one[100] = "helLo";
    uppercased_test = ft_strupcase(test_one);
    printf("%s", uppercased_test);
    printf("\n");

    char test_two[100] = "This is A FUN exercise";
    uppercased_test = ft_strupcase(test_two);
    printf("%s", uppercased_test);
    printf("\n");

    char test_three[100] = "IT'S UPPER ALREADY";
    uppercased_test = ft_strupcase(test_three);
    printf("%s", uppercased_test);
    printf("\n");

    char test_four[100] = "Yo, yo, YO, YO, YO, yo!";
    uppercased_test = ft_strupcase(test_four);
    printf("%s", uppercased_test);
    printf("\n");
} */
