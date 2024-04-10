/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessica <jessica@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:33:01 by jessica           #+#    #+#             */
/*   Updated: 2024/04/09 15:59:26 by jessica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char *ft_strdup(char *src)
{

    char *duplicate;
    int i;

    i = 0;
    duplicate = malloc(sizeof(*src));
    if (duplicate == NULL)
    {
        return (NULL);
    }

    while (src[i] != '\0')
    {
        duplicate[i] = src[i];
        i++;
    }
    duplicate[i] = '\0';

    return (duplicate);
}

// int main(void)
// {
//     ft_strdup("hello");
//     printf("%s\n", ft_strdup("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()"));
//     printf("%s\n", strdup("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()"));
//     // ft_strdup();
//     // malloc();
// }