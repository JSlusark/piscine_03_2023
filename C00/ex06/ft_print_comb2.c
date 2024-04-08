/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:42:33 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/08 16:43:29 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_put_char(char digit)
{
	write(1, &digit, 1);
}

void ft_print_comb2(void)
{
	int set_1;
	int set_2;

	set_1 = 0;
	while (set_1 <= 98)
	{
		set_2 = set_1 + 1;
		while (set_2 <= 99)
		{
			ft_put_char(set_1 / 10 + '0');
			ft_put_char(set_1 % 10 + '0');
			ft_put_char(' ');
			ft_put_char(set_2 / 10 + '0');
			ft_put_char(set_2 % 10 + '0');
			if (!(set_1 == 98 && set_2 == 99))
			{
				ft_put_char(',');
				ft_put_char(' ');
			}
			set_2++;
		}
		set_1++;
	}
}

int main(void)
{
	ft_print_comb2();
	return 0;
}
