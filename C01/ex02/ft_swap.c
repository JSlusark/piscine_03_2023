/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 21:31:01 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/13 21:31:04 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/* #include <stdio.h>
int	main (void)
{
	int a;
	int b;

	a = 4;
	b = 2;
 	ft_swap(&a, &b);
	printf("a = %i", a);
	printf("\n");
	printf("b = %i", b);
} */
