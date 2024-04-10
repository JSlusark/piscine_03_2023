/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessica <jessica@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:13:57 by jessica           #+#    #+#             */
/*   Updated: 2024/04/09 15:58:40 by jessica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
int *ft_range(int min, int max)
{
    int *array;
    int size;
    int i;

    i = 0;

    if (min >= max)
        return (NULL);

    size = max - min;

    array = malloc(size * sizeof(int));

    while (i <= size)
    {
        array[i] = min;
        i++;
        min++;
    }

    return (array);
}

// int main(void)
// {
//     int *range;
//     range = ft_range(3, 5);

//     while (*range)
//     {
//         printf("%d ", *range);
//         range++;
//     }
// }