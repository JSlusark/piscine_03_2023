/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessica <jessica@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:00:53 by jessica           #+#    #+#             */
/*   Updated: 2024/04/10 13:43:56 by jessica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int ft_ultimate_range(int **range, int min, int max)
{
    int size;
    int i;
    int *temp;

    i = 0;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }

    size = max - min;
    temp = malloc(size * sizeof(int));
    if (!temp)
        return (-1);

    *range = temp;

    while (i < size)
    {
        temp[i] = min + i;
        i++;
    }

    return (size);
}

// int main(void)
// {
//     int *ptr;
//     printf("%d", ft_ultimate_range(&ptr, -5, 5));
// }