/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 09:11:21 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/26 10:15:56 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *arg1)
{
	while (*arg1)
	{
		write(1, arg1, 1);
		arg1++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc >= 1)
	{
		ft_print_program_name(*argv);
	}
}
