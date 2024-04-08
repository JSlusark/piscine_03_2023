/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:11:58 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/27 11:11:15 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nb_stored;

	nb_stored = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb_stored * nb;
		power--;
	}
	return (nb);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_iterative_power(2, 1));
	printf("%i\n", ft_iterative_power(2, 2));
	printf("%i\n", ft_iterative_power(6, 2));
	printf("%i\n", ft_iterative_power(6, 0));
	printf("%i\n", ft_iterative_power(0, 7));
	printf("%i\n", ft_iterative_power(0, 0));
} */
