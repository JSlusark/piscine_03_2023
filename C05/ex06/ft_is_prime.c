/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:03:47 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/27 11:50:51 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/* #include <stdio.h>
int main(void)
{
	printf("%i\n", ft_is_prime(0));
	printf("%i\n", ft_is_prime(2));
	printf("%i\n", ft_is_prime(10));
	printf("%i\n", ft_is_prime(13));
	printf("%i\n", ft_is_prime(20));
	printf("%i\n", ft_is_prime(25));
	printf("%i\n", ft_is_prime(17));
	return 0;
} */
