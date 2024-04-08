/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:13:51 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/10 15:13:53 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char symbol);

void	ft_create_rows(int x, char outer_col, char inner_col)
{
	int	col;

	col = 1;
	ft_putchar(outer_col);
	while (col <= x - 2)
	{
		ft_putchar(inner_col);
		col++;
	}
	if (x != 1)
	{
		ft_putchar(outer_col);
	}
	ft_putchar('\n');
	col = 1;
}

void	rush(int x, int y)
{
	int	row;

	row = 1;
	if (x < 1 || y < 1)
	{
		write(1, "Error!", 6);
	}
	else
	{
		while (row <= y)
		{
			if (row == 1 || row == y)
			{
				ft_create_rows(x, 'o', '-');
			}
			else
			{
				ft_create_rows(x, '|', ' ');
			}
			row++;
		}
	}
}
