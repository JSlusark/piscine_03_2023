/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:24:41 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/27 11:30:01 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/* #include <stdio.h>
int	main(void)
{
	printf ("%i\n", ft_sqrt(36));
	printf ("%i\n", ft_sqrt(9));
	printf ("%i\n", ft_sqrt(12));
	printf ("%i\n", ft_sqrt(20));
} */
