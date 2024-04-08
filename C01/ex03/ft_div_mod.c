/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 21:31:53 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/13 21:31:58 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* #include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int div;
	int mod;

	a = 100;
	b = 5;

	ft_div_mod(a, b, &div, &mod);
	printf("DIV %d", div);
	printf("\n");
	printf("MOD %d", mod);
} */
