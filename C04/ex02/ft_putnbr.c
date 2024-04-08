/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:38:01 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/25 11:24:09 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_write('-');
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	nb = nb % 10 + '0';
	ft_write(nb);
}
/* #include <stdio.h>
#include <limits.h>
int	main(void)
{
	ft_putnbr(5);
	ft_putnbr(-5);
	ft_putnbr(-10);
	ft_putnbr(-2147483648);
	ft_write('\n');
	printf("%i\n", INT_MIN);
	printf("%i\n", INT_MAX);
} */
