/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessica <jessica@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 10:33:49 by jessica           #+#    #+#             */
/*   Updated: 2024/04/11 19:22:07 by jessica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *string, int len)
{
    int i;
    i = 0;
    while (string[i] != '\0')
    {
        i++;
        len++;
    }
    printf("character count %i\n", len);
    return (len);
}
int ft_allcharalen(char **strs, int size)
{
    // i use this to loop through each word/string and calculate the length of all the characters with ft_strlen;
    int w_count;
    w_count = 0;
    int c_count;
    c_count = 0;

    while (w_count < size)
    {
        c_count = ft_strlen(strs[w_count], c_count);
        w_count++;
    }
    return (c_count);
}

void str_cpy(char **src, char *dest, int size, char *space)
{
    int word;
    int character;
    int i;

    i = 0;
    word = 0;

    while (word < size)
    {
        // will adjust loop logic repetition i a later moment
        character = 0;
        while (src[word][character] != '\0')
        {
            dest[i] = src[word][character];
            character++;
            i++;
        }
        character = 0;
        while (space[character] != '\0' && word < (size - 1))
        {
            dest[i] = space[character];
            character++;
            i++;
        }
        word++;
    }

    dest[i] = '\0';
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int chars_len;
    int separator_len;
    int total_len;
    char *concatenation;

    if (size == 0)
        return ((char *)malloc(sizeof(char)));

    chars_len = ft_allcharalen(strs, size);
    separator_len = ft_strlen(sep, 0);
    total_len = chars_len + separator_len;

    printf("charas: %d separator: %d total: %d\n", chars_len, separator_len, total_len);

    concatenation = (char *)malloc((total_len) * sizeof(char));
    str_cpy(strs, concatenation, size, sep);
    return (concatenation);
}
// int main(void)
// {
//     // char *arrayOfStrings[] = {"Come", "join", "us!"};
//     char *arrayOfStrings[] = {"Hello", "world", "!"};
//     char *sep;
//     sep = ", ";

//     printf("concatenation: %s\n", ft_strjoin(3, arrayOfStrings, sep));
// }