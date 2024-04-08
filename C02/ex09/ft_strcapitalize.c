/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:40:34 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/20 19:59:06 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowercase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + ('a' - 'A');
		}
		str++;
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*modified_string;
	int		x;

	x = 1;
	modified_string = str;
	ft_strlowercase (modified_string);
	while (*str)
	{
		if (x == 1 && (*str >= 'a' && *str <= 'z'))
		{
			*str = *str - ('a' - 'A');
			x = 0;
		}
		if (*str >= '0' && *str <= '9')
			x = 0;
		if ((*str >= 32 && *str <= 47))
			x = 1;
		str++;
	}
	return (modified_string);
}
