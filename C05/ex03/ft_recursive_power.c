/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:12:00 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/27 11:11:29 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_recursive_power(2, 1));
	printf("%i\n", ft_recursive_power(2, 2));
	printf("%i\n", ft_recursive_power(6, 2));
	printf("%i\n", ft_recursive_power(6, 0));
	printf("%i\n", ft_recursive_power(0, 7));
	printf("%i\n", ft_recursive_power(0, 0));
} */
