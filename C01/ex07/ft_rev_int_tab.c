/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 21:33:43 by jslusark          #+#    #+#             */
/*   Updated: 2024/03/13 21:33:46 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp_storage;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp_storage = tab[start];
		tab[start] = tab[end];
		tab[end] = temp_storage;
		start++;
		end--;
	}
}

/* #include<stdio.h>
int main(void)
{
	int array_num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = 9;

	ft_rev_int_tab(array_num, size);
	printf("Array elements: ");
	for (int i = 0; i < size; i++) {
	printf("%d, ", array_num[i]);
	}
	return 0;
}
 */
