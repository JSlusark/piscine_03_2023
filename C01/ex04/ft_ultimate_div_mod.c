/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 21:32:15 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/13 21:32:20 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}

/* #include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 100;
	b =	5;

	ft_ultimate_div_mod(&a, &b);
	printf("div is %d", a);
	printf("\n mod is %d", b);
	return (0);
} */
